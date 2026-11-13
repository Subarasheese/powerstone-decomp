/* key config editing screen (state 0c362378, reset keys) (0c01d304-0c01e798) */

int FUN_0c01e264(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c01db74(int, int, int, int);
int FUN_0c01dd6a(int, int, float);
int FUN_0c01dde2(int);
int FUN_0c01dee2(int);
int FUN_0c01e05a(int);
int FUN_0c01e2e4(int);
int FUN_0c01e34a(int);


int FUN_0c01e4a0(void)
{
    register int t0;
    register int t2;
    register int t9;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C) + 0x4));
        if ((unsigned char)t2 != 0) {
            t9 = (unsigned char)t2;
            if ((unsigned char)t2 != 1) {
            } else {
                t9 = (FUN_0c01e34a(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
            }
        } else {
            t9 = (FUN_0c01e2e4(((short)((((t0 << 1) + t0) << 2) << 2) + 0xC36238C)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t9;
}
