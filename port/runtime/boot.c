/* --boot-fight STAGE P1 P2: start the game in an arcade fight on a chosen stage with two chosen fighters, without the menus
   or the title book; the fighters' introduction and the round's opening play as in the arcade. Called at the top of every sys_main_loop_step (the game's C, under
   NATIVE_PORT). It presses nothing: it sets the bytes the menus leave behind.

   The fight flow (g_game_state mode, run by game_play_state_04 through g_tab_game_mode_handlers):
     mode 0  set-up: loads the stage and the fighters (game_reset_match_screen), places them (FUN_0c052b9e)
     mode 1  the fighters' introduction (camera on each in turn); the boot leaves it as it is
     mode 2  the round's opening: FUN_0c053434 sets the round up and spawns "CHALLENGE n" (fx_spawn_055cba), then FUN_0c0535b4
             counts 150 frames ("ACTION!" at 60) and turns the HUD on; the boot leaves it as it is
     mode 3  the fight
   With PORT_BOOT_LOG set, each change of scene or mode is printed. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

int port_boot_mode;      /* 0: off, 1: fight */
int port_boot_stage, port_boot_p1, port_boot_p2;
int port_boot_cpu;        /* --cpu-vs-cpu: both sides played by the game's AI (player mode 0) */
int port_boot_difficulty = -1; /* --difficulty N (0 easiest .. 7 hardest): the arcade difficulty option; -1 leaves the game's (3) */

#define B(a) (*(volatile unsigned char *)(uintptr_t)(a))
#define G 0x0C7F2EE0u    /* g_game_work: [0] phase of game_play_step, [4] scene (4 = fight), [35] attract, [36] title/menus */
#define GS 0x0C7F302Cu   /* g_game_state: [0] mode of the fight flow, [1] its sub-state, [0x25] stage, [0x45] player mode */
#define PL(i) (0x0C7E40C4u + (i) * 0x72D0u)

extern void game_reset_objects(void);
extern void thunk_FUN_0c062d78(void);
extern void cam_init_records(void);

int port_boot_random;     /* --boot-random: each match draws its stage and both fighters among the 8 that are not bosses */
int port_boot_bosses;     /* --boot-bosses: the draw takes Kraken (8) and Valgas (9) too, for either side, and their stages */
float port_boot_final = 0.15f; /* --boot-final P: with --boot-bosses, the share of matches against Valgas's final form (10),
                                  on his own stage (10) only; side 1 never plays him */

static void set_choices(void)
{
    if (port_boot_random) {
        /* fighters 0..7 (Falcon .. Rouge; 8..10 are Kraken, Valgas and Valgas's final form) and their stages 0..7
           (0x0C1525B4 gives each stage's fighter: stage n is fighter n's); with --boot-bosses 0..9, and the final form */
        static int seeded;
        if (!seeded) {
            srand((unsigned)time(0) ^ (unsigned)getpid() * 2654435761u);
            seeded = 1;
        }
        int n = port_boot_bosses ? 10 : 8;
        port_boot_stage = rand() % n;
        port_boot_p1 = rand() % n;
        port_boot_p2 = rand() % n;
        if (port_boot_bosses && (float)rand() / ((float)RAND_MAX + 1.0f) < port_boot_final)
            port_boot_stage = 10, port_boot_p2 = 10;
    }
    B(GS + 0x25) = (unsigned char)port_boot_stage;
    /* the difficulty option (g_game_work[49]): with the ladder position it sets the computer's level g_305c at the match's
       start (FUN_0c0597ce: settings 0..7 give level 1..22 at the first challenge, up to 31), which scales its damage and AI */
    if (port_boot_difficulty >= 0)
        B(G + 49) = (unsigned char)port_boot_difficulty;
    B(PL(0) + 4) = (unsigned char)port_boot_p1;
    B(PL(1) + 4) = (unsigned char)port_boot_p2;
    B(GS + 0x45) = port_boot_cpu ? 0 : 1;  /* one player (side 1); the other side is the computer (0: both computer). No record is joined for side 1,
                                         so a lost match ends in "THE END" (joining as Start does, FUN_0c0d7032(0, 0), would
                                         give the "Continue?" countdown instead) */
    /* last frame's player mode the same as this one: game_check_player_join takes a newly set bit for a player who has just
       pressed Start and sends the game to the book (scene 1) */
    B(GS + 0x46) = B(GS + 0x45);
}

