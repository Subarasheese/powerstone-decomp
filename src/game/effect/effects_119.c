/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c0496f0-0c0497fc) */

struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);

int FUN_0c0496f0(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[6];

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    v0_4 = ((signed char)v0_1);
    v0_2 = (v0_0);
    v0_5 = (((unsigned short)((unsigned short)(signed char)v0_0 * (unsigned short)0x72D0) + 0xC7E40C4));
    v0_0 = ((short)((short)(signed char)v0_3 * (short)0xB0));
    if (((signed char)v0_1 == 0)) goto L_C049730;
    if ((v0_4 == 1)) goto L_C049740;
    if ((v0_4 == 2)) goto L_C049750;
    if ((v0_4 == 3)) goto L_C049760;
    if ((v0_4 == 4)) goto L_C049770;
    L_C0497C4:;
    return v0_4;
    L_C049770:;
    v0_3 = (0x6340);
    v0_1 = ((short)((short)(*(signed char *)((v0_5 + 0x71F1))) * (short)0x6E0));
    L_C04977E:;
    *(int *)((int)stk + 16) = a12;
    *(int *)((int)stk + 12) = a11;
    *(int *)((int)stk + 8) = ((signed char)(a10 >> 0));
    *(int *)((int)stk + 4) = ((short)(a9 >> 0));
    *(int *)((int)stk + 0) = 0xC14A9A0;
    v0_1 = fx_spawn_model_effect(v0_2, ((v0_1 + (v0_3 + v0_5)) + v0_0), (*(int *)(((int)stk + 20))), a8, 0xC14A9A0, ((short)(a9 >> 0)), ((signed char)(a10 >> 0)), a11, a12);
    v0_4 = (v0_1);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0497C4;
    (((struct oF0_ushort *)(v0_0))->v) = (*(short *)(((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7EB25C)));
    *(unsigned int *)((v0_0 + 0x10)) = 0xC0497FC;
    v0_4 = (0xF0);
    goto L_C0497C4;
    L_C049760:;
    v0_3 = (0x5580);
    v0_1 = ((short)((short)(*(signed char *)((v0_5 + 0x71F1))) * (short)0x6E0));
    goto L_C04977E;
    L_C049750:;
    v0_3 = (0x47C0);
    v0_1 = ((short)((short)(*(signed char *)((v0_5 + 0x71F1))) * (short)0x6E0));
    goto L_C04977E;
    L_C049740:;
    v0_3 = (0x1E80);
    v0_1 = ((short)((short)(*(signed char *)((v0_5 + 0x71F1))) * (short)0x14A0));
    goto L_C04977E;
    L_C049730:;
    v0_3 = (0x300);
    v0_1 = ((short)((short)(*(signed char *)((v0_5 + 0x71F1))) * (short)0xDC0));
    goto L_C04977E;
}
