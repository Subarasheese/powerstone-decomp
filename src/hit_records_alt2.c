/* attack records, hit data setup, hit-stop shake, combo counter, damage helpers (0c08d644-0c09111e) */

struct o71BD_uchar { char p[0x71BD]; unsigned char v; };
struct o71DD_uchar { char p[0x71DD]; unsigned char v; };
struct o7294_uint { char p[0x7294]; unsigned int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int pl_inc_owner_combo(int);
int FUN_0c08dfa4(void);
int FUN_0c08e980(int);
int pl_vib_start_preset(int, int);
struct o72A4_short { char p[0x72A4]; short v; };
int FUN_0c0555c4(void);
int FUN_0c08e382(int);
int FUN_0c09fe68(int);
int pl_change_state(int, int, int, int, int, int, int, int, int);

int obj_set_owner_hit_record(int a4, int a5)
{
    register int t9;

    (((struct o71BD_uchar *)((*(int *)((a4 + 0x1C)))))->v) = a5;
    (((struct o7294_uint *)((*(int *)((a4 + 0x1C)))))->v) = a4;
    (((struct oF8_uint *)((*(int *)((a4 + 0x1C)))))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)((0xC338A98 + ((*(signed char *)((a4 + 0x4))) << 2)))));
    pl_inc_owner_combo((*(int *)((a4 + 0x1C))));
    *(volatile int *)((a4 + 0x1C));
    FUN_0c08dfa4();
    t9 = *(int *)((a4 + 0x1C));
    (((struct o71DD_uchar *)(t9))->v) = (*(signed char *)((((((struct oF8_int *)(t9))->v)) + 0x0)));
    FUN_0c08e980((*(int *)((a4 + 0x1C))));
    return pl_vib_start_preset((*(int *)((a4 + 0x1C))), 0x7);
}

int FUN_0c08f6c8(int a4)
{
    int stk[2];
    register int t3;
    register int t4;
    register int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x71DD))) != 2) && ((t1 = *(signed char *)((a4 + 0x72AC)), t1 != 0) && (t2 = (((struct o72A4_short *)(a4))->v), t2 == 0))) {
        t3 = FUN_0c0555c4();
        if (t3 != 0) {
            t4 = FUN_0c09fe68(a4);
            if ((signed char)t4 != 0) {
                FUN_0c08e382(a4);
                pl_change_state(a4, 0x22, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