int port_boot_matches;    /* --matches N: quit after N matches (0: never) */
int port_ai_level[2] = {-1, -1};
int port_match_level = -1;  /* --match-level N: hold the match's level g_305c at N (0..31): the damage scale, and the AI where
                               --cpu-level does not set it */  /* --cpu-level SIDE N: that side's AI plays at level N (0..31) */

/* The computer's level g_305c (0x0C7F305C; [1] holds level * 8) is one value for both sides: set by the match start
   from the difficulty option and the ladder (FUN_0c0597ce), read by the AI (ai_think, ai_roll_chance, ai_difficulty_tier)
   and by the damage scale (hit_calc_damage). game_update_fighters runs each side's AI in turn; --cpu-level swaps that
   side's level in for its AI update only (fighter_update_3_alt.c), and leaves the match's own value for everything else. */
static unsigned char saved_level[2];
static int level_swapped;

void port_ai_level_enter(int side)
{
    if (side < 0 || side > 1 || port_ai_level[side] < 0)
        return;
    saved_level[0] = B(0x0C7F305C);
    saved_level[1] = B(0x0C7F305D);
    B(0x0C7F305C) = (unsigned char)port_ai_level[side];
    B(0x0C7F305D) = (unsigned char)(port_ai_level[side] << 3);
    level_swapped = 1;
}

void port_ai_level_leave(void)
{
    if (!level_swapped)
        return;
    B(0x0C7F305C) = saved_level[0];
    B(0x0C7F305D) = saved_level[1];
    level_swapped = 0;
}

static void start_fight(void)
{
    /* game_play_step's own start (phase 0), done here so that its scene 0 / 1 (the title book) never runs */
    B(G + 35) = 0;
    B(G + 36) = 0;
    for (int i = 0; i < 14; i++)
        B(G + i) = 0;
    B(G + 0) = 1;
    B(0x0C7F3074) = 0;            /* g_select_ready_mask */
    B(0x0C7F3075) = 0;
    game_reset_objects();
    thunk_FUN_0c062d78();         /* the items' hit tables */
    cam_init_records();
    *(volatile int *)0x0C33F6B8 = 0;
    /* scene 4 from its start: what the stage select leaves (FUN_0c0a5cea): the fight flow at mode 0 */
    B(G + 4) = 4;
    for (int i = 0; i < 10; i++)
        B(GS + i) = 0;
    B(GS + 0x48) = 0;
    B(GS + 0x49) = 0;
    B(0x0C7F2DF0 + 0x56) = 0;      /* side 1's ladder position (challenge 1) */
    set_choices();
    fprintf(stderr, "powerstone: boot into a fight: stage %d, fighters %d and %d\n", port_boot_stage, port_boot_p1, port_boot_p2);
}

/* the end of a match: a line of results, and the quit after --matches */
static void match_over(int won, int taken, int perfect_rounds, int rounds_won)
{
    static int n, wins, perfect_matches;
    n++;
    wins += won;
    perfect_matches += won && taken == 0;
    fprintf(stderr, "powerstone: match %d %s: side 1 won %d round(s), %d without damage; took %d damage in all%s\n", n,
            won ? "won" : "lost", rounds_won, perfect_rounds, taken, won && taken == 0 ? " (Perfect match)" : "");
    if (port_boot_matches && n >= port_boot_matches) {
        fprintf(stderr, "powerstone: %d matches: %d won, %d lost, %d Perfect\n", n, wins, n - wins, perfect_matches);
        exit(0);
    }
}

