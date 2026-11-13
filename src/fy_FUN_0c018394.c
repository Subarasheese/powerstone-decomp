/* FUN_0c018394: generated straight-line / guarded function, checked by tests/fy_FUN_0c018394. */
int FUN_0c0a3796(int, int);

int FUN_0c018394(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x1));
    if (((unsigned short)(*(short *)((0xC361BFC + (signed char)(((t0 << 2) + t0) << 2)))) & 64) != 0) {
        *(unsigned char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0)) = ((*(signed char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0))) - 1);
        FUN_0c0a3796(0x0, 0x4C);
    }
    t0 = *(signed char *)((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x1));
    t1 = *(short *)((0xC361BFC + (signed char)(((t0 << 2) + t0) << 2)));
    t0 = (unsigned short)t1;
    if (((unsigned short)t1 & 128) != 0) {
        *(unsigned char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0)) = ((*(signed char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0))) + 0x1);
        t0 = (FUN_0c0a3796(0x0, 0x4C));
    }
    if ((int)(*(signed char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0))) < 0) {
        *(unsigned char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0)) = 0x8;
    }
    if ((int)(*(signed char *)((((((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4) + (signed char)a5) + 0x0))) > (int)0x8) {
        *(unsigned char *)((((signed char)a5 + (((((signed char)a4 << 2) << 2) + 0xC3622EA) + 0x4)) + 0x0)) = 0x0;
    }
    return t0;
}
