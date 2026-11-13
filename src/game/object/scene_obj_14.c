/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c05876c-0c0588d8) */

/* named globals (symbols.txt) */
extern char g_res_font[];
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_destroy(int, int, int, int);
int FUN_0c06233a(int, int, int);

int fx_tick_0588d8(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_6 = *(signed char *)((v0_4 + 0x8));
    v0_3 = (v0_6);
    v0_0 = (0xC06233A);
    v0_0 = (0x2);
    v0_1 = (0x11F);
    v0_2 = (0x1);
    v0_4 = (v0_4);
    v0_5 = (0x0);
    if ((v0_6 == 0)) goto L_C058798;
    if ((v0_3 == 1)) goto L_C0587EE;
    return obj_destroy(v0_4, R5, R6, a7);
    L_C0587EE:;
    v0_6 = *(short *)0xC361BFC;
    v0_3 = ((unsigned short)v0_6);
    R5 = (0x58);
    if ((((unsigned short)v0_6 & 64) == 0)) goto L_C058846;
    *(unsigned char *)((v0_4 + 0x4)) = ((*(signed char *)((v0_4 + 0x4))) + 0x2);
    v0_6 = (v0_5);
    if (((int)(*(signed char *)((v0_4 + 0x4))) <= (int)R5)) goto L_C05880E;
    *(unsigned char *)((v0_4 + 0x4)) = v0_5;
    L_C05880E:;
    FUN_0c06233a((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))), ((int)g_res_font), ((*(signed char *)((v0_4 + 0x4))) + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))) + 0x2)) = v0_1;
    v0_3 = (v0_1);
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C05880E;
    L_C0588C4:;
    return v0_3;
    L_C058846:;
    if (((v0_3 & 128) == 0)) goto L_C0588C4;
    *(unsigned char *)((v0_4 + 0x4)) = ((*(signed char *)((v0_4 + 0x4))) - 2);
    v0_6 = (v0_5);
    if (((int)(*(signed char *)((v0_4 + 0x4))) >= 0)) goto L_C05885E;
    *(unsigned char *)((v0_4 + 0x4)) = R5;
    L_C05885E:;
    FUN_0c06233a((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))), ((int)g_res_font), ((*(signed char *)((v0_4 + 0x4))) + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (v0_6 << 2)) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))) + 0x2)) = v0_1;
    v0_3 = (v0_1);
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C05885E;
    goto L_C0588C4;
    L_C058798:;
    *(unsigned char *)((v0_4 + 0x8)) = ((*(signed char *)((v0_4 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_4))->v) = 0x3C;
    *(unsigned char *)((v0_4 + 0x1)) = v0_2;
    *(unsigned short *)((v0_4 + 0x6)) = 0x1F;
    *(unsigned char *)((v0_4 + 0x5)) = 0x19;
    v0_6 = (v0_5);
    L_C0587B4:;
    v0_3 = *(signed char *)((v0_4 + 0x4));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 << 2);
    FUN_0c06233a((*(int *)((((v0_6 << 2) + (0x2E0 + v0_4)) + 0x0))), ((int)g_res_font), (v0_3 + v0_6));
    *(unsigned char *)(((*(int *)((((0x2E0 + v0_4) + (*(int *)(((int)stk + 0)))) + 0x0))) + 0x0)) = v0_2;
    v0_3 = (int)(v0_6 + 0x1) < (int)v0_0;
    *(unsigned short *)(((*(int *)((((0x2E0 + v0_4) + (*(int *)(((int)stk + 0)))) + 0x0))) + 0x2)) = v0_1;
    v0_6 = ((v0_6 + 0x1));
    if (v0_3) goto L_C0587B4;
    goto L_C0587EE;
}
