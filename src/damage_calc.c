/* damage scale (hit_calc_damage) (0c059718-0c05986c) */

struct o71D4_short { char p[0x71D4]; short v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c0e6d00(void);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };

float hit_calc_damage(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = 1.0f;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x71ED))) != 0) {
        u0 = (*(float *)((((unsigned char)(*(signed char *)0xC7F305C) << 2) + 0xC32DF78)));
    }
    u1 = 1.0f;
    if ((*(signed char *)((a4 + 0x71ED))) != 0) {
        u1 = (*(float *)((((unsigned char)(*(signed char *)0xC7F305C) << 2) + 0xC32DFF8)));
    }
    u2 = *(float *)((0xC32E078 + ((*(signed char *)((a4 + 0x4))) << 2)));
    t0 = 0xF;
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E))) < (int)0xF) {
        t0 = (*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x720E)));
    }
    u3 = *(float *)((((signed char)t0 << 2) + 0xC32E0A4));
    t0 = 0x14;
    if ((int)((((struct o71D4_short *)(a4))->v)) < (int)0xC8) {
        *(volatile short *)((a4 + 0x71D4));
        t0 = (FUN_0c0e6d00());
    } else {
        t1 = a4;
        u4 = u3;
        u3 = u1;
        u1 = u0;
        u0 = 1.0f;
        u5 = u2;
    }
    u2 = *(float *)((((short)t0 << 2) + 0xC32E0E4));
    t0 = *(signed char *)0xC7F2F12;
    if ((unsigned char)(*(signed char *)((((((struct oF8_int *)(t1))->v)) + 0x4))) != 2) {
        u6 = (u5 * u4);
        u4 = (f4 * (*(float *)((((t0 << 2) + 0xC32DF68) + 0x0))));
        u5 = (u4 * u1);
        u4 = ((u6 * u2) / u3);
        u2 = (u5 * u4);
    } else {
        u4 = (((*(float *)((((t0 << 2) + 0xC32DF68) + 0x0))) * u1) / u3);
        u2 = (f4 * u4);
    }
    u1 = u2;
    if (u0 > u2) {
        u1 = u0;
    }
    return u1;
}

int FUN_0c0597ce(void)
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
        (((struct o0_uchar *)0xC7F305C)->v) = (*(signed char *)(((*(signed char *)(((0xC7F2E46 + (unsigned char)((unsigned short)(t2 + 0xFF) * (unsigned short)0x78)) + 0x0))) + ((signed char)(((t0 << 2) << 1) + t0) + 0xC32E138))));
        t0 = *(signed char *)0xC7F305C;
        (((struct o1_uchar *)0xC7F305C)->v) = ((t0 << 2) << 1);
        t1 = ((t0 << 2) << 1);
    }
    return t1;
}
