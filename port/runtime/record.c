/* --record FILE: log every frame of play for learning (port/rl). Called at the top of every sys_main_loop_step, before the
   game's update, from the same hook as boot.c. Nothing in the game changes.

   The file is a header and then one record per game frame while a fight is shown (scene 4, fight-flow modes 1..5):

     header  "PSREC4\0\0", then u32 fixed record size, u32 header size (32), u32 player snapshot sizes (A, Bsz),
             u32 object size, u32 zero
     record  u32  frame number (counts every game frame since the start, so gaps show where nothing was recorded)
             u8   scene (g_game_work[4]), u8 fight-flow mode, u8 its sub-state, u8 the computer's level (g_305c)
             96   g_game_state[0..96) (round timer, round and match counts, stage, player mode, ...)
             32   extra: i32 g_cam_yaw16 (the camera's yaw: a held direction acts at its pad angle plus this), 28 zero
                  (version 1 files, "PSREC1", have no extra block)
             per fighter (side 1, then side 2):
               36  the input block at +0x2DC: the commands the fighter acted on in the frame just played, in the game's
                   own form (after the button map for a human, from the AI for the computer)
               A   the fighter's first A bytes (position +0x20..+0x28, angle +0x30, velocities, motion, ...)
               B   the fighter's bytes 0x7100..0x7100+B (state 0x71BA, held item 0x71CC, life 0x71D4, power form 0x71F3,
                   stones 0x7230, ...)
               128 its motion's next 16 hit rows (8 bytes each; byte 1 is the attack set, non-zero while an attack is
                   live): row 0 is the one at +0x71A0 + +0x71A2, in the motion data at 0x0C664B50 + side * 0xB5EC8 +
                   0xAC288 (rl-data/hitvolumes.md); zero past the motion data
             u16  the number of objects that follow, u16 zero
             per object, every live object of classes 1..4 (the classes the hit system handles: 1 shots and special-attack
             effects, 2 stage objects that can be picked up or broken, 3 items and stones, 4 stage gimmicks), at most
             MAX_OBJ, OBJ_SIZE bytes each:
               u32  the object's console address (so a fighter's held-item pointer can be matched)
               u32  its tick handler as a console address (the object's kind; a native function is turned back into its
                    console address)
               0x270  the object's first bytes (+2 class, +4 type, +8 state, +0x20 position, +0x2C rotation, +0x50 ...,
                      attack spheres +0x148, hurt spheres +0x188, body volume +0x248)
               0x10   its bytes 0x300..0x310 (+0x30C kind of an item)

   The state in a record is the state after the frame just played; its input block is the input of that frame. So the
   action taken from record t's state is the input block in record t+1. */
#include <stdio.h>
#include <stdint.h>
#include <string.h>

const char *port_record_file;

#define B(a) (*(volatile unsigned char *)(uintptr_t)(a))
#define G 0x0C7F2EE0u
#define GS 0x0C7F302Cu
#define PL(i) (0x0C7E40C4u + (i) * 0x72D0u)
#define SNAP_A 0x300
#define SNAP_B 0x200
#define EXTRA 32
#define ROWS 128
#define FIXED_SIZE (8 + 96 + EXTRA + 2 * (36 + SNAP_A + SNAP_B + ROWS))
#define OBJ_HEAD 0x270
#define OBJ_SIZE (8 + OBJ_HEAD + 0x10)
#define MAX_OBJ 96
#define REC_MAX (FIXED_SIZE + 4 + MAX_OBJ * OBJ_SIZE)
#define CLASS_HEAD 0x0C7E4070u      /* g_obj_class_head: an object's next is at +0x18 */

#include "port.h"

/* a tick handler as a console address: the game stores both console addresses and native function pointers there */
static uint32_t console_handler(uint32_t h)
{
    static uint32_t cache_from[64], cache_to[64];
    if (h >= 0x0C000000u && h < 0x0D000000u)
        return h;
    for (int i = 0; i < 64; i++)
        if (cache_from[i] == h && h)
            return cache_to[i];
    uint32_t c = 0;
    for (unsigned i = 0; i < port_table_size; i++)
        if ((uint32_t)(uintptr_t)port_table[i].fn == h) {
            c = port_table[i].addr;
            break;
        }
    static int next;
    cache_from[next] = h;
    cache_to[next] = c;
    next = (next + 1) % 64;
    return c;
}

