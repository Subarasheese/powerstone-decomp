/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05d254-0c05d338) */

struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);

float FUN_0c05d254(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o20_float *)(a4))->v);
    u1 = (((struct o0_float *)0xC7F2AB4)->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o8_float *)0xC7F2AB4)->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u1 - u0)) * ((u1 - u0));
    u0 = math_signed_sqrt(u4);
    t0 = 0x0;
    if (!(200.0f > u0)) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((t1 << 2) + (0x2E0 + a4)) + 0x0));
            if (300.0f > (u0 - 200.0f)) {
                *(unsigned short *)((t2 + 0x2)) = ((*(short *)((t2 + 0x2))) | 0x400);
                (((struct o40_float *)(t2))->v) = ((u0 - 200.0f) / 300.0f);
            } else {
                *(unsigned short *)((t2 + 0x2)) = ((*(short *)((t2 + 0x2))) & 0xFBFF);
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x5) {
                break;
            }
        }
        if ((int)t1 < (int)0x7) {
            t2 = t1;
            t3 = ((t1 << 2) + (0x2E0 + a4));
            for (;;) {
                t1 = *(int *)((t3 + 0x0));
                t3 = (t3 + 0x4);
                if (300.0f > (u0 - 200.0f)) {
                    u1 = ((u0 - 200.0f) / 300.0f);
                    (((struct o44_float *)(t1))->v) = ((u0 - 200.0f) / 300.0f);
                    (((struct o48_float *)(t1))->v) = u1;
                    u1 = ((((struct o44_float *)(t1))->v));
                    (((struct o4C_float *)(t1))->v) = u1;
                } else {
                    (((struct o44_float *)(t1))->v) = 1.0f;
                    (((struct o48_float *)(t1))->v) = 1.0f;
                    (((struct o4C_float *)(t1))->v) = 1.0f;
                }
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x7) {
                    break;
                }
            }
        }
        t0 = 0x1;
    }
    *(unsigned char *)((a4 + 0x1)) = t0;
    return u0;
}
