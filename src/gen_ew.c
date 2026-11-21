/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int syRtcDateToCount(int a4, int a5);

int syRtcDateToCount(int a4, int a5)
{
    int stk[12];
    register int t0;
    register int t4;
    register int t6;
    register int t7;
    register int t12;
    int t1;

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 0)) = *(struct mv12 *)(0xC155B88); }
    t0 = *(short *)((a4 + 0x0));
    t4 = (((unsigned int)(((unsigned short)t0 - 1950) + 0x2) >> 2) + (((unsigned short)t0 - 1950) * 0x16D));
    if ((((((unsigned short)t0 - 1950) + 0x2) & 0x3) == 0) && (t1 = *(signed char *)((a4 + 0x2)), (int)(unsigned char)t1 <= (int)0x2)) {
        t4 = ((((unsigned int)(((unsigned short)t0 - 1950) + 0x2) >> 2) + (((unsigned short)t0 - 1950) * 0x16D)) - 1);
    }
    t6 = *(int *)((((int)stk + 0) + (((unsigned char)(*(signed char *)((a4 + 0x2))) - 1) << 2)));
    t7 = *(signed char *)((a4 + 0x3));
    t12 = *(signed char *)((a4 + 0x6));
    *(unsigned int *)((a5 + 0x0)) = (((((((((((t4 + t6) + ((unsigned char)t7 - 1)) << 1) + ((t4 + t6) + ((unsigned char)t7 - 1))) << 2) << 1) + (unsigned char)(*(signed char *)((a4 + 0x4)))) * 0x3C) + (unsigned char)(*(signed char *)((a4 + 0x5)))) * 0x3C) + (unsigned char)t12);
    return (unsigned char)t12;
}