/* one record of the present state into rec (at most port_record_max() bytes); returns its size. Also what --agent sends
   its policy each frame. */
unsigned port_record_max(void)
{
    return REC_MAX;
}

unsigned port_record_build(unsigned char *rec, uint32_t frame)
{
    unsigned char *r = rec;
    memcpy(r, &frame, 4);
    r[4] = B(G + 4);
    r[5] = B(GS + 0);
    r[6] = B(GS + 1);
    r[7] = B(0x0C7F305C);
    r += 8;
    memcpy(r, (const void *)(uintptr_t)GS, 96);
    r += 96;
    memset(r, 0, EXTRA);
    memcpy(r, (const void *)(uintptr_t)0x0C7F31E0u, 4);
    r += EXTRA;
    for (int i = 0; i < 2; i++) {
        memcpy(r, (const void *)(uintptr_t)(PL(i) + 0x2DC), 36);
        r += 36;
        memcpy(r, (const void *)(uintptr_t)PL(i), SNAP_A);
        r += SNAP_A;
        memcpy(r, (const void *)(uintptr_t)(PL(i) + 0x7100), SNAP_B);
        r += SNAP_B;
        {
            uint32_t row = *(volatile uint16_t *)(uintptr_t)(PL(i) + 0x71A0) + B(PL(i) + 0x71A2);
            uint32_t a = 0x0C664B50u + (uint32_t)i * 0xB5EC8u + 0xAC288u + row * 8u;
            uint32_t end = 0x0C664B50u + (uint32_t)(i + 1) * 0xB5EC8u;
            for (int k = 0; k < 16; k++, a += 8)
                if (a + 8 <= end)
                    memcpy(r + 8 * k, (const void *)(uintptr_t)a, 8);
                else
                    memset(r + 8 * k, 0, 8);
            r += ROWS;
        }
    }
    unsigned char *count = r;
    r += 4;
    unsigned n = 0;
    for (int cls = 1; cls <= 4; cls++)
        for (uint32_t o = *(volatile uint32_t *)(uintptr_t)(CLASS_HEAD + 4 * cls); o && n < MAX_OBJ;
             o = *(volatile uint32_t *)(uintptr_t)(o + 0x18)) {
            if (!B(o))
                continue;
            uint32_t h = console_handler(*(volatile uint32_t *)(uintptr_t)(o + 0x10));
            memcpy(r, &o, 4);
            memcpy(r + 4, &h, 4);
            memcpy(r + 8, (const void *)(uintptr_t)o, OBJ_HEAD);
            memcpy(r + 8 + OBJ_HEAD, (const void *)(uintptr_t)(o + 0x300), 0x10);
            r += OBJ_SIZE;
            n++;
        }
    count[0] = (unsigned char)n;
    count[1] = (unsigned char)(n >> 8);
    count[2] = count[3] = 0;
    return (unsigned)(r - rec);
}

void port_record_step(void)
{
    static FILE *f;
    static uint32_t frame;
    static unsigned char rec[REC_MAX];
    if (!port_record_file)
        return;
    frame++;
    if (!f) {
        f = fopen(port_record_file, "wb");
        if (!f) {
            fprintf(stderr, "powerstone: cannot write %s; not recording\n", port_record_file);
            port_record_file = 0;
            return;
        }
        uint32_t h[8] = {0, 0, FIXED_SIZE, 32, SNAP_A, SNAP_B, OBJ_SIZE, 0};
        memcpy(h, "PSREC4\0\0", 8);
        fwrite(h, sizeof h, 1, f);
        fprintf(stderr, "powerstone: recording to %s\n", port_record_file);
    }
    unsigned scene = B(G + 4), mode = B(GS + 0);
    if (scene != 4 || mode < 1 || mode > 5)
        return;
    fwrite(rec, port_record_build(rec, frame), 1, f);
    if ((frame & 63) == 0)
        fflush(f);
}
