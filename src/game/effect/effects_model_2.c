/* generic model effect (node table, linked to owner record); same module as neighbours (0c046830-0c0469fa) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);

int fx_spawn_on_player_part(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
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
    v0_4 = a6;
    v0_2 = a7;
    *(unsigned char *)(((int)stk + 20)) = v0_2;
    v0_5 = ((signed char)v0_1);
    v0_2 = (v0_0);
    v0_3 = (((unsigned short)((unsigned short)(signed char)v0_0 * (unsigned short)0x72D0) + 0xC7E40C4));
    v0_0 = ((short)((short)(signed char)v0_4 * (short)0xB0));
    if (((signed char)v0_1 == 0)) goto L_C046870;
    if ((v0_5 == 1)) goto L_C046880;
    if ((v0_5 == 2)) goto L_C046890;
    if ((v0_5 == 3)) goto L_C0468A0;
    if ((v0_5 == 4)) goto L_C0468B0;
    L_C04690E:;
    return v0_5;
    L_C0468B0:;
    v0_4 = (0x6340);
    v0_1 = ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x6E0));
    L_C0468BE:;
    *(int *)((int)stk + 16) = a11;
    *(int *)((int)stk + 12) = a10;
    *(int *)((int)stk + 8) = ((signed char)(a9 >> 0));
    *(int *)((int)stk + 4) = ((short)(a8 >> 0));
    v0_5 = *(signed char *)(((int)stk + 20));
    *(int *)((int)stk + 0) = (((v0_5 << 2) << 2) + 0xC14A7A8);
    v0_1 = fx_spawn_model_effect(v0_2, ((v0_1 + (v0_4 + v0_3)) + v0_0), ((int)g_res_kyoutsuu), 0x3, (((v0_5 << 2) << 2) + 0xC14A7A8), ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    v0_5 = (v0_1);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C04690E;
    (((struct oF0_ushort *)(v0_0))->v) = (*(short *)(((unsigned short)((unsigned short)(signed char)v0_2 * (unsigned short)0x72D0) + 0xC7EB25C)));
    *(unsigned int *)((v0_0 + 0x10)) = 0xC04694C;
    v0_5 = (0xF0);
    goto L_C04690E;
    L_C0468A0:;
    v0_4 = (0x5580);
    v0_1 = ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x6E0));
    goto L_C0468BE;
    L_C046890:;
    v0_4 = (0x47C0);
    v0_1 = ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x6E0));
    goto L_C0468BE;
    L_C046880:;
    v0_4 = (0x1E80);
    v0_1 = ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0x14A0));
    goto L_C0468BE;
    L_C046870:;
    v0_4 = (0x300);
    v0_1 = ((short)((short)(*(signed char *)((v0_3 + 0x71F1))) * (short)0xDC0));
    goto L_C0468BE;
}
