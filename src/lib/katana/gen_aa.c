/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o124_int { char p[0x124]; int v; };
int cam_update_by_mode(int, float);
int cam_apply_shake(int, int, int);
int nlStoreMatrix(int);
int nlInvertMatrix(int);
int nlLookAt(int, int, int);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int _quick_odd_mvn(void);
int FUN_0c10121c(int, int, int);
int get_fat(int, int);
int cam_set_view_matrix(int a4, float f4);
int FUN_0c1045b4(int a4);


int FUN_0c1045b4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x1C));
    t1 = *(int *)((t0 + 0x18));
    t2 = *(int *)((t0 + 0x14));
    t0 = *(int *)((((a4 * 0x148) + 0xC80DBC8) + 0x28));
    t3 = 0x0;
    if ((int)t1 > 0) {
        t4 = 0x0;
        t5 = t2;
        t2 = t0;
        for (;;) {
            t0 = FUN_0c10121c(a4, (unsigned short)t5, t2);
            if ((int)t0 < 0) {
                break;
            }
            t6 = get_fat(a4, (unsigned short)t5);
            if ((unsigned short)t6 != 0xFFFA) {
                t4 = (t4 + 0x1);
                t5 = t6;
                t2 = (t2 + 0x200);
                if ((int)t4 >= (int)t1) {
                    return 0x0;
                }
                continue;
            }
            return 0x0;
        }
        t3 = t0;
    }
    return t3;
}
