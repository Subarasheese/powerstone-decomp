/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0b9b0c-0c0b9c54) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
int thunk_FUN_0c062242(int);

int fx_spawn_15(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t20;
    register int t5;
    register int t11;
    register int t12;
    register int t18;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = ((int (*)(int, int, int, int))obj_create)(0x1, 0x1, 0x2, 0x0);
    t20 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned int *)((t0 + 0x10)) = 0xC0B9C54;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x2C)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0x30)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34)));
        (((struct o50_float *)(t0))->v) = 1.5f;
        (((struct o54_float *)(t0))->v) = 1.5f;
        (((struct o58_float *)(t0))->v) = 1.5f;
        t5 = *(signed char *)((a4 + 0x3));
        *(unsigned int *)(((int)stk + 4)) = ((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4);
        thunk_FUN_0c062242((((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t5 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + (short)((short)(*(int *)((((unsigned char)(*(signed char *)(((int)stk + 0))) << 2) + 0xC33C338))) * (short)0xB0)));
        obj_set_record_char(t0, 0x71);
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        t11 = 0x0;
        for (;;) {
            t12 = *(signed char *)((a4 + 0x3));
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + (t11 << 2)) + 0x0))), ((signed char)((((t12 << 1) + t12) << 2) << 1) + 0xC6002D0), ((t11 << 2) + t11));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + (t11 << 2)) + 0x0))) + 0x0)) = 0x1;
            t18 = *(int *)((((t11 << 2) + (0x2E0 + t0)) + 0x0));
            t11 = (t11 + 0x1);
            *(unsigned short *)((t18 + 0x2)) = 0xF;
            if ((int)t11 >= (int)0x2) {
                break;
            }
        }
        t20 = 0xF;
    }
    return t20;
}
