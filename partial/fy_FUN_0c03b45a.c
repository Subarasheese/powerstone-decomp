
int fx_tick_03b384(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
    if (((int)(short)(t0 + 0x1) < (int)((((struct oEE_short *)(a4))->v))) && ((t2 = *(int *)((a4 + 0x1C)), t3 = (((struct oF0_short *)(a4))->v), t4 = *(signed char *)((t2 + 0x71A4)), t3 == t4) && (t5 = (((struct oF2_short *)(a4))->v), t6 = *(signed char *)((t2 + 0x71A5)), t5 == (unsigned char)t6))) {
        return 0x71A5;
    }
    return obj_destroy(a4);
}
