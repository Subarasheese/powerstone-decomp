/* stage object helpers: layout position load contact lists mode/owner setters (0c0abe44-0c0abf64) */

/* named globals (symbols.txt) */
extern char g_obj_class_head[];
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
extern int _quick_odd_mvn();
int _slow_mvn(int);
struct o2E0_int { char p[0x2E0]; int v; };


int obj_set_mode_owner(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;

    *(unsigned char *)((a4 + 0x8)) = 0x0;
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    (((struct o30D_uchar *)(a4))->v) = a5;
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t4 = *(signed char *)((a4 + 0x4));
        t5 = t4;
        if (t4 != 16) {
            if (((*(signed char *)((a4 + 0x2))) == 2) && ((t0 = *(signed char *)((a4 + 0x4)), t0 == 1) || (t0 == 2))) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x4)) = *(struct mv3 *)(0xC339C90); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o2E0_int *)(a4))->v)) + 0x10)) = *(struct mv3 *)(0xC339CA8); }
                (((struct o5C_float *)(a4))->v) = 1.0f;
                if (((*(signed char *)((a4 + 0x2))) == 2) && ((t1 = *(signed char *)((a4 + 0x4)), t1 == 1) || (t1 == 2))) {
                    *(unsigned char *)((a4 + 0x3)) = a6;
                }
            }
            if (((*(signed char *)((a4 + 0x2))) == 3) && (t2 = *(signed char *)((a4 + 0x4)), t2 == 6)) {
                *(unsigned char *)((a4 + 0x3)) = a6;
            }
            if ((signed char)a6 == 2) {
                *(unsigned int *)((a4 + 0x1C)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = ((unsigned short)((unsigned short)(signed char)a6 * (unsigned short)0x72D0) + 0xC7E40C4);
            }
            t5 = (signed char)a6;
        }
        t0 = t5;
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 3) && (t3 = *(signed char *)((a4 + 0x4)), t3 == 6)) {
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

int obj_clear_slot_contact(int a4)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;

    *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)0xC152D90);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)0xC152D91);
    t2 = 0xC152D90;
    t3 = 0xC0E7140;
    t4 = (0x0 + ((int)stk + 0));
    t5 = 0x0;
    for (;;) {
        t6 = *(signed char *)((t4 + 0x0));
        t8 = (*(int *)((0xC7E4070 + (t6 << 2))));
        for (;;) {
            if (t8 == 0) {
                break;
            }
            t3 = 0x310;
            t2 = (signed char)a4;
            t3 = (t3 + t8);
            t2 = (t2 + t3);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t8 = (*(int *)((t8 + 0x18)));
        }
        t5 = (t5 + 0x1);
        t3 = (signed char)t5;
        t4 = (t4 + 0x1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return (t6 << 2);
}
