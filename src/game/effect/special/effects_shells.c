/* effect object constructor and update pairs for character special moves (unidentified kinds) (0c0c8acc-0c0c964c) */

/* named globals (symbols.txt) */
int FUN_0c0c9526(int a4, int a5, int a6, int a7);
extern char g_camera_pos[];
extern char g_res_kyoutsuu[];
typedef struct { int x, y, zero; } S12;
extern char *obj_create(int, int, int, int);
extern void FUN_0c06233a(char *, char *, int);
extern char g_spr_bank_player_fx[];
extern void *memset(void *, int, int);
extern void fx_update_trail_chain(void);
struct o24_float { char p[0x24]; float v; };
typedef struct { int a, b, offset; } vec12;
extern int fx_trail_spawn_segment(char *);
extern float math_round_away_float(float);
extern void fx_update_trail_segment(void);
extern void obj_destroy(char *);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
struct oEE_short { char p[0xEE]; short v; };
struct oF0_float { char p[0xF0]; float v; };
int fx_spawn_04512c(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int _quick_odd_mvn();
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o308_float { char p[0x308]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oC_float { char p[0xC]; float v; };

void fx_spawn_trail_chain(char *owner, unsigned char variant)
{
    char *puff, *child;
    int zero;
    float one;

    puff = obj_create(1, 1, 4, 0);
    if (puff == 0) {
        return;
    }
    puff[0] = 1;
    puff[3] = owner[3];
    puff[4] = owner[4];
    puff[1] = 1;
    *(short *)(puff + 6) = 31;
    puff[5] = 25;
    *(void (**)(void))(puff + 16) = fx_update_trail_chain;
    *(S12 *)(puff + 32) = *(S12 *)(owner + 32);
    *(S12 *)(puff + 44) = *(S12 *)(owner + 44);
    one = 1.0f;
    *(int *)(puff + 44) = *(int *)(puff + 44) + ((int *)0xC33C948)[variant];
    *(float *)(puff + 84) = one;
    *(float *)(puff + 80) = one;
    *(float *)(puff + 88) = one;
    memset(puff + 776, 0, 20);
    *(char *)(puff + 776 + 6) = ((char *)0xC153350)[variant];
    zero = 0;
    child = *(char **)(puff + 0x2E0);
    child[0] = 1;
    child = *(char **)(puff + 0x2E0);
    *(short *)(child + 2) = 31;
    FUN_0c06233a(*(char **)(puff + 0x2E0), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 21);
    child = *(char **)(puff + 0x2E0);
    *(float *)(child + 36) = 0.0f;
    *(int *)(child + 144) = zero;
    child = *(char **)(puff + 0x2E4);
    child[0] = 1;
    child = *(char **)(puff + 0x2E4);
    *(short *)(child + 2) = 31;
    FUN_0c06233a(*(char **)(puff + 0x2E4), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 22);
    child = *(char **)(puff + 0x2E4);
    *(float *)(child + 36) = 0.0f;
    *(int *)(child + 144) = zero;
    child = *(char **)(puff + 0x2E8);
    child[0] = 1;
    child = *(char **)(puff + 0x2E8);
    *(short *)(child + 2) = 31;
    FUN_0c06233a(*(char **)(puff + 0x2E8), g_spr_bank_player_fx + (signed char)(owner[3] * 24), 23);
    child = *(char **)(puff + 0x2E8);
    *(float *)(child + 36) = 0.0f;
    *(int *)(child + 144) = zero;
    child = *(char **)(puff + 0x2EC);
    FUN_0c06233a(child, (char *)g_res_kyoutsuu, 106);
    child[0] = 0;
    *(short *)(child + 2) = 543;
    *(float *)(child + 36) = 0.125f;
    *(float *)(child + 32) = 0.125f;
    *(float *)(child + 28) = 0.125f;
    *(float *)(child + 32) = one;
    *(float *)(child + 28) = one;
    *(float *)(child + 36) = one / *(float *)(puff + 88);
    *(float *)(child + 76) = one;
    *(float *)(child + 72) = one;
    *(float *)(child + 68) = one;
    *(char **)(puff + 28) = owner;
    *(short *)(puff + 236) = 4;
    *(short *)(puff + 238) = variant;
}

int FUN_0c0c8cea(int a4, int a5, int a6, float f4)
{
    register int t19;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u6;
    register float u4;

    t19 = 0xC0C8D7C;
    if ((int)a5 < (int)a6) {
        t0 = (a5 << 2);
        t1 = (a5 << 2);
        t2 = a5;
        t3 = (a5 << 2);
        u6 = f4;
        for (;;) {
            if (!(4000.0f > u6)) {
                *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t3) + 0x0))) + 0x0)) = 0x1;
                (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t3) + 0x0)))))->v) = 1.0f;
            } else {
                if (u6 > (0.0f)) {
                    u4 = u6;
                    u4 = (u4 / 4000.0f);
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t1) + 0x0))) + 0x0)) = 0x1;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t1) + 0x0)))))->v) = u4;
                } else {
                    *(unsigned char *)(((*(int *)((((0x2E0 + a4) + t0) + 0x0))) + 0x0)) = 0x0;
                    (((struct o24_float *)((*(int *)((((0x2E0 + a4) + t0) + 0x0)))))->v) = 0.0f;
                }
            }
            u6 = (u6 - 4000.0f);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x4);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)a6) {
                break;
            }
        }
        t19 = 0x24;
    }
    return t19;
}

