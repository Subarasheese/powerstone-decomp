/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c03598c-0c035c84) */

struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o4_short { char p[0x4]; short v; };
struct oEC_short { char p[0xEC]; short v; };
int obj_destroy(int, int, int, int);
int math_vec3_add(int, int, int);
int math_vec3_sub(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);

int fx_spawn_03598c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = obj_create(0x5, 0x1, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        t2 = 0x2;
        if ((*(signed char *)((a4 + 0x3))) != 0) {
            t2 = 0x4;
        }
        *(unsigned char *)((t0 + 0x5)) = t2;
        *(unsigned int *)((t0 + 0x10)) = 0xC035A78;
        t2 = ((int (*)(int))(FUN_0c0e6fe8))(0x1);
        t2 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct oEC_ushort *)(t0))->v) = (*(short *)0xC1496C4);
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t3 = 0x2E0;
            t4 = t2;
            t4 = (t4 << 2);
            t3 = (t3 + t0);
            t3 = (t3 + t4);
            t3 = (*(int *)((t3 + 0x0)));
            *(unsigned char *)((t3 + 0x0)) = (*(short *)((0xC1496CA + (t2 << 1))));
            *(unsigned short *)((t3 + 0x2)) = 0xF;
            t5 = *(signed char *)(((0x3 + a4) + 0x0));
            FUN_0c06233a(t3, ((signed char)((((t5 << 1) + t5) << 2) << 1) + 0xC6002D0), (*(int *)((t4 + 0xC149670))));
            t3 = ((int (*)(void))(FUN_0c0e6fe8))();
            t2 = (t2 + 0x1);
        }
        t1 = 0x2DC;
    }
    return t1;
}

int fx_tick_03598c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return obj_destroy(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        t0 = (((struct o2E0_int *)(a4))->v);
        math_vec3_sub((t0 + 0x28), 0xC149688, 0xC14967C);
        t1 = (((struct o0_short *)0xC1496C4)->v);
        math_vec3_mul_xyz((t0 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
    }
    if ((*(signed char *)((a4 + 0x9))) == 0) {
        t0 = (((struct o2E0_int *)(a4))->v);
        math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x16C);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x222);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x2D8);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            (((struct oEC_ushort *)(a4))->v) = ((((struct o2_short *)0xC1496C4)->v));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            t0 = (((struct o2E4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            math_vec3_sub((t0 + 0x28), 0xC1496A0, 0xC149694);
            t1 = (((struct o2_short *)0xC1496C4)->v);
            math_vec3_mul_xyz((t0 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
            t0 = (((struct o2E8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            math_vec3_sub((t0 + 0x28), 0xC1496B8, 0xC1496AC);
            t1 = (((struct o4_short *)0xC1496C4)->v);
            math_vec3_mul_xyz((t0 + 0x28), (1.0f / (float)t1), (1.0f / (float)t1), (1.0f / (float)t1));
        }
    } else {
        t0 = (((struct o2E4_int *)(a4))->v);
        math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x222);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x2D8);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x16C);
        t0 = (((struct o2E8_int *)(a4))->v);
        math_vec3_add((t0 + 0x4), (t0 + 0x4), (t0 + 0x28));
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + 0x2D8);
        *(unsigned int *)((t0 + 0x14)) = ((*(int *)((t0 + 0x14))) + 0x16C);
        *(unsigned int *)((t0 + 0x18)) = ((*(int *)((t0 + 0x18))) + 0x222);
        (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) - 1);
        if (((((struct oEC_short *)(a4))->v)) == 0) {
            *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        }
    }
    t0 = *(signed char *)((0x71BA + (*(int *)((a4 + 0x1C)))));
    t1 = t0;
    if (t0 != 22) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
