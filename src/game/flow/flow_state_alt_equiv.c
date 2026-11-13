/* mode 5..9 handlers, state predicates, HP gauge tick (0c054114-0c0559bc) */

void obj_release_class(int n);
void pl_place_start_positions(void);
void FUN_0c041e14(int n);
void FUN_0c0cc074(void);
void FUN_0c05fc00(void);
float math_rand_float(void);
void cam_reset_shake(int a, int b, int c, int d);
void cam_force_mode(int a, int b, int c);
void cam_request_mode_06(int voice, int side);
int pl_change_state(char *pl, int action, int arg);
typedef struct { float x, y, z; } VEC3;
#define G ((char *)0x0C7F302C)
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))
extern int FUN_0c055782(int count);
extern int FUN_0c0557d6(int count);
extern int FUN_0c055838(int count, int a);
extern int FUN_0c0558ac(int count);
extern int FUN_0c0d487e(void);

int FUN_0c055310(char side)
{
    unsigned int pick;
    char *row;

    G[0] = 9;
    G[1] = 0;
    G[2] = 0;
    G[3] = 0;
    G[4] = 0;
    obj_release_class(1);
    obj_release_class(2);
    obj_release_class(3);
    obj_release_class(4);
    obj_release_class(5);
    pl_place_start_positions();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    FUN_0c0cc074();
    FUN_0c05fc00();
    G[0x16B] = 0;
    G[0x24] = 0;
    G[0x166] = 0;
    G[0x4C] = 0;
    *(short *)(G + 0x168) = 0;
    G[0x23] = side;
    PL(1 - G[0x23])[1] = 0;
    *(VEC3 *)(PL(G[0x23]) + 0x20) = ((VEC3 *)0x0C345DF4)[G[0x25]];
    *(int *)(PL(G[0x23]) + 0x30) = ((int *)0x0C345EE4)[G[0x25]];
    *(float *)(PL(1 - G[0x23]) + 0x20) = *(float *)(PL(G[0x23]) + 0x20) + -400.0f;
    *(float *)(PL(1 - G[0x23]) + 0x28) = *(float *)(PL(G[0x23]) + 0x28) + -400.0f;
    pick = (unsigned int)(math_rand_float() * 255.0f) % 2;
    cam_reset_shake(0, 0, 99, 0);
    cam_force_mode(0, 0, 64);
    side = G[0x23];
    row = (char *)0x0C155400 + PL(side)[4] * 8 + pick * 4;
    cam_request_mode_06(row[(unsigned int)(math_rand_float() * 255.0f) % 4], side);
    pl_change_state(PL(G[0x23]), 21, pick);
    return pl_change_state(PL((signed char)(1 - G[0x23])), 8, 0);
}

int FUN_0c05590c(char player_idx)
{
    unsigned short rec_off = (unsigned short)((signed char)player_idx * 0x72d0);
    signed char bit = *(signed char *)(0xC7E40C8 + rec_off);
    short *flags = (short *)(0xC7F4750 + 10);
    char *state = (char *)0xC7F4750;
    short old_flags = *flags;
    int changed, count = 0, bit_idx, result;
    *flags = old_flags | (1 << bit);
    changed = (old_flags != *flags);
    for (bit_idx = 0; bit_idx < 10; bit_idx++)
        if (*flags & (1 << bit_idx)) count++;
    if (count) state[5] = 1;
    result = changed;
    result |= FUN_0c055782(count);
    result |= FUN_0c0557d6(count);
    result |= FUN_0c055838(count, (signed char)player_idx);
    result |= FUN_0c0558ac(count);
    state[7] = 1;
    if (result != 0)
        return FUN_0c0d487e();
    return 1;
}
