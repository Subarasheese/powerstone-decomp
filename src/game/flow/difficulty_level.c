/* level/difficulty tables g_305c and random picks (0597CE..0599FC) (0c05986c-0c059934) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };

int FUN_0c05986c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC7F3071;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 3) {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 == 0) {
            t2 = 0x1;
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) < (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F2F11;
        if ((int)(unsigned char)(*(signed char *)0xC7F305C) > (int)(unsigned char)(*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E180) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))))) {
            (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)((((signed char)(((t0 << 2) << 1) + t0) + 0xC32E180) + (*(signed char *)((((unsigned char)((unsigned short)(0xFF + t2) * (unsigned short)0x78) + 0xC7F2DF0) + 0x56))))));
        }
        t0 = *(signed char *)0xC7F305C;
        (((struct o1_uchar *)0xC7F305C)->v) = ((t0 << 2) << 1);
        t1 = ((t0 << 2) << 1);
    }
    return t1;
}
