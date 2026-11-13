/* stage object helpers: layout position load contact lists mode/owner setters (0c0abe44-0c0abf64) */

/* named globals (symbols.txt) */
extern char g_obj_class_head[];
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
extern int FUN_0c0e6fe8();
int FUN_0c0e7140(int);

int obj_set_mode_owner(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    *(unsigned char *)((a4 + 0x8)) = 0x0;
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct o30D_uchar *)(a4))->v) = a5;
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t7 = *(signed char *)((a4 + 0x4));
        t8 = t7;
        if (t7 != 16) {
            t7 = a4;
            t9 = a6;
            if (((*(signed char *)((a4 + 0x2))) == 2) && ((t0 = *(signed char *)((a4 + 0x4)), t0 == 1) || (t0 == 2))) {
                *(volatile int *)((a4 + 0x2E0));
                t10 = ((int (*)(int, int, int, int))(FUN_0c0e6fe8))(a4, t0, a6, 0x0);
                *(volatile int *)((t1 + 0x2E0));
                t0 = ((int (*)(int))(FUN_0c0e6fe8))(t1);
                (((struct o5C_float *)(t7))->v) = 1.0f;
                if (((*(signed char *)((t7 + 0x2))) == 2) && ((t2 = *(signed char *)((t7 + 0x4)), t2 == 1) || (t2 == 2))) {
                    *(unsigned char *)((t7 + 0x3)) = t0;
                }
                t9 = t0;
            } else {
                t0 = 0x0;
            }
            if (((*(signed char *)((t7 + 0x2))) == 3) && (t5 = *(signed char *)((t7 + 0x4)), t5 == 6)) {
                *(unsigned char *)((t7 + 0x3)) = t9;
            }
            if ((signed char)t9 == 2) {
                *(unsigned int *)((t7 + 0x1C)) = t0;
            } else {
                *(unsigned int *)((t7 + 0x1C)) = ((unsigned short)((unsigned short)(signed char)t9 * (unsigned short)0x72D0) + 0xC7E40C4);
            }
            t8 = (signed char)t9;
        }
        t0 = t8;
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 3) && (t6 = *(signed char *)((a4 + 0x4)), t6 == 6)) {
            *(unsigned char *)((a4 + 0x3)) = a6;
        }
        if ((signed char)a6 == 2) {
            *(unsigned int *)((a4 + 0x1C)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x1C)) = ((unsigned short)((unsigned short)(signed char)a6 * (unsigned short)0x72D0) + 0xC7E40C4);
        }
        t0 = (signed char)a6;
    }
    return t0;
}

void obj_clear_slot_contact(int a4)
{
    register int t5;
    register int t6;
    register int t7;
    register int t10;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c0e7140(a4);
    t5 = t4;
    t6 = (0x0 + t1);
    t7 = 0x0;
    for (;;) {
        t10 = (*(int *)((((int)g_obj_class_head) + ((*(signed char *)((t6 + 0x0))) << 2))));
        for (;;) {
            if (t10 == 0) {
                break;
            }
            t3 = 0x310;
            t2 = (signed char)t5;
            t3 = (t3 + t10);
            t2 = (t2 + t3);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t10 = (*(int *)((t10 + 0x18)));
        }
        t7 = (t7 + 0x1);
        t3 = (signed char)t7;
        t6 = (t6 + 0x1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
}
