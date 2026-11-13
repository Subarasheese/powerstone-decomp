/* resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load (0c05fc50-0c061094) */

/* named globals (symbols.txt) */
int res_load_pl_models(int a4);
extern char g_res_art_art[];
extern char g_res_art_model[];
extern char g_res_capcom_logo[];
extern char g_res_capcom_model[];
extern char g_res_cockpit_faces[];
extern char g_res_csel_csel[];
extern char g_res_csel_ksel[];
extern char g_res_csel_open[];
extern char g_res_csel_ssel[];
extern char g_res_demo_comn[];
extern char g_res_ending[];
extern char g_res_eyecatch[];
extern char g_res_font[];
extern char g_res_font_model[];
extern char g_res_item[];
extern char g_res_key_cfg[];
extern char g_res_kyoutsuu[];
extern char g_res_omake[];
extern char g_res_omake_model[];
extern char g_res_pl_textures[];
extern char g_res_pstone_logo[];
extern char g_res_stage_a[];
extern char g_res_stage_c[];
extern char g_res_system_font[];
extern char g_res_syukyaku[];
extern char g_res_test_tex[];
extern char g_res_vms_check[];
int sys_load_file(int, int);
int FUN_0c0100b0(int, int);
int FUN_0c0612f4(int, int, int);
int FUN_0c0dd6c0(int);
int FUN_0c0dd9e0(int);
int FUN_0c0e3900(int, int);
int FUN_0c0e3bb2(int, int);
int FUN_0c0dd5d0(int, int);
int memcpy(int, int, int);

int res_load_file_unpack(int a4);
int res_load_file_raw_d(int a4);
int res_model_release(int a4);
int res_textures_release(int a4);
int res_model_register(int a4);
int res_textures_register(int a4);
int res_player_entry_release(int a4);
int res_cockpit_face_release(int a4);
int res_pl_textures_release(int a4);
int res_csel_open_release(void);
int res_csel_ksel_release(void);
int res_csel_csel_release(void);
int res_csel_ssel_release(void);

int res_load_file_raw(int a4)
{
    return (sys_load_file(0xCC00000, a4));
}

int res_load_file_unpack(int a4)
{
    register int t0;
    int t5;

    t0 = sys_load_file(0xCA00000, a4);
    t5 = FUN_0c0612f4(0xCA00000, 0xCC00000, (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1));
    FUN_0c0100b0(0xCC00000, ((0xFFFFFFE0 & (t5 << 1)) + 0x20));
    return (t5 << 1);
}

int res_load_file_raw_b(int a4)
{
    return (sys_load_file(0xCC00000, a4));
}

int res_load_file_raw_c(int a4)
{
    return (sys_load_file(0xCC00000, a4));
}

int res_load_file_raw_d(int a4)
{
    return (sys_load_file(0xCC00000, a4));
}

int res_model_release(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) != 0) {
        FUN_0c0dd9e0((*(short *)((a4 + 0x2))));
        FUN_0c0e3bb2((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
    }
    return 0x0;
}

int res_textures_release(int a4)
{
    register int t3;

    if ((*(signed char *)((a4 + 0x0))) != 0) {
        FUN_0c0dd9e0((*(int *)((a4 + 0x4))));
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(short *)((a4 + 0x2)))) {
                break;
            }
            FUN_0c0dd6c0((*(int *)(((t3 << 2) + (*(int *)((a4 + 0x8)))))));
            t3 = (t3 + 0x1);
        }
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0x0)) = 0x0;
    }
    return 0x0;
}

int res_model_register(int a4)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        FUN_0c0dd9e0((*(short *)((a4 + 0x2))));
        FUN_0c0e3900((*(int *)((a4 + 0x4))), 0x0);
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}

int res_textures_register(int a4)
{
    register int t3;

    if ((*(signed char *)((a4 + 0x0))) == 0) {
        FUN_0c0dd9e0((*(int *)((a4 + 0x4))));
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(short *)((a4 + 0x2)))) {
                break;
            }
            FUN_0c0dd5d0((*(int *)(((t3 << 2) + (*(int *)((a4 + 0x8)))))), (*(int *)((a4 + 0xC))));
            t3 = (t3 + 0x1);
        }
        *(unsigned char *)((a4 + 0x0)) = 0x1;
    }
    return 0x0;
}

int res_player_entry_release(int a4)
{
    return res_textures_release(((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0));
}

int res_player_entries_release_all(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = res_player_entry_release(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}

int res_load_pl_effect(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t21;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = (t0 << 2);
    t2 = res_load_file_raw_d((*(int *)(((t0 << 2) + 0xC14D9A0))));
    t8 = memcpy(((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620), 0xCC00000, t2);
    t5 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = ((((t5 << 1) + t5) << 2) << 1);
    t9 = 0xC3517A0;
    t10 = 0x0;
    t12 = t11;
    for (;;) {
        if ((int)t10 >= (int)(*(int *)(((((((t5 << 1) + t5) << 2) << 1) + 0xC3517A0) + 0x8)))) {
            break;
        }
        t8 = (*(int *)(((((((t5 << 1) + t5) << 2) << 1) + 0xC3517A0) + 0x0)));
        t12 = t10;
        t12 = (t12 << 2);
        t9 = t12;
        t9 = (t9 + ((short)((short)(signed char)a4 * (short)0x190) + 0xC600300));
        t10 = (t10 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = ((*(int *)((t12 + t8))) + ((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620));
    }
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x8)) = (0xC600300 + (short)((short)(signed char)a4 * (short)0x190));
    res_load_file_unpack((*(int *)(((*(int *)(((int)stk + 8))) + 0xC14D960))));
    t21 = *(int *)(((int)stk + 4));
    *(unsigned short *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x2)) = (*(short *)(((t21 + 0xC3517A0) + 0x8)));
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0xC)) = (((((((((signed char)a4 << 1) + (signed char)a4) << 8) << 2) << 2) << 2) + 0xC600620) + (*(int *)(((t21 + 0xC3517A0) + 0xC))));
    *(unsigned int *)((((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0) + 0x4)) = (*(int *)((((signed char)a4 << 2) + 0xC14D958)));
    return res_textures_register(((signed char)((((a4 << 1) + a4) << 2) << 1) + 0xC6002D0));
}

int res_cockpit_face_release(int a4)
{
    return res_model_release(((unsigned char)(((a4 << 1) + a4) << 2) + ((int)g_res_cockpit_faces)));
}

int res_cockpit_faces_release_all(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = res_cockpit_face_release(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xB) {
            break;
        }
    }
    return t1;
}

