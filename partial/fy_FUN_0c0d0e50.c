
int FUN_0c0d0e50(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t25;
    register int t27;
    register int t144;
    register int t167;
    register int t169;
    register int t193;

    t0 = *(signed char *)((a4 + 0x5));
    if ((((((struct o48_int *)(a4))->v)) & 16) != 0) {
        *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) - 1);
    }
    if ((((((struct o48_int *)(a4))->v)) & 32) != 0) {
        *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
    *(unsigned int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC)) = ((*(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC))) & 0x3);
    *(int *)((int)stk + 0) = 0xC1544B4;
    sprintf(0xC7F36B8, a5, a6, a7, 0xC1544B4);
    FUN_0c0ccefc(0xC7F36B8, (float)(((((short)(*(signed char *)((a4 + 0x5))) * (short)0x1E) + 0x8) << 2) << 1), (float)((((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))) + 0x3) << 2) << 1));
    if ((((((struct o48_int *)(a4))->v)) & 192) == 0) {
    } else {
        (((struct oA2_ushort *)(a4))->v) = 0x0;
        t25 = 0x1;
        if ((((((struct o48_int *)(a4))->v)) & 64) != 0) {
            t25 = 0xFFFFFFFF;
        }
        t27 = *(int *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0xC));
        switch (t27) {
        case 0:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) + t25);
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) < 0) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0xA;
            }
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6))) > (int)0xA) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)) = 0x0;
            }
            thunk_FUN_0c05fff4();
            FUN_0c09939c();
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            *(unsigned char *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x4)) = (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x6)));
            thunk_FUN_0c05fff4();
            FUN_0c09939c();
            FUN_0c0993e4(t0);
            FUN_0c05f2d4(0x0, 0x0);
            *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x7)) = 0x0;
            FUN_0c0d0024();
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x9))));
            break;
        case 1:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7))) + t25);
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7))) & 0x1);
            (((struct o71F1_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x7)));
            FUN_0c099a24(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            break;
        case 2:
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) + t25);
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) < 0) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x4;
            }
            if ((int)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8))) > (int)0x4) {
                *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x8)) = 0x0;
            }
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))));
            (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            FUN_0c0d0024();
            break;
        case 3:
            *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
            *(unsigned char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9)) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))) + t25);
            *(unsigned char *)(((int)stk + 8)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x9)));
            FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)(((int)stk + 8))));
            (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
            FUN_0c0d0024();
            break;
        }
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x4) != 0) {
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0);
        FUN_0c09a808(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x8))), (*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x9))));
        (((struct o71A9_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
        (((struct o71A8_uchar *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4)))->v) = 0x1;
        *(struct V12 *)(0xC494988 + (signed char)(*(signed char *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x3) * 12)) = *(struct V12 *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 44);
        FUN_0c0d0024();
        *(struct V12 *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 44) = *(struct V12 *)(0xC494988 + (signed char)(*(signed char *)(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x3) * 12));
        (((struct oA2_ushort *)(a4))->v) = 0x0;
    }
    if ((((((struct o48_int *)(a4))->v)) & 0x400) != 0) {
        (((struct o15_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) + 0x1);
        (((struct o15_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) & 0x1);
    }
    if (0x0 != 0) {
        (((struct o14_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14))) + 0x1);
        (((struct o14_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14))) & 0x3);
    }
    if ((((((struct o48_int *)(a4))->v)) & 2) != 0) {
        *(unsigned int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30)) = ((*(int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30))) + 0x2000);
        *(unsigned int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30)) = ((*(int *)((((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x30))) & 0xFFFF);
    }
    if ((*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x15))) != 0) {
        t193 = 0x48;
        if ((((((struct o48_int *)(a4))->v)) & 0x200) == 0) {
        } else {
            t144 = FUN_0c09a910(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            t193 = (signed char)t144;
            if ((signed char)t144 == 64) {
                if (((((struct oA2_short *)(a4))->v)) == 0) {
                    (((struct oA2_ushort *)(a4))->v) = (*(short *)((0xC7EB262 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x5))) * (unsigned short)0x72D0))));
                }
                t193 = 0xA2;
            }
        }
    } else {
        t167 = *(signed char *)(((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x16) + 0x0));
        (((struct o16_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = (t167 + 0x1);
        t193 = 0x14;
        if ((int)(unsigned char)(t167 + 0x1) > (int)(unsigned char)(*(signed char *)((((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0) + 0x14)))) {
            (((struct o16_uchar *)(((short)((short)(signed char)t0 * (short)0xA8) + 0xC4949A0)))->v) = 0x0;
            t169 = FUN_0c09a910(((unsigned short)((unsigned short)(signed char)t0 * (unsigned short)0x72D0) + 0xC7E40C4));
            t193 = (signed char)t169;
            if ((signed char)t169 == 64) {
                if (((((struct oA2_short *)(a4))->v)) == 0) {
                    (((struct oA2_ushort *)(a4))->v) = (*(short *)((0xC7EB262 + (unsigned short)((unsigned short)(*(signed char *)((a4 + 0x5))) * (unsigned short)0x72D0))));
                }
                t193 = 0xA2;
            }
        }
    }
    return t193;
}
