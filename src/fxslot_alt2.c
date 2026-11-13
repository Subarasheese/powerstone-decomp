/* 8 record slots (144 bytes) at 0xc7f3238: clear, start by priority level, HUD/effect sprite helpers (0c05eea0-0c05f6d8) */

int fxslot_start(int, int, int, int, int, int);

int FUN_0c05f4cc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[3];
    register int t7;
    register int t18;
    register int t29;
    register int t43;
    register int t53;
    register int t63;
    int t3;
    int t40;
    int t42;

    *(unsigned char *)(((int)stk + 8)) = a5;
    t53 = *(int *)((((short)a6 << 2) + 0xC336500));
    if ((*(signed char *)0xC383808) == 3) {
        *(unsigned char *)0xC383808 = 0x4;
        if (((*(signed char *)0xC7F3478) != 0) && (t3 = *(signed char *)0xC7F3479, (int)(unsigned char)a4 < (int)(unsigned char)t3)) {
            *(unsigned char *)0xC383808 = 0x3;
            if ((*(signed char *)0xC7F33E8) != 0) {
                t63 = 0x0;
                if ((int)(unsigned char)a4 >= (int)(unsigned char)(*(signed char *)0xC7F33E9)) {
                    t7 = t53;
                    *(int *)((int)stk + 4) = t7;
                    *(int *)((int)stk + 0) = a8;
                    t63 = (fxslot_start((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t7));
                }
            } else {
                t18 = t53;
                *(int *)((int)stk + 4) = t18;
                *(int *)((int)stk + 0) = a8;
                t63 = (fxslot_start((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t18));
            }
        } else {
            t29 = t53;
            *(int *)((int)stk + 4) = t29;
            *(int *)((int)stk + 0) = a8;
            t63 = (fxslot_start((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t29));
        }
    } else {
        *(unsigned char *)0xC383808 = 0x3;
        if (((*(signed char *)0xC7F33E8) != 0) && (t40 = *(signed char *)0xC7F33E9, (int)(unsigned char)a4 < (int)(unsigned char)t40)) {
            *(unsigned char *)0xC383808 = 0x4;
            t63 = 0x0;
            if (((*(signed char *)0xC7F3478) != 0) && (t42 = *(signed char *)0xC7F3479, (int)(unsigned char)a4 < (int)(unsigned char)t42)) {
            } else {
                t43 = t53;
                *(int *)((int)stk + 4) = t43;
                *(int *)((int)stk + 0) = a8;
                t63 = (fxslot_start((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t43));
            }
        } else {
            *(int *)((int)stk + 4) = t53;
            *(int *)((int)stk + 0) = a8;
            t63 = (fxslot_start((*(signed char *)0xC383808), a4, (*(signed char *)(((int)stk + 8))), a7, a8, t53));
        }
    }
    return t63;
}
