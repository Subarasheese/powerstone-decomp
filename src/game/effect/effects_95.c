/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c042728-0c043384) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
typedef struct { int x, y, z; } S12;
typedef struct { float x, y, z; } V3;
extern char *fx_spawn_burst_slot(int, int, int, S12 *, int, S12 *);
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);

void fx_spawn_table_burst(S12 *pos, char index, float value)
{
    S12 local_pos;
    char *eff;
    V3 *entry;

    local_pos = *pos;
    eff = fx_spawn_burst_slot(2, 1, 1, &local_pos, 0, (S12 *)0x0C14A110 + (*(char *)0x0C7F307C & 3));
    if (eff) {
        *(float *)(*(char **)(eff + 0x2E0) + 64) = 1.0f;
        entry = (V3 *)((signed char)(index * 12) + 0x0C14A290);
        *(float *)(*(char **)(eff + 0x2E0) + 68) = entry->x;
        *(float *)(*(char **)(eff + 0x2E0) + 72) = entry->y;
        *(float *)(*(char **)(eff + 0x2E0) + 76) = entry->z;
        *(float *)(eff + 0x308 + 4) = value;
    }
}

int FUN_0c043132(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t4;
    register int t5;
    register int t22;
    register int t29;
    register float u31;
    register int t46;
    register int t45;
    register int t50;
    register int t51;
    register int t53;
    register int t2;
    register int t3;
    register int t6;
    register float u7;
    register float u8;
    register float u9;
    register int t42;
    register int t33;
    register float u34;
    register float u35;
    register int t49;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
                return obj_destroy(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return obj_destroy(a4, a5, a6, a7);
            }
            return t0;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t4 = a4;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
                break;
            }
            t6 = t5;
            t6 = (t6 << 2);
            t6 = (t6 + (0x2E0 + a4));
            t6 = (*(int *)((t6 + 0x0)));
            t3 = (*(signed char *)((t6 + 0x0)));
            if (t3 != 0) {
                t4 = t6;
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t4 = (t4 + 0x28);
                math_vec3_add(t4, (t6 + 0x28), (t6 + 0x34));
                t4 = t6;
                t4 = (t4 + 0x4);
                math_vec3_add(t4, (t6 + 0x4), (t6 + 0x28));
                t3 = (*(signed char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)));
                t3 = (t3 - 1);
                *(unsigned char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)) = t3;
                t3 = (signed char)t3;
                if (t3 == 0) {
                    t2 = (0x308 + a4);
                    t2 = (t2 + 0x8);
                    t2 = (t2 + t5);
                    *(unsigned char *)((t2 + 0x0)) = 0x3;
                    t4 = t6;
                    FUN_0c06231c(t4, ((int)g_res_kyoutsuu), ((*(signed char *)((((0x308 + a4) + t5) + 0x0))) + 0x21));
                    t3 = (0x308 + a4);
                    t3 = (t3 + t5);
                    t22 = *(signed char *)((t3 + 0x0));
                    *(unsigned char *)((t3 + 0x0)) = (t22 + 0x1);
                    if ((int)(signed char)(t22 + 0x1) >= (int)0x10) {
                        *(unsigned char *)((t6 + 0x0)) = 0x0;
                    }
                }
                t3 = (*(signed char *)((((0x308 + a4) + t5) + 0x0)));
                if ((int)t3 >= (int)0x8) {
                    t2 = (0x308 + a4);
                    t2 = (t2 + t5);
                    t3 = (*(signed char *)((t2 + 0x0)));
                    t29 = t3;
                    t3 = (0x308 + a4);
                    t3 = (t3 + 0x8);
                    t3 = (t3 + t5);
                    u9 = (float)t29;
                    t3 = (*(signed char *)((t3 + 0x0)));
                    u8 = (float)t3;
                    u9 = (-u9);
                    u9 = (u9 + 15.0f);
                    u31 = u8;
                    u31 = u31 + 3.0f * u9;
                    u8 = u31;
                    u8 = (u8 / 24.0f);
                    (((struct o40_float *)(t6))->v) = u8;
                    t33 = t2;
                    u34 = u8;
                    u35 = u9;
                }
                u8 = u34;
                u9 = u35;
                t2 = t33;
                u7 = ((((struct o10_float *)((0x308 + a4)))->v));
                u9 = (float)(*(signed char *)((((0x308 + a4) + t5) + 0x0)));
                u8 = (float)(*(signed char *)(((((0x308 + a4) + 0x8) + t5) + 0x0)));
                u9 = (u9 * 3.0f);
                u9 = (u9 - u8);
                u9 = (u9 + 3.0f);
                u9 = (u9 / 48.0f);
                u7 = (u7 + u9);
                u9 = 0.799999952f;
                u7 = (u7 * u9);
                (((struct o24_float *)(t6))->v) = u7;
                (((struct o20_float *)(t6))->v) = u7;
                (((struct o1C_float *)(t6))->v) = u7;
            } else {
                t42 = t4;
            }
            t5 = (t5 + 0x1);
            t4 = t42;
        }
        t46 = 0x2DC;
        if ((*(int *)(((int)stk + 0))) == 0) {
            t45 = *(signed char *)((a4 + 0x8));
            *(unsigned char *)((a4 + 0x8)) = (t45 + 0x1);
            t46 = (t45 + 0x1);
        }
        return t46;
    }
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    t50 = 0x0;
    t51 = a6;
    for (;;) {
        if ((int)t50 >= (int)(*(signed char *)((a4 + 0x2DC)))) {
            break;
        }
        t49 = (0x308 + a4);
        t49 = (t49 + t50);
        *(unsigned char *)((t49 + 0x0)) = 0x1;
        t49 = 0x2E0;
        t51 = t50;
        t49 = (t49 + a4);
        t51 = (t51 << 2);
        t49 = (t49 + t51);
        *(unsigned char *)(((((0x308 + a4) + 0x8) + t50) + 0x0)) = 0x1;
        t53 = *(int *)((t49 + 0x0));
        t49 = 0x2E0;
        *(unsigned char *)((t53 + 0x0)) = 0x1;
        t49 = (t49 + a4);
        t49 = (t49 + t51);
        (((struct o40_float *)((*(int *)((t49 + 0x0)))))->v) = 1.0f;
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        (((struct o44_float *)(t49))->v) = 0.899999976f;
        t49 = (*(int *)((((0x2E0 + a4) + t51) + 0x0)));
        (((struct o48_float *)(t49))->v) = 0.829999983f;
        t50 = (t50 + 0x1);
        t51 = (t51 + (0x2E0 + a4));
        t49 = (*(int *)((t51 + 0x0)));
        (((struct o4C_float *)(t49))->v) = 0.629999995f;
    }
    return 0x2DC;
}
