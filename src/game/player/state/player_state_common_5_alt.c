/* shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states (0c064cc8-0c06588c) */

extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int math_atan_angle16(float);
char pl_step_motion(char *);
void pl_start_motion(char *, int, int);
int thunk_math_mat_get_translate(char *, char *);
int pl_mode12_phase0(int);
int pl_mode12_phase1(int);
int pl_wait_anim_end_c(int);

void pl_mode08_09_phase0_launch(char *obj)
{
    float dist, slope;
    char *target, *player_blk;

    if (pl_step_motion(obj) == 0)
        return;
    if (obj[4] == 7) {
        pl_start_motion(obj, 1, 163);
        obj[0x71a9] = 1;
        obj[0x71a8] = 1;
        *(float *)(obj + 56) = math_cos_angle16(0x14000 - *(int *)(obj + 48)) * 25.0f;
        *(float *)(obj + 64) = math_sin_angle16(0x14000 - *(int *)(obj + 48)) * 25.0f;
        *(float *)(obj + 60) = -(math_cos_angle16(4551) * 25.0f);
    } else {
        dist = *(float *)0xC494D1C;
        if (!(200.0f > dist))
            dist = 200.0f;
        if (dist == 0.0f)
            dist = 0.0099999998f;
        target = *(char **)(obj + 28);
        *(float *)(obj + 0x7254) = (*(float *)(obj + 36) - *(float *)(target + 36)) + -50.0f;
        slope = *(float *)(obj + 0x7254) / dist;
        *(int *)(obj + 44) = (unsigned short)(math_atan_angle16(slope) + 0x4000);
        if (*(int *)(obj + 44) < 25486)
            *(int *)(obj + 44) = 25486;
        *(float *)(obj + 60) = math_sin_angle16(0x14000 - *(int *)(obj + 44)) * 25.0f;
        *(float *)(obj + 0x7254) = math_cos_angle16(0x14000 - *(int *)(obj + 44)) * 25.0f;
        *(float *)(obj + 56) = math_cos_angle16(0x14000 - *(int *)(obj + 48)) * *(float *)(obj + 0x7254);
        *(float *)(obj + 64) = math_sin_angle16(0x14000 - *(int *)(obj + 48)) * *(float *)(obj + 0x7254);
        *(float *)(obj + 76) = 0.0f;
        *(float *)(obj + 68) = 0.0f;
        *(float *)(obj + 72) = 0.0f;
        pl_start_motion(obj, 1, 163);
        obj[0x71a9] = 1;
        obj[0x71a8] = 1;
        player_blk = (char *)(0xC7E40C4 + (unsigned short)((unsigned char)obj[3] * 0x72D0));
        thunk_math_mat_get_translate(player_blk + 0x300 + (short)(player_blk[0x71f1] * 3520) + 352, obj + 32);
    }
    *(short *)(obj + 0xEC) = 40;
    *(short *)(obj + 0xF2) = 2;
    obj[10] = obj[10] + 1;
}

int pl_mode12_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC065630))(a4, a5, a6, a7);
            }
            return pl_wait_anim_end_c(a4);
        }
        return pl_mode12_phase1(a4);
    }
    return pl_mode12_phase0(a4);
}
