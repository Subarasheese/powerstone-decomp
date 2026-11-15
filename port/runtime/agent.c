/* A learned policy in the game (port/rl).

     --agent SIDE MODEL    the policy plays side SIDE (1 or 2) in place of the pad or the game's AI, in any fight the game
                           starts (arcade, versus, --boot-fight); MODEL is a model file (a server for it is started:
                           port/rl/serve.py) or unix:SOCKET (a server already running, as in training: port/rl/rl_run.py)
     --teach SIDE SOCKET   the game's AI plays side SIDE as usual, and every decision it makes is sent to the server as
                           an example to learn from (imitation)

   The game fills each fighter's 36-byte command block (+0x2DC) once a frame in game_update_fighters, from the pad through
   the button map for a human and from the AI for the computer. port_agent_input runs right after that (under NATIVE_PORT).
   Every second frame of a fight (fight-flow mode 3) it makes the observation (port/rl/obs.c, the same code the learning
   runs on recordings), sends it to the server, and holds the action the server answers; for --teach it sends the action
   the AI took instead and leaves the block alone. It also counts the reward each decision earned (as port/rl/learn.py
   expects: damage dealt +1, taken -4 a point; a round won by knock-out +60, +240 more without damage, up to +120 more the
   sooner; lost -120; the time running out -60 (--timeout-penalty; behind, at least -120); each decision -0.02) and tells the server when a round ends.

   The protocol (little-endian): once, "PSA2", u32 side, u32 mode (0 act, 1 teach), i32 a tag for the opponent (--tag, or
   its AI level; -1: the game's own); then per decision one psa_req, and
   in act mode the server answers an i32 action (0..71). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "../rl/obs.h"

unsigned port_record_max(void);
unsigned port_record_build(unsigned char *rec, uint32_t frame);

const char *port_agent_model[2];   /* by side: --agent's MODEL */
const char *port_teach_sock[2];    /* by side: --teach's SOCKET */
const char *port_agent_python = "python3";
float port_agent_timeout_penalty = 60.0f; /* --timeout-penalty N: the time running out costs N (behind: at least 120) */
int port_agent_tag = -1;           /* --tag N: what the opponent is, for the server's reports (default: its AI level) */

#define REPEAT 2
#define HIST 10

#pragma pack(push, 1)
typedef struct {
    float obs[PSO_OBS];
    int16_t cats[PSO_CATS];
    float ofeat[PSO_K][PSO_OF];
    int16_t ocats[PSO_K][4];
    uint8_t omask[PSO_K];
    int32_t teacher;          /* the AI's action (teach), -1 (act) */
    float reward;             /* earned since the decision before */
    uint8_t done;             /* the decision before ended a round */
    uint8_t has_event;        /* a round ended: event follows */
    uint8_t pad[2];
    float event[6];           /* won by knock-out, lost, a Perfect, damage taken, the time ran out, the opponent's character */
} psa_req;
#pragma pack(pop)

struct side_state {
    int fd, dead, mode;              /* mode 0 act, 1 teach */
    unsigned char *ring[HIST];
    uint32_t len[HIST];
    int n, frames;
    uint32_t held, prev_held;
    float reward;
    int done, has_event;
    float event[6];
    int round_on, taken, last_me, last_op, fight_me, fight_op, time_left, have_last;
    uint32_t frame_no;
};
static struct side_state st[2];
static pso_geom geoms[12];
static int geoms_ready;

static int connect_to(const char *path)
{
    int fd = socket(AF_UNIX, SOCK_STREAM, 0);
    struct sockaddr_un a;
    memset(&a, 0, sizeof a);
    a.sun_family = AF_UNIX;
    strncpy(a.sun_path, path, sizeof a.sun_path - 1);
    for (int i = 0; i < 240; i++) {
        if (connect(fd, (struct sockaddr *)&a, sizeof a) == 0)
            return fd;
        usleep(250000);
    }
    close(fd);
    return -1;
}

static int io(int fd, void *buf, size_t n, int out)
{
    size_t done = 0;
    while (done < n) {
        ssize_t k = out ? write(fd, (char *)buf + done, n - done) : read(fd, (char *)buf + done, n - done);
        if (k <= 0)
            return 0;
        done += (size_t)k;
    }
    return 1;
}

