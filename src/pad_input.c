/* controller records (pad_state), pad polling, pad type (0c012568-0c012870) */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
float math_signed_sqrt(float);
int math_atan_angle16(int, float);
int FUN_0c0e6d00(void);
int FUN_0c0f263a(int);

int pad_state_clear(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0xC361BF0;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned short *)((t1 + 0x8)) = 0x0;
        *(unsigned short *)((t1 + 0xA)) = 0x0;
        *(unsigned short *)((t1 + 0xC)) = 0x0;
        *(unsigned short *)((t1 + 0xE)) = 0x0;
        t2 = (t1 + 0x10);
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x80;
            t2 = (t2 + 0x1);
            if ((int)t3 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x14);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return 0x0;
}

int pad_poll_all(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t36;
    register int t38;
    register float u39;
    register float u40;
    register float u41;
    register float t42;
    register int t43;
    register int t44;
    register float u46;
    register float u49;
    register int t63;
    register int t91;
    register int t92;
    register int t93;
    register float u98;
    register float u99;
    int t64;

    t0 = 0x0;
    t1 = 0xC361BF0;
    for (;;) {
        t3 = FUN_0c0f263a((*(int *)((0xC178D78 + (t0 << 2)))));
        if (((*(int *)((t3 + 0x4))) & 0x6FE) == 0x6FE) {
            if (((*(int *)((t3 + 0x4))) & 0x101) == 0x101) {
                *(unsigned int *)((t1 + 0x0)) = 0x1;
                *(unsigned int *)((t1 + 0x4)) = 0x2;
                *(unsigned short *)((t1 + 0xA)) = (*(short *)((t1 + 0x8)));
                *(unsigned short *)((t1 + 0x8)) = (*(short *)((t3 + 0x8)));
                *(unsigned short *)((t1 + 0xC)) = ((*(short *)((t1 + 0x8))) & (~(*(short *)((t1 + 0xA)))));
                *(unsigned short *)((t1 + 0xE)) = ((*(short *)((t1 + 0xA))) & (~(*(short *)((t1 + 0x8)))));
                *(unsigned char *)(((t1 + 0x10) + 0x1)) = 0x0;
                (((struct o10_uchar *)(t1))->v) = 0x0;
                *(unsigned char *)(((t1 + 0x10) + 0x3)) = 0x80;
                *(unsigned char *)(((t1 + 0x10) + 0x2)) = 0x80;
            } else {
                *(volatile int *)((t3 + 0x4));
                *(unsigned int *)((t1 + 0x0)) = 0x1;
                *(unsigned int *)((t1 + 0x4)) = 0x1;
                *(unsigned short *)((t1 + 0xA)) = (*(short *)((t1 + 0x8)));
                *(unsigned short *)((t1 + 0x8)) = (*(short *)((t3 + 0x8)));
                *(unsigned short *)((t1 + 0xC)) = ((*(short *)((t1 + 0x8))) & (~(*(short *)((t1 + 0xA)))));
                *(unsigned short *)((t1 + 0xE)) = ((*(short *)((t1 + 0xA))) & (~(*(short *)((t1 + 0x8)))));
                (((struct o10_uchar *)(t1))->v) = (*(short *)((t3 + 0x18)));
                (((struct o11_uchar *)(t1))->v) = (*(short *)((t3 + 0x1A)));
                (((struct o12_uchar *)(t1))->v) = ((*(short *)((t3 + 0x1C))) + 0x80);
                (((struct o13_uchar *)(t1))->v) = ((*(short *)((t3 + 0x1E))) + 0x80);
            }
        } else {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0x0;
            *(unsigned short *)((t1 + 0xE)) = 0x0;
            *(unsigned short *)((t1 + 0xC)) = 0x0;
            *(unsigned short *)((t1 + 0x8)) = 0x0;
            *(unsigned short *)((t1 + 0xA)) = 0x0;
            *(unsigned char *)(((t1 + 0x10) + 0x1)) = 0x0;
            (((struct o10_uchar *)(t1))->v) = 0x0;
            *(unsigned char *)(((t1 + 0x10) + 0x3)) = 0x80;
            *(unsigned char *)(((t1 + 0x10) + 0x2)) = 0x80;
        }
        t36 = *(signed char *)((t1 + 0x12));
        t38 = *(signed char *)((t1 + 0x13));
        u39 = _builtin_fabsf((float)((unsigned char)t36 - 128));
        u40 = _builtin_fabsf((float)((unsigned char)t36 - 128));
        u41 = (_builtin_fabsf((float)((unsigned char)t38 - 128)) * _builtin_fabsf((float)((unsigned char)t38 - 128)));
        u41 = u41 + u39 * u40;
        t42 = math_signed_sqrt(u41);
        (((struct o22_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = (int)t42;
        if (!((float)(unsigned short)(int)t42 > 15.0f)) {
            (((struct o20_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = 0x0;
            t93 = 0x20;
            u98 = _builtin_fabsf((float)((unsigned char)t36 - 128));
            u99 = _builtin_fabsf((float)((unsigned char)t38 - 128));
        } else {
            t43 = *(signed char *)(((t1 + 0x10) + 0x2));
            t44 = *(signed char *)(((t1 + 0x10) + 0x3));
            u46 = (float)((unsigned char)t43 - 128);
            if ((float)((unsigned char)t43 - 128) == 0.0f) {
                u46 = 9.99999997e-07f;
            }
            u49 = (float)((unsigned char)t44 - 128);
            u49 = -u49;
            (((struct o20_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = ((math_atan_angle16((t1 + 0x10), (u49 / u46))) & 0xFFFF);
            if (0.0f > u46) {
                (((struct o20_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = (((((struct o20_short *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v)) + 0x8000);
            }
            (((struct o20_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = (((((struct o20_short *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v)) + 0x4000);
            if (((((struct o20_short *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v)) == 0) {
                (((struct o20_ushort *)(((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0)))->v) = 0x1;
            }
            *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) & 0xFF0F);
            *(volatile short *)((((signed char)((((t0 << 2) << 1) + t0) << 2) + 0xC7F31F0) + 0x20));
            t63 = FUN_0c0e6d00();
            if ((t63 & t64) != 0) {
                if ((t63 & t64) != 1) {
                    if ((t63 & t64) != 2) {
                        if ((t63 & t64) != 3) {
                            if ((t63 & t64) != 4) {
                                if ((t63 & t64) != 5) {
                                    if ((t63 & t64) != 6) {
                                        if ((t63 & t64) != 7) {
                                        } else {
                                            *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x60);
                                        }
                                    } else {
                                        *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x40);
                                    }
                                } else {
                                    *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x50);
                                }
                            } else {
                                *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x10);
                            }
                        } else {
                            *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x90);
                        }
                    } else {
                        *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x80);
                    }
                } else {
                    *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0xA0);
                }
            } else {
                *(unsigned short *)((t1 + 0x8)) = ((*(short *)((t1 + 0x8))) | 0x20);
            }
            *(unsigned short *)((t1 + 0xC)) = ((*(short *)((t1 + 0x8))) & (~(*(short *)((t1 + 0xA)))));
            t91 = *(short *)((t1 + 0x8));
            t92 = *(short *)((t1 + 0xA));
            *(unsigned short *)((t1 + 0xE)) = (t92 & (~t91));
            t93 = (t92 & (~t91));
            u98 = u49;
            u99 = u46;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x14);
        if ((int)t0 < (int)0x4) continue;
        break;
    }
    return t93;
}
