/* Garuda motion-id sound table (0c07dd0c-0c07e774) */

struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };

int pl_garuda_cue_at_frame(int a4, int a5, int a6, int a7)
{

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    R0 = (0x719E);
    if (((unsigned short)((((struct o719E_short *)(R4))->v)) != (unsigned char)R5)) goto L_C07E764;
    R0 = ((signed char)R6);
    if (((signed char)R6 == 0)) goto L_C07E720;
    if ((R0 == 1)) goto L_C07E726;
    if ((R0 == 2)) goto L_C07E72C;
    if ((R0 == 3)) goto L_C07E736;
    if ((R0 == 4)) goto L_C07E746;
    if ((R0 == 5)) goto L_C07E754;
    L_C07E764:;
    return R0;
    L_C07E754:;
    R0 = (0x71F1);
    if (((*(signed char *)(((*(int *)((R4 + 0x1C))) + 0x71F1))) != 0)) goto L_C07E764;
    (((struct o710A_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    R0 = (0x710A);
    goto L_C07E764;
    L_C07E746:;
    R0 = (0x71F1);
    if (((*(signed char *)((R4 + 0x71F1))) != 0)) goto L_C07E764;
    (((struct o710A_uchar *)(R4))->v) = R7;
    R0 = (0x710A);
    goto L_C07E764;
    L_C07E736:;
    (((struct o710B_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    (((struct o710C_uchar *)((*(int *)((R4 + 0x1C)))))->v) = R7;
    R0 = (0x710C);
    goto L_C07E764;
    L_C07E72C:;
    (((struct o710B_uchar *)(R4))->v) = R7;
    R0 = (0x710C);
    L_C07E732:;
    *(unsigned char *)((R4 + R0)) = R7;
    goto L_C07E764;
    L_C07E726:;
    R0 = (0x710C);
    goto L_C07E732;
    L_C07E720:;
    R0 = (0x710B);
    goto L_C07E732;
}