/* --agent with a model file: a server of our own (port/rl/serve.py) on a socket in /tmp */
static const char *own_server(int side, const char *model)
{
    static char path[2][108];
    snprintf(path[side], sizeof path[side], "/tmp/powerstone_agent_%d_%d.sock", (int)getpid(), side);
    unlink(path[side]);
    pid_t pid = fork();
    if (pid == 0) {
        execlp(port_agent_python, port_agent_python, "port/rl/serve.py", model, path[side], (char *)0);
        perror("powerstone: --agent");
        _exit(127);
    }
    return path[side];
}

static int start(int side)
{
    struct side_state *s = &st[side];
    const char *sock;
    if (port_teach_sock[side])
        sock = port_teach_sock[side], s->mode = 1;
    else if (!strncmp(port_agent_model[side], "unix:", 5))
        sock = port_agent_model[side] + 5;
    else
        sock = own_server(side, port_agent_model[side]);
    s->fd = connect_to(sock);
    if (s->fd < 0)
        return 0;
    extern int port_ai_level[2];
    uint32_t hello[4];
    memcpy(hello, "PSA2", 4);
    hello[1] = (uint32_t)side, hello[2] = (uint32_t)s->mode;
    hello[3] = (uint32_t)(port_agent_tag >= 0 ? port_agent_tag : port_ai_level[1 - side]);
    if (!io(s->fd, hello, sizeof hello, 1))
        return 0;
    for (int i = 0; i < HIST; i++)
        s->ring[i] = malloc(port_record_max());
    if (!geoms_ready) {
        for (int g = 0; g < 12; g++)
            pso_stage_geometry((const uint8_t *)(uintptr_t)0x0C000000u, 0x0C000000u, 0x01000000u, g, &geoms[g]);
        geoms_ready = 1;
    }
    fprintf(stderr, "powerstone: %s plays side %d\n", s->mode ? "the game's AI (teaching)" : "the agent", side + 1);
    return 1;
}

static void lost(int side)
{
    fprintf(stderr, "powerstone: the server for side %d went away; the side goes back to its own input\n", side + 1);
    st[side].dead = 1;
}

/* the reward since the frame before, from this frame's record */
static void count(struct side_state *s, const unsigned char *rec, int side)
{
    int mode = rec[5];
    const unsigned char *pm = rec + PSO_PLAYER_AT(side) + 36, *po = rec + PSO_PLAYER_AT(1 - side) + 36;
    int16_t me, op;
    memcpy(&me, pm + 0x300 + (0x71D4 - 0x7100), 2);
    memcpy(&op, po + 0x300 + (0x71D4 - 0x7100), 2);
    if (s->have_last && s->round_on) {
        int dealt = s->last_op - op > 0 ? s->last_op - op : 0, taken = s->last_me - me > 0 ? s->last_me - me : 0;
        s->taken += taken;
        s->reward += 1.0f * dealt - 4.0f * taken;
    }
    s->last_me = me, s->last_op = op, s->have_last = 1;
    if (mode == 3) {
        s->fight_me = me, s->fight_op = op;     /* the round's last fight frame: the agent is not asked between rounds */
        s->time_left = rec[8 + 0x21];
        if (!s->round_on)
            s->round_on = 1, s->taken = 0;
    } else if (s->round_on) {
        s->round_on = 0;
        int ko_win = s->fight_op <= 0 && s->fight_me > 0, ko_loss = s->fight_me <= 0 && s->fight_op > 0;
        int timeout = !ko_win && !ko_loss;
        if (ko_win)
            s->reward += 60.0f + (s->taken == 0 ? 240.0f : 0.0f) + 120.0f * (s->time_left > 99 ? 99 : s->time_left) / 99.0f;
        else if (ko_loss)
            s->reward -= 120.0f;
        else if (s->fight_me < s->fight_op)        /* the time ran out, behind */
            s->reward -= port_agent_timeout_penalty > 120.0f ? port_agent_timeout_penalty : 120.0f;
        else                                       /* the time ran out, ahead or level */
            s->reward -= port_agent_timeout_penalty;
        s->done = 1;
        s->has_event = 1;
        s->event[0] = ko_win, s->event[1] = ko_loss || (timeout && s->fight_me < s->fight_op);
        s->event[2] = ko_win && s->taken == 0, s->event[3] = (float)s->taken, s->event[4] = timeout;
        s->event[5] = (float)*(const unsigned char *)(uintptr_t)(0x0C7E40C4u + (1 - side) * 0x72D0u + 4);
        /* a line per round in the log: what an arcade run went through can be read afterwards */
        static const char *names[] = {"Falcon", "Ryoma", "Wang-Tang", "Jack", "Gunrock", "Galuda", "Ayame", "Rouge",
                                      "Kraken", "Valgas", "Valgas (final)"};
        const unsigned char *gs = (const unsigned char *)(uintptr_t)0x0C7F302Cu;
        int stage = gs[0x25];
        int cm = *(const unsigned char *)(uintptr_t)(0x0C7E40C4u + side * 0x72D0u + 4);
        int co = *(const unsigned char *)(uintptr_t)(0x0C7E40C4u + (1 - side) * 0x72D0u + 4);
        time_t now = time(0);
        char hm[16];
        strftime(hm, sizeof hm, "%H:%M:%S", localtime(&now));
        fprintf(stderr, "powerstone: %s round over: stage %d, the agent (%s) against %s: %s%s, life %d to %d, %d s left, "
                "damage taken %d\n", hm, stage, cm < 11 ? names[cm] : "?", co < 11 ? names[co] : "?",
                ko_win ? "won by knock-out" : ko_loss ? "lost by knock-out" : s->fight_me > s->fight_op ? "won on time" :
                s->fight_me < s->fight_op ? "lost on time" : "a draw on time",
                ko_win && s->taken == 0 ? " (Perfect)" : "", s->fight_me, s->fight_op, s->time_left, s->taken);
    }
}

