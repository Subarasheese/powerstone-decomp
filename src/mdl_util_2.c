/* model utility (reads global 0xc439de8) (0c062de8-0c062f10) */

int FUN_0c062de8(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t8;
    register int t9;
    register int t10;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    register int t21;
    register int t22;
    register int t26;
    register int t27;
    register int t28;

    t0 = *(signed char *)((a4 + 0x71F1));
    t1 = *(signed char *)((a4 + 0x3));
    *(unsigned char *)((((t1 << 2) + 0xC439DE8) + 0x3)) = 0x0;
    *(unsigned char *)((((t1 << 2) + 0xC439DE8) + 0x2)) = 0x0;
    *(unsigned char *)((((t1 << 2) + 0xC439DE8) + 0x1)) = 0x0;
    *(unsigned char *)((((t1 << 2) + 0xC439DE8) + 0x0)) = 0x0;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t2 = 0x0;
    t4 = 0xC439DE8;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0x14) {
            break;
        }
        t9 = 0xB0;
        t2 = 0x41;
        t4 = 0x300;
        t4 = (t4 + a4);
        t4 = (t4 + (short)((short)t0 * (short)0xDC0));
        t4 = (t4 + (short)((short)(*(int *)((((int)stk + 0) + 0x0))) * (short)t9));
        *(unsigned char *)((t4 + t2)) = 0x0;
        t4 = (*(int *)((((int)stk + 0) + 0x0)));
        t4 = (t4 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t4;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t8 = t2;
    t10 = 0x14A0;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0x1E) {
            break;
        }
        t9 = 0xB0;
        t8 = 0x41;
        t10 = 0x1E80;
        t10 = (t10 + a4);
        t10 = (t10 + (short)((short)(signed char)t0 * (short)0x14A0));
        t10 = (t10 + (short)((short)(*(int *)((((int)stk + 0) + 0x0))) * (short)t9));
        *(unsigned char *)((t10 + t8)) = 0x0;
        t10 = (*(int *)((((int)stk + 0) + 0x0)));
        t10 = (t10 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t10;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t14 = t8;
    t15 = t9;
    t16 = 0x6E0;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0xA) {
            break;
        }
        t15 = 0xB0;
        t14 = 0x41;
        t16 = 0x47C0;
        t16 = (t16 + a4);
        t16 = (t16 + (short)((short)(signed char)t0 * (short)0x6E0));
        t16 = (t16 + (short)((short)(*(int *)((((int)stk + 0) + 0x0))) * (short)t15));
        *(unsigned char *)((t16 + t14)) = 0x0;
        t16 = (*(int *)((((int)stk + 0) + 0x0)));
        t16 = (t16 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t16;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t20 = t14;
    t21 = t15;
    t22 = t16;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0xA) {
            break;
        }
        t21 = 0xB0;
        t20 = 0x41;
        t22 = 0x5580;
        t22 = (t22 + a4);
        t22 = (t22 + (short)((short)(signed char)t0 * (short)0x6E0));
        t22 = (t22 + (short)((short)(*(int *)((((int)stk + 0) + 0x0))) * (short)t21));
        *(unsigned char *)((t22 + t20)) = 0x0;
        t22 = (*(int *)((((int)stk + 0) + 0x0)));
        t22 = (t22 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t22;
    }
    *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
    t26 = t20;
    t27 = t21;
    t28 = t22;
    for (;;) {
        if ((int)(*(int *)((((int)stk + 0) + 0x0))) >= (int)0xA) {
            break;
        }
        t27 = 0xB0;
        t26 = 0x41;
        t28 = 0x6340;
        t28 = (t28 + a4);
        t28 = (t28 + (short)((short)(signed char)t0 * (short)0x6E0));
        t28 = (t28 + (short)((short)(*(int *)((((int)stk + 0) + 0x0))) * (short)t27));
        *(unsigned char *)((t28 + t26)) = 0x0;
        t28 = (*(int *)((((int)stk + 0) + 0x0)));
        t28 = (t28 + 0x1);
        *(unsigned int *)((((int)stk + 0) + 0x0)) = t28;
    }
    return t26;
}
