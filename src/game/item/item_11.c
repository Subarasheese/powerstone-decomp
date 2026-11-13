/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05d338-0c05d536) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
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
int obj_create(int, int, int, int);
int FUN_0c06233a(int, int, int);
int _quick_odd_mvn(void);

int item_create(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t26;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t18;
    register int t19;
    register int t21;
    register int t22;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = obj_create(0x2, 0x1, 0x7, 0x0);
    t26 = t0;
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
        t3 = *(signed char *)0xC7F3051;
        t4 = *(signed char *)(((int)stk + 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)((((short)(((((t3 << 2) << 1) + t3) << 2) << 1) + 0xC33CA80) + (signed char)((((t4 << 1) + t4) << 2) << 1))); }
        t9 = *(signed char *)0xC7F3051;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(((((short)(((((t9 << 2) << 1) + t9) << 2) << 1) + 0xC33CA80) + (signed char)((((t4 << 1) + t4) << 2) << 1)) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33635C); }
        *(unsigned int *)(((int)stk + 0)) = 0xC33637C;
        *(unsigned int *)(((int)stk + 4)) = 0xC3363D0;
        t12 = 0x0;
        t13 = 0x0;
        for (;;) {
            FUN_0c06233a((*(int *)((((0x2E0 + t0) + t13) + 0x0))), 0xC4CFA68, (*(signed char *)(((signed char)t12 + 0xC336374))));
            *(unsigned char *)(((*(int *)((((0x2E0 + t0) + t13) + 0x0))) + 0x0)) = 0x0;
            t18 = *(int *)(((int)stk + 4));
            t19 = *(int *)((((0x2E0 + t0) + t13) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t18 + 0x2);
            *(unsigned short *)((t19 + 0x2)) = (*(short *)((((t18 + 0x2) - 2) + 0x0)));
            t21 = *(int *)(((int)stk + 0));
            t22 = *(int *)((((0x2E0 + t0) + t13) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t21 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x4)) = *(struct mv3 *)(((t21 + 0xC) - 12)); }
            t12 = (t12 + 0x1);
            t13 = (t13 + 0x4);
            if ((int)(signed char)t12 >= (int)0x7) {
                break;
            }
        }
        *(unsigned char *)((((((struct o2F8_int *)(t0))->v)) + 0x0)) = 0x1;
        (((struct o1C_float *)(((((struct o2F8_int *)(t0))->v))))->v) = 0.0f;
        (((struct o24_float *)(((((struct o2F8_int *)(t0))->v))))->v) = 0.0f;
        t26 = 0x24;
    }
    return t26;
}