void port_agent_input(char *p, int side)
{
    struct side_state *s = &st[side];
    if ((!port_agent_model[side] && !port_teach_sock[side]) || s->dead)
        return;
    if (!s->fd) {
        signal(SIGPIPE, SIG_IGN);
        if (!start(side)) {
            fprintf(stderr, "powerstone: no server for side %d\n", side + 1);
            s->dead = 1;
            return;
        }
    }
    /* this frame's record, into the history ring */
    int slot = s->n % HIST;
    s->len[slot] = port_record_build(s->ring[slot], ++s->frame_no);
    s->n++;
    const unsigned char *rec = s->ring[slot];
    count(s, rec, side);
    uint32_t *w = (uint32_t *)(p + 0x2DC);
    if (rec[5] != 3) {                      /* not fighting: nothing to decide */
        s->frames = 0;
        return;
    }
    if (s->frames++ % REPEAT == 0) {
        const uint8_t *frames[HIST];
        uint32_t lens[HIST];
        int m = s->n < HIST ? s->n : HIST;
        for (int i = 0; i < m; i++) {
            int j = (s->n - m + i) % HIST;
            frames[i] = s->ring[j], lens[i] = s->len[j];
        }
        static psa_req req;
        static pso_out o;
        pso_observe(frames, lens, m, side, 0, 0, geoms, 12, (const uint8_t *)(uintptr_t)0x0C000000u, 0x0C000000u,
                    0x01000000u, &o);
        memcpy(req.obs, o.obs, sizeof req.obs);
        memcpy(req.cats, o.cats, sizeof req.cats);
        memcpy(req.ofeat, o.ofeat, sizeof req.ofeat);
        memcpy(req.ocats, o.ocats, sizeof req.ocats);
        memcpy(req.omask, o.omask, sizeof req.omask);
        req.teacher = s->mode ? pso_encode(w[0], o.bearing, o.yaw) : -1;
        req.reward = s->reward - 0.02f;
        req.done = (uint8_t)s->done, req.has_event = (uint8_t)s->has_event;
        memcpy(req.event, s->event, sizeof req.event);
        s->reward = 0, s->done = 0, s->has_event = 0;
        if (!io(s->fd, &req, sizeof req, 1)) {
            lost(side);
            return;
        }
        if (!s->mode) {
            int32_t a;
            if (!io(s->fd, &a, 4, 0)) {
                lost(side);
                return;
            }
            s->held = pso_decode(a, o.bearing, o.yaw);
        }
    }
    if (s->mode)                            /* teaching: the AI's own command stays */
        return;
    uint32_t prev = s->prev_held;
    w[0] = s->held;
    w[1] = prev;
    w[2] = s->held & ~prev;
    w[3] = prev & ~s->held;
    for (int i = 4; i < 9; i++)
        w[i] = 0;
    s->prev_held = s->held;
}
