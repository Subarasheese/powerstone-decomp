/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a0dd0-0c0a0eec) */

extern short g_state15_wait_tbl[];
int pl_reset_pose(char *);
int pl_start_motion(char *, int, int);
float math_rand_float(void);
#define F(off) (*(float *)(player + (off)))

void pl_enter_state_15(char *player, int mode)
{
    unsigned int rnd;
    signed char mode_s;

    mode_s = mode;
    player[0x71BA] = 15;
    player[0x71BC] = 3;
    F(76) = 0.0f;
    F(68) = 0.0f;
    F(60) = 0.0f;
    F(64) = 0.0f;
    F(56) = 0.0f;
    F(72) = *(float *)(player + 0x71E4);
    player[0x106] = 1;
    pl_reset_pose(player);
    player[0x710A] = 0;
    player[0x710B] = 0;
    player[0x710C] = 0;
    switch (mode_s) {
    case 1:
        player[0x7205] = 1;
        pl_start_motion(player, 2, 0x91);
        break;
    case 2:
        player[0x7205] = 0;
        pl_start_motion(player, 2, 0x90);
        *(unsigned int *)(player + 0x30) = (unsigned short)(*(int *)(player + 0x30) + 0x8000);
        break;
    case 3:
        player[0x7205] = 1;
        pl_start_motion(player, 2, 0x91);
        *(unsigned int *)(player + 0x30) = (unsigned short)(*(int *)(player + 0x30) + 0x8000);
        break;
    default:
        player[0x7205] = 0;
        pl_start_motion(player, 2, 0x90);
        break;
    }
    player[0x71A9] = 1;
    player[0x71A8] = 1;
    player[0x7225] = 0;
    rnd = (unsigned int)(math_rand_float() * 255.0f);
    *(short *)(player + 0xEC) = g_state15_wait_tbl[rnd % 32];
}