void fx_trail_resize_chain(char *obj)
{
    float length, seg_step, seg_num, offset;
    int want, old_count, diff, idx, made;
    char *seg;

    length = *(float *)(obj + 240);
    if (obj[13] != 0 && obj[12] == 0) {
        length += 100.0f;
    }
    old_count = obj[14];
    if (length > 4000.0f) {
        length = 4000.0f;
    }
    if (*(short *)(obj + 238) >= 3) {
        seg_step = 90.0f;
    } else {
        seg_step = 45.0f;
    }
    want = (int)math_round_away_float(length / seg_step);
    if (want > obj[14]) {
        diff = want - old_count;
        if (diff > 0) {
            idx = 0;
            do {
                made = fx_trail_spawn_segment(obj);
                idx++;
                if (made != 0) {
                    obj[14]++;
                }
            } while (idx < diff);
        }
        want = obj[14];
    } else if (want < obj[14]) {
        idx = 0;
        seg = *(char **)(obj + 24);
        if (want > 0) {
            do {
                idx++;
                seg = *(char **)(seg + 24);
            } while (idx < want);
        }
        if (idx < old_count) {
            do {
                if (*(void (**)(void))(seg + 16) == fx_update_trail_segment) {
                    obj_destroy(seg);
                    obj[14]--;
                }
                idx++;
                seg = *(char **)(seg + 24);
            } while (idx < old_count);
        }
        want = obj[14];
    }
    idx = 0;
    seg = *(char **)(obj + 24);
    if (want > 0) {
        do {
            *(vec12 *)(seg + 44) = *(vec12 *)(obj + 44);
            *(vec12 *)(seg + 32) = *(vec12 *)(obj + 32);
            seg_num = (float)(idx + 1);
            offset = math_cos_angle16(0x14000 - *(int *)(seg + 44)) * seg_num * seg_step;
            *(float *)(seg + 36) = *(float *)(seg + 36) + (-offset);
            offset = math_cos_angle16(0x14000 - *(int *)(seg + 48)) * seg_num * seg_step;
            *(float *)(seg + 32) = *(float *)(seg + 32) + math_sin_angle16(0x14000 - *(int *)(seg + 44)) * offset;
            offset = math_sin_angle16(0x14000 - *(int *)(seg + 48)) * seg_num * seg_step;
            *(float *)(seg + 40) = *(float *)(seg + 40) + math_sin_angle16(0x14000 - *(int *)(seg + 44)) * offset;
            idx++;
            seg = *(char **)(seg + 24);
        } while (idx < want);
    }
    obj[14] = want;
}

int FUN_0c0c9394(int a4)
{
    int stk[5];
    register int t4;
    register int t5;
    register int t14;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register float u46;
    register float u47;
    register int t58;
    register int t52;
    register int t53;
    register int t3;
    int t7;
    int t15;
    register int t16;
    int t59;
    register int t60;

    *(unsigned char *)((a4 + 0xF)) = 0x0;
    t5 = *(int *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((a4 + 0xE)));
    if ((int)(*(int *)(((int)stk + 4))) <= 0) {
        t52 = 0x0;
        t53 = t5;
    } else {
        t4 = 0x0;
        for (;;) {
            if (((*(signed char *)((t5 + 0x2D8))) == 0) && (t7 = *(signed char *)((t5 + 0x108)), t3 = t7, t3 == 0)) {
                t3 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x1);
                t5 = (*(int *)((t5 + 0x18)));
                if ((int)t4 < (int)t3) continue;
                t14 = *(signed char *)((a4 + 0xF));
                if ((t14 != 0) && (t15 = *(int *)(((int)stk + 4)), t16 = *(int *)((t5 + 0x18)), t5 = t16, (int)t4 < (int)(t15 - 1))) {
                    t3 = (*(int *)((t5 + 0x10)));
                    return t14;
                }
                return t14;
            }
            break;
        }
        *(unsigned char *)((a4 + 0xF)) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((t5 + 0x20)); }
        math_vec3_sub((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), (a4 + 0x20));
        *(int *)((int)stk + 0) = (0xF0 + a4);
        (((struct oF0_float *)(a4))->v) = (math_vec3_length((((int)stk + 0) + 0x8)));
        *(unsigned char *)((a4 + 0xD)) = 0x5;
        *(unsigned char *)((a4 + 0xC)) = 0x4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((t5 + 0x20)); }
        u28 = ((math_sin_angle16((*(int *)((a4 + 0x30))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        u29 = *(float *)(((int)stk + 8));
        u30 = (u28 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        u31 = u29;
        u31 = u31 + 120.0f * u30;
        *(float *)(((int)stk + 8)) = u31;
        u38 = ((math_cos_angle16((*(int *)((a4 + 0x30))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        u39 = *(float *)(((int)stk + 16));
        u40 = (u38 * (math_cos_angle16((*(int *)((a4 + 0x2C))))));
        u41 = u39;
        u41 = u41 + 120.0f * u40;
        *(float *)(((int)stk + 16)) = u41;
        u46 = *(float *)(((int)stk + 12));
        u47 = ((math_sin_angle16((*(int *)((a4 + 0x2C))))) * (*(float *)((0xC33C960 + (((((struct oEE_short *)(a4))->v)) << 2)))));
        *(float *)(((int)stk + 12)) = (u46 + ((-(u47 * 120.0f))));
        fx_spawn_04512c((((int)stk + 4) + 0x4), (t5 + 0x2C), (*(signed char *)(((0x308 + a4) + 0x6))));
        *(unsigned char *)(((0x308 + a4) + 0x5)) = 0x8;
        t52 = t4;
        t53 = t5;
    }
    t58 = *(signed char *)((a4 + 0xF));
    if ((t58 != 0) && (t59 = *(int *)(((int)stk + 4)), t60 = *(int *)((t53 + 0x18)), (int)t52 < (int)(t59 - 1))) {
        *(volatile int *)((t60 + 0x10));
    }
    return t58;
}

