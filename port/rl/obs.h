/* obs.h: the policy's observation of a fight (version 2), computed from the port's records (port/runtime/record.c,
   format 4). One implementation for both sides of the learning: the port links it to observe live
   (port/runtime/agent.c), and port/rl/obsc.py loads it as a shared library to observe recordings, so a model sees the
   same numbers in training and in play.

   Everything is seen from one fighter ("me"), in the frame of its bearing to the opponent (sideways, up, forwards);
   no absolute stage position is given: the stage is known only through the sensors around both fighters.

   Per frame (PSO_FRAME floats), for me and then the opponent:
     position relative to me (3), velocity (3), facing (2), life, super, super time, +0x71F3, +0x71F8, stones (6),
     motion floats +0x50..+0x94 (8), +0x7120 and pl_opponent_dist_to_body_sphere (2),
     4 attack spheres: centre relative to me (3), radius, live (5 each), attack on, power, suppressed time (3),
     11 hurt spheres: centre relative to me (3), radius (4 each), hurtable, invulnerable time (2), push off (1),
     attack timing from the move's hit rows: live now, its frames left, the next attack (starts in, lasts, set),
     the one after (starts in, lasts), the motion frame, rows into the move (11),
     hit this frame, attack connected, hit-stop (2), holding the opponent, has a target, holds an item (7 in all),
     the opponent's commands (10; zero for me: a policy fed its own last input learns to repeat it),
     +0x102 among its common values (6)
   then the distance between them and the round timer (2), and the sensors around me and around the opponent
   (PSO_SENSE each: walls in 8 directions at 2 heights, the floor at 17 points, the ceiling over and ahead, its kind).
   The observation stacks this for now, 3 and 8 frames before (PSO_OBS). */
#ifndef PS_OBS_H
#define PS_OBS_H
#include <stdint.h>

#define PSO_FIGHTER 128
#define PSO_SENSE 37
#define PSO_FRAME (2 * PSO_FIGHTER + 2 + 2 * PSO_SENSE)
#define PSO_HISTORY 3
#define PSO_OBS (PSO_FRAME * PSO_HISTORY)
#define PSO_CATS 8             /* states, characters, character x super, motions: me and the opponent each */
#define PSO_K 32               /* the nearest objects */
#define PSO_OF 25
#define PSO_GEOM_MAX 64
#define PSO_ACTIONS 72
#define PSO_KIND_HASH 509     /* object kinds when no list is given: 1 + (handler / 2) % 509 */

typedef struct {
    int n;
    float lo[PSO_GEOM_MAX][3], hi[PSO_GEOM_MAX][3], kind[PSO_GEOM_MAX][2];
} pso_geom;

typedef struct {
    float obs[PSO_OBS];                    /* unnormalised; the model normalises */
    int16_t cats[PSO_CATS];
    float ofeat[PSO_K][PSO_OF];
    int16_t ocats[PSO_K][4];
    uint8_t omask[PSO_K];
    float bearing, yaw;                    /* for turning an action back into pad bits (pso_decode) */
} pso_out;

/* the record's layout (record.c, format 4) */
#define PSO_REC_FIXED 3024
#define PSO_PLAYER_AT(i) (136 + (i) * 1444)
#define PSO_OBJ_SIZE 648
#define PSO_OBJ_HEAD 0x270

/* frames: n consecutive records, oldest first (the last is now), n >= 1; up to 10 are used. kinds: the object kinds
   (tick handlers as console addresses) the model knows, ascending, ids 1..n_kinds (unknown: 0); with n_kinds 0,
   a hash of the handler (PSO_KIND_HASH). geoms: per stage
   number. mem/mem_base/mem_len: memory to read the attack records from (+0xF4 points into 1ST_READ.BIN's tables): the
   console's RAM in the port, the executable loaded at 0x0C010000 offline. Returns 0, or -1 for a malformed record. */
int pso_observe(const uint8_t *const *frames, const uint32_t *lens, int n, int side, const uint32_t *kind_keys, int n_kinds,
                const pso_geom *geoms, int n_geoms, const uint8_t *mem, uint32_t mem_base, uint32_t mem_len, pso_out *out);

/* the pad bits (the game's command bits) for action 0..71: 9 directions relative to the bearing (0 none) x 8 sets of
   punch / kick / jump */
uint32_t pso_decode(int action, float bearing, float yaw);

/* the action 0..71 nearest to held pad bits (the teacher's input in imitation): pso_decode's inverse */
int pso_encode(uint32_t held, float bearing, float yaw);

/* the sizes this build uses: PSO_FRAME, PSO_HISTORY, PSO_CATS, PSO_K, PSO_OF, PSO_GEOM_MAX, PSO_ACTIONS,
   sizeof(pso_out), sizeof(pso_geom) (obsc.py checks them) */
void pso_sizes(int out[9]);

/* a stage's collision volumes from the console's tables in mem (at mem_base) */
void pso_stage_geometry(const uint8_t *mem, uint32_t mem_base, uint32_t mem_len, int stage, pso_geom *g);

#endif