void port_boot_step(void)
{
    static int phase, lost;
    if (port_match_level >= 0 && B(G + 4) == 4) {   /* the match start and the game's own adjustments set it: hold it */
        static int said;
        if (!said) {
            said = 1;
            fprintf(stderr, "powerstone: match level held at %d (the game had %d)\n", port_match_level, B(0x0C7F305C));
        }
        B(0x0C7F305C) = (unsigned char)port_match_level;
        B(0x0C7F305D) = (unsigned char)(port_match_level << 3);
    }
    static int prev_life, round_taken, match_taken, perfect_rounds, rounds_won, rounds_lost, in_round;
    if (!port_boot_mode)
        return;
    if (getenv("PORT_BOOT_LOG")) {
        static unsigned char last[3] = {0xFF, 0xFF, 0xFF};
        unsigned char cur[3] = {B(G + 4), B(GS + 0), B(GS + 1)};
        if (memcmp(cur, last, 3)) {
            fprintf(stderr, "powerstone: boot: scene %d, mode %d.%d\n", cur[0], cur[1], cur[2]);
            memcpy(last, cur, 3);
        }
    }
    if (phase == 0) {
        /* the first step after the boot screens (logo, warning) and the memory-card check, before the title draws */
        if (B(G + 37) || B(G + 38) || !B(G + 317) || !(B(G + 35) || B(G + 36)))
            return;
        start_fight();
        phase = 1;
        return;
    }
    /* side 1's damage, round by round (life at +0x71D4; a round is fight-flow mode 3) */
    if (B(G + 4) == 4) {
        int life = *(volatile short *)(uintptr_t)(PL(0) + 0x71D4);
        if (B(GS + 0) == 3) {
            if (!in_round) {
                in_round = 1;
                round_taken = 0;
                prev_life = life;
            }
            if (life < prev_life)
                round_taken += prev_life - life;
            prev_life = life;
        } else if (in_round) {
            in_round = 0;
            match_taken += round_taken;
            int foe = *(volatile short *)(uintptr_t)(PL(1) + 0x71D4);
            if (foe <= 0 && life > 0) {
                rounds_won++;
                perfect_rounds += round_taken == 0;
            } else if (life <= 0 && foe > 0)
                rounds_lost++;
        }
    }
    /* a won match: the arcade goes on to the next challenge's stage select (scene 3). Go back into the same fight instead,
       as the stage select would on its last step (FUN_0c0a5cea: scene 4, the fight flow from mode 0), at the same point of
       the ladder so the computer's level stays the same. */
    if (B(G + 4) == 3) {
        match_over(rounds_won > rounds_lost, match_taken, perfect_rounds, rounds_won);
        match_taken = perfect_rounds = rounds_won = rounds_lost = 0;
        B(G + 4) = 4;
        for (int i = 5; i < 9; i++)
            B(G + i) = 0;
        for (int i = 0; i < 10; i++)
            B(GS + i) = 0;
        B(0x0C7F2DF0 + 0x56) = 0;      /* side 1's ladder position (challenge 1) */
        set_choices();
        fprintf(stderr, "powerstone: boot: the next fight: stage %d, fighters %d and %d\n", port_boot_stage, port_boot_p1, port_boot_p2);
        phase = 1;
        return;
    }
    /* a lost match (and any match two computers fight): "THE END" (scene 6) plays out; when the game leaves it, or leaves
       the fight for anywhere else, the same fight starts again */
    if (B(G + 4) == 6)
        lost = 1;
    else if (lost || (phase >= 2 && B(G + 4) != 4)) {
        lost = 0;
        match_over(rounds_won > rounds_lost, match_taken, perfect_rounds, rounds_won);
        match_taken = perfect_rounds = rounds_won = rounds_lost = 0;
        start_fight();
        phase = 1;
        return;
    }
    if (phase != 1 || B(G + 4) != 4)
        return;
    if (B(GS + 0) == 2) {
        fprintf(stderr, "powerstone: boot: the round opens\n");   /* "CHALLENGE n", "ARE YOU READY?", "ACTION!": left as they are */
        phase = 2;
    }
}
