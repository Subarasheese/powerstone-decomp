/* --agent SIDE MODEL: a learned policy (port/rl) plays side SIDE (1 or 2) in place of the pad or the game's AI, in any fight
   the game starts (arcade, versus, or --boot-fight). Give the flag twice for both sides.

   The game fills each fighter's 36-byte command block (+0x2DC) once a frame in game_update_fighters, from the pad through the
   button map for a human and from ai_update_slot for the computer. port_agent_input runs right after that (under NATIVE_PORT)
   and, for a side the agent plays, puts the policy's command there instead: held bits, the previous held bits, the newly
   pressed and newly released bits, as the game's own pad code forms them (game_pad_update); the stick words stay zero, as the
   game's AI leaves them.

   The policy runs in a Python process (port/rl/agent.py MODEL), started on the first fight frame and fed through pipes:
   once a header (u32 format version 3), then per frame u8 side, u32 length and one record (record.c, port_record_build:
   the same bytes the recorder writes); it answers u32 held bits. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

unsigned port_record_max(void);
unsigned port_record_build(unsigned char *rec, uint32_t frame);

const char *port_agent_model[2];   /* by side 0 / 1 */
const char *port_agent_python = "python3";
const char *port_agent_script = "port/rl/agent.py";

struct link {
    int to, from;
    uint32_t held;
    int dead;
};
static struct link links[2];

static int start(int side)
{
    int a[2], b[2];
    if (pipe(a) || pipe(b))
        return 0;
    pid_t pid = fork();
    if (pid < 0)
        return 0;
    if (pid == 0) {
        dup2(a[0], 0);
        dup2(b[1], 1);
        close(a[1]);
        close(b[0]);
        execlp(port_agent_python, port_agent_python, port_agent_script, port_agent_model[side], (char *)0);
        perror("powerstone: --agent");
        _exit(127);
    }
    close(a[0]);
    close(b[1]);
    links[side].to = a[1];
    links[side].from = b[0];
    uint32_t ver = 3;
    if (write(links[side].to, &ver, 4) != 4)
        return 0;
    fprintf(stderr, "powerstone: agent %s plays side %d\n", port_agent_model[side], side + 1);
    return 1;
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

void port_agent_input(char *p, int side)
{
    static unsigned char *rec;
    static uint32_t frame[2];
    struct link *l = &links[side];
    if (!port_agent_model[side] || l->dead)
        return;
    if (!l->to) {
        signal(SIGPIPE, SIG_IGN);
        if (!start(side)) {
            l->dead = 1;
            return;
        }
    }
    if (!rec)
        rec = malloc(port_record_max());
    uint32_t len = port_record_build(rec, ++frame[side]);
    unsigned char s = (unsigned char)side;
    uint32_t held;
    if (!io(l->to, &s, 1, 1) || !io(l->to, &len, 4, 1) || !io(l->to, rec, len, 1) || !io(l->from, &held, 4, 0)) {
        fprintf(stderr, "powerstone: agent for side %d stopped; the side goes back to its own input\n", side + 1);
        l->dead = 1;
        return;
    }
    uint32_t *w = (uint32_t *)(p + 0x2DC);
    uint32_t prev = l->held;
    w[0] = held;
    w[1] = prev;
    w[2] = held & ~prev;
    w[3] = prev & ~held;
    for (int i = 4; i < 9; i++)
        w[i] = 0;
    l->held = held;
}