int res_cockpit_face_load(int a4)
{
    int stk[1];
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    res_load_file_unpack((*(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC14D9E8))));
    t3 = *(signed char *)(((int)stk + 0));
    return res_model_register(((unsigned char)(((t3 << 1) + t3) << 2) + ((int)g_res_cockpit_faces)));
}

int res_pl_textures_release(int a4)
{
    register int t0;
    register int t3;
    register int t5;

    t0 = 0x0;
    for (;;) {
        t3 = 0x0;
        for (;;) {
            t5 = res_textures_release((((unsigned char)((((t3 << 1) + t3) << 2) << 2) + ((short)((short)(signed char)a4 * (short)0xF0) + ((int)g_res_pl_textures))) + (signed char)((((t0 << 1) + t0) << 2) << 1)));
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x5) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t5;
}

int res_pl_textures_release_all(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = res_pl_textures_release(t0);
        t0 = (t0 + 0x1);
        if ((int)(signed char)t0 >= (int)0x2) {
            break;
        }
    }
    return t1;
}


int res_player_release(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    res_pl_textures_release((*(signed char *)(((int)stk + 0))));
    return res_player_entry_release((*(signed char *)(((int)stk + 0))));
}

int res_stage_release(void)
{
    res_textures_release(((int)g_res_stage_a));
    res_textures_release(0xC664958);
    return res_textures_release(((int)g_res_stage_c));
}

int res_item_release(void)
{
    return res_textures_release(((int)g_res_item));
}

int res_cockpit_release(void)
{
    return res_model_release(0xC17FDB0);
}

int res_cockpit_load(void)
{
    res_load_file_unpack(0x7E);
    return res_model_register(0xC17FDB0);
}

int res_eyecatch_release(void)
{
    return res_model_release(((int)g_res_eyecatch));
}

int res_eyecatch_load(void)
{
    res_load_file_unpack(0x7F);
    return res_model_register(((int)g_res_eyecatch));
}

int res_test_tex_release(void)
{
    return res_model_release(((int)g_res_test_tex));
}

int res_test_tex_load(int a4, int a5, int a6, int a7)
{
    res_load_file_unpack(0xC2);
    return res_model_register(((int)g_res_test_tex));
}

int res_font_release(void)
{
    res_model_release(((int)g_res_font_model));
    return res_textures_release(((int)g_res_font));
}

int res_pstone_logo_release(void)
{
    return res_textures_release(((int)g_res_pstone_logo));
}

int res_csel_open_release(void)
{
    return res_textures_release(((int)g_res_csel_open));
}

int res_csel_ksel_release(void)
{
    return res_textures_release(((int)g_res_csel_ksel));
}

int res_csel_csel_release(void)
{
    return res_textures_release(((int)g_res_csel_csel));
}

int res_csel_ssel_release(void)
{
    return res_textures_release(((int)g_res_csel_ssel));
}

int res_csel_release_all(void)
{
    res_csel_open_release();
    res_csel_ksel_release();
    res_csel_csel_release();
    return res_csel_ssel_release();
}

int res_demo_comn_release(void)
{
    res_textures_release(((int)g_res_syukyaku));
    return res_textures_release(((int)g_res_demo_comn));
}

int res_ending_release(void)
{
    res_textures_release(((int)g_res_ending));
    res_textures_release(0xC6649D0);
    return res_model_release(0xC17FE70);
}

int res_omake_release(void)
{
    res_textures_release(((int)g_res_omake));
    return res_model_release(((int)g_res_omake_model));
}

int res_option_release(void)
{
    return res_model_release(0xC17FEA4);
}

int res_option_load(void)
{
    res_load_file_unpack(0xC0);
    return res_model_register(0xC17FEA4);
}

int res_art_model_release(void)
{
    return res_textures_release(((int)g_res_art_model));
}

int res_art_art_release(void)
{
    return res_textures_release(((int)g_res_art_art));
}

int res_key_cfg_release(void)
{
    return res_textures_release(((int)g_res_key_cfg));
}

int res_vms_check_release(void)
{
    return res_textures_release(((int)g_res_vms_check));
}

int res_system_font_release(void)
{
    return res_textures_release(((int)g_res_system_font));
}

int res_capcom_logo_release(void)
{
    res_textures_release(((int)g_res_capcom_logo));
    return res_model_release(((int)g_res_capcom_model));
}

int res_kyoutsuu_release(void)
{
    res_textures_release(((int)g_res_kyoutsuu));
    return res_model_release(0xC33F66C);
}
