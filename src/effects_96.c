/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c043384-0c0434cc) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int FUN_0c06231c(int, int, int);

int FUN_0c043384(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return obj_destroy(a4, a5, a6, a7);
            }
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        *(unsigned char *)((((((struct o2E0_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o308_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x1;
    }
    t0 = (((struct o2E0_int *)(a4))->v);
    math_vec3_add((t0 + 0x28), (t0 + 0x28), (t0 + 0x34));
    math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
    t1 = *(signed char *)(((0x308 + a4) + 0x1));
    *(unsigned char *)(((0x308 + a4) + 0x1)) = (t1 - 1);
    if ((signed char)(t1 - 1) == 0) {
        *(unsigned char *)(((0x308 + a4) + 0x1)) = 0x3;
        FUN_0c06231c(t0, ((int)g_res_kyoutsuu), ((*(signed char *)(((0x308 + a4) + 0x0))) + 0x21));
        t1 = *(signed char *)(((0x308 + a4) + 0x0));
        (((struct o308_uchar *)(a4))->v) = (t1 + 0x1);
        if ((int)(signed char)(t1 + 0x1) >= (int)0x10) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    if ((int)(*(signed char *)(((0x308 + a4) + 0x0))) >= (int)0x8) {
        u0 = (float)(*(signed char *)(((0x308 + a4) + 0x1)));
        u0 = u0 + 3.0f * (((-(float)(*(signed char *)(((0x308 + a4) + 0x0)))) + 15.0f));
        (((struct o40_float *)(t0))->v) = (u0 / 24.0f);
    }
    t1 = *(signed char *)(((0x308 + a4) + 0x1));
    u0 = ((float)(*(signed char *)(((0x308 + a4) + 0x0))) * 3.0f);
    u1 = (((struct o4_float *)((0x308 + a4)))->v);
    (((struct o24_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 3.0f) / 48.0f)) * 0.799999952f);
    (((struct o20_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 3.0f) / 48.0f)) * 0.799999952f);
    (((struct o1C_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 3.0f) / 48.0f)) * 0.799999952f);
    t1 = 0x1C;
    if ((*(signed char *)((t0 + 0x0))) == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
