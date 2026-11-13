/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05d338-0c05d536) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o30C_uchar { char p[0x30C]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int FUN_0c0e6fe8(void);

int item_create(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t33;
    register int t4;
    register int t9;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t24;
    register int t25;
    register int t27;
    register int t29;
    register int t10;
    register int t14;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x2, 0x1, 0x7);
    t33 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        (((struct o30C_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((t0 + 0x4)) = 0x7;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xD)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC05D4E4;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        (((struct o30F_uchar *)(t0))->v) = 0x0;
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o2DA_uchar *)(t0))->v) = 0x1;
        (((struct o118_uint *)(t0))->v) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = 0x1;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        *(volatile signed char *)0xC7F3051;
        t4 = *(signed char *)(((int)stk + 0));
        t9 = ((int (*)(int, int, int))(FUN_0c0e6fe8))((signed char)((((t4 << 1) + t4) << 2) << 1), 0xC7F302C, 0xC33CA80);
        *(volatile signed char *)((t10 + 0x25));
        t16 = ((int (*)(int, int, int))(FUN_0c0e6fe8))(t15, t10, t14);
        t17 = ((int (*)(void))(FUN_0c0e6fe8))();
        *(unsigned int *)(((int)stk + 0)) = 0xC33637C;
        *(unsigned int *)(((int)stk + 4)) = 0xC3363D0;
        t18 = 0x0;
        t19 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t19) + 0x0))), 0xC4CFA68, (*(signed char *)(((signed char)t18 + 0xC336374))));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t19) + 0x0))) + 0x0)) = 0x0;
            t24 = *(int *)(((int)stk + 4));
            t25 = *(int *)((((0x2E0 + t0) + t19) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t24 + 0x2);
            *(unsigned short *)((t25 + 0x2)) = (*(short *)((((t24 + 0x2) - 2) + 0x0)));
            t27 = *(int *)(((int)stk + 0));
            *(volatile int *)((((0x2E0 + t0) + t19) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t27 + 0xC);
            t29 = ((int (*)(void))(FUN_0c0e6fe8))();
            t18 = (t18 + 0x1);
            t19 = (t19 + 0x4);
            if ((int)(signed char)t18 >= (int)0x7) {
                break;
            }
        }
        *(unsigned char *)((((((struct o2F8_int *)(t0))->v)) + 0x0)) = 0x1;
        (((struct o1C_float *)(((((struct o2F8_int *)(t0))->v))))->v) = 0.0f;
        (((struct o24_float *)(((((struct o2F8_int *)(t0))->v))))->v) = 0.0f;
        t33 = 0x24;
    }
    return t33;
}
