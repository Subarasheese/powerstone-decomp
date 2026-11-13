/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c01628c-0c017240) */

/* named globals (symbols.txt) */
extern char g_ending_character[];
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
int FUN_0c0623a6(int, int, int);
int obj_destroy(int);
struct SpriteScale { char pad_00[8]; float scale; };
struct FadeObj {
    char pad_00[8];
    signed char state;      /* 0x08 */
    signed char phase;      /* 0x09 */
    char pad_0a[0x2E0 - 0xA];
    struct SpriteScale *up;         /* 0x2E0 */
    struct SpriteScale *down;       /* 0x2E4 */
};
int obj_create(int, int, int);
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
struct o10_float { char p[0x10]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int math_vec3_add(int, int, int);
int math_vec3i_add(int, int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct fld0_short { short value; };
struct fld0_uchar { unsigned char value; };
struct fld0_uint { unsigned int value; };
struct fld1_uchar { char pad[0x1]; unsigned char value; };
struct fld14_short { char pad[0x14]; short value; };
struct fld4_uint { char pad[0x4]; unsigned int value; };
struct fld8_uint { char pad[0x8]; unsigned int value; };
struct fldA_short { char pad[0xA]; short value; };
struct fldA_ushort { char pad[0xA]; unsigned short value; };
struct fldC_ushort { char pad[0xC]; unsigned short value; };
int ending_spawn_vtx_wave(void);
int FUN_0c016b3e(int);
int FUN_0c016d8a(void);
int staffroll_create(void);
int ui_fade_start(int, int, int, int);
int fx_spawn_0488b8(int, int, int, int);
int game_reset_objects(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int bgm_stop_streams(void);
int bgm_play_ending_start(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_force_mode(int, int, int);
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int game_draw_frame(void);
int res_switch_scene(int, int, int, int);
int testmode_check_exit_combo(void);

int ending_obj_init_basic(int a4);
int ending_obj_set_sprite(int a4, int a5);
int ending_spawn_sprite_pair(void);
int ending_spawn_uv_scroll(void);
int FUN_0c016d08(void);
int FUN_0c016e02(void);
int ending_scene_main(void);

int ending_obj_init_basic(int a4)
{
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = 0x2;
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    *(unsigned char *)((a4 + 0x5)) = 0x20;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o24_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 0.0f;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    return 0x20;
}

int ending_obj_set_sprite(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned short *)((a4 + 0x2)) = 0x1F;
    return FUN_0c0623a6(a4, 0xC6649D0, a5);
}

void ending_tick_scale_slide_pair(struct FadeObj *obj)
{
    if (obj->state == 0) {
        obj->state = obj->state + 1;
    }
    if (obj->phase == 0) {
        if (*(short *)0xC7F2EEE >= 0x13B0) {
            obj->phase = obj->phase + 1;
        }
    } else {
        obj->down->scale = obj->down->scale - 1.0f;
        obj->up->scale = obj->up->scale + 1.0f;
        if (!(300.0f > obj->up->scale)) {
            obj_destroy((int)obj);
        }
    }
    if (*(unsigned char *)0xC7F2EE5 > 1) {
        obj_destroy((int)obj);
    }
}

int ending_spawn_sprite_pair(void)
{
    register int t0;
    register int t8;
    register int t3;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x2);
    t8 = t0;
    if (t0 != 0) {
        ending_obj_init_basic(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC0162D2;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t2 = t3;
            t2 = (t2 << 2);
            ending_obj_set_sprite((*(int *)((((0x2E0 + t0) + t2) + 0x0))), (*(int *)((0xC116BB8 + t2))));
            t3 = (t3 + 0x1);
        }
        t8 = 0x2DC;
    }
    return t8;
}

int ending_tick_uv_scroll(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t10;
    register int t18;
    register int t25;
    register int t27;
    register float u29;
    register float u30;
    register int t35;
    register int t61;
    register int t63;

    t0 = (((struct o2E0_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x8))) == 0) {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        (((struct oEC_ushort *)(a4))->v) = 0x0;
        (((struct o2C_float *)(t0))->v) = 0.00999999978f;
        (((struct o20_float *)(a4))->v) = -100.0f;
    }
    if (((((struct oEC_short *)(a4))->v)) != 0) {
        t8 = (((struct o9C_int *)(t0))->v);
        *(unsigned int *)(((int)stk + 8)) = t8;
        mdl_vtx_iter_begin(t8, t8);
        for (;;) {
            t10 = mdl_vtx_iter_next();
            if (t10 != 0) {
                break;
            }
            mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - 10.0f);
            mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        }
        (((struct oEC_ushort *)(a4))->v) = 0x0;
    }
    t18 = *(short *)0xC7F2EEE;
    if (!(1230.0f > (float)t18) && !((float)t18 > 1250.0f)) {
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 0.000499999966f);
    }
    t25 = (((struct o9C_int *)(t0))->v);
    *(unsigned int *)(((int)stk + 8)) = t25;
    mdl_vtx_iter_begin(t25, t25);
    for (;;) {
        t27 = mdl_vtx_iter_next();
        if (t27 != 0) {
            break;
        }
        mdl_vtx_get_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
        u29 = *(float *)(((int)stk + 0));
        u30 = (((struct o2C_float *)(t0))->v);
        *(float *)(((int)stk + 0)) = (u29 + u30);
        if ((u29 + u30) > 10.0f) {
            (((struct oEC_ushort *)(a4))->v) = 0x1;
        }
        mdl_vtx_set_uv((((int)stk + 0) + 0x4), ((int)stk + 0));
    }
    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + 0.0300300289f);
    t35 = *(signed char *)((a4 + 0x9));
    if (t35 != 0) {
        if (t35 != 1) {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 12.0f);
        } else {
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 6.0f);
            if ((int)(*(short *)0xC7F2EEE) >= (int)0x1950) {
                *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
            }
        }
    } else {
        if ((int)(*(short *)0xC7F2EEE) < (int)0x18EC) {
        } else {
            *(unsigned char *)((a4 + 0x9)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
        }
    }
    t61 = *(signed char *)0xC7F2EE5;
    t63 = (unsigned char)t61;
    if ((int)(unsigned char)t61 > (int)0x1) {
        t63 = (obj_destroy(a4));
    }
    return t63;
}

int ending_spawn_uv_scroll(void)
{
    register int t0;
    register int t8;
    register int t3;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x3);
    t8 = t0;
    if (t0 != 0) {
        ending_obj_init_basic(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC0163C4;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t2 = t3;
            t2 = (t2 << 2);
            ending_obj_set_sprite((*(int *)((((0x2E0 + t0) + t2) + 0x0))), (*(int *)((0xC116BC0 + t2))));
            t3 = (t3 + 0x1);
        }
        t8 = 0x2DC;
    }
    return t8;
}

int ending_tick_vtx_wave(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R3;
    int R5;
    int R6;
    register float F0;
    register float F2;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    R5 = a5;
    R6 = a6;
    v0_2 = (0x0);
    v0_0 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x8))) != 0)) goto L_C0165FC;
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    (((struct oEC_ushort *)(v0_0))->v) = v0_2;
    (((struct oEE_ushort *)(v0_0))->v) = v0_2;
    (((struct oF0_ushort *)(v0_0))->v) = v0_2;
    L_C0165FC:;
    v0_4 = (((((struct o2E0_int *)(v0_0))->v)));
    v0_1 = (0xC7F2EE0);
    v0_3 = (0xC1169D8);
    if (!(((int)(*(short *)0xC7F2EEE) >= (int)(*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + 0xC1169D8) + 0x0)))))) goto L_C0167AA;
    (((struct oEC_ushort *)(v0_0))->v) = (((((struct oEC_short *)(v0_0))->v)) + 0x1);
    if (((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x4))) != -1)) goto L_C01663A;
    goto L_C0169C4;
    L_C0167AA:;
    math_vec3_add((v0_0 + 0x38), (v0_0 + 0x38), (v0_0 + 0x44));
    math_vec3_add((v0_0 + 0x20), (v0_0 + 0x20), (v0_0 + 0x38));
    math_vec3i_add((v0_0 + 0x2C), (v0_0 + 0x2C), (v0_4 + 0x34));
    w0_0 = (0.149999991f);
    if ((((*(short *)((v0_1 + 0xE))) & 64) == 0)) goto L_C016800;
    v0_5 = (0x24);
    w0_0 = ((((((struct o24_float *)(v0_0))->v)) + w0_0));
    L_C016806:;
    *(float *)((v0_0 + v0_5)) = w0_0;
    v0_4 = *(short *)0xC361BFC;
    v0_3 = (0xC361BF0);
    R5 = (0x2);
    R6 = ((unsigned short)v0_4);
    if ((((unsigned short)v0_4 & 0x2) == 0)) goto L_C01681C;
    if (((0x200 & R6) != 0)) goto L_C016830;
    L_C01681C:;
    v0_5 = (0x20);
    if ((((unsigned short)((((struct o20_short *)(v0_3))->v)) & R5) == 0)) goto L_C016868;
    if ((((unsigned short)(*(short *)((v0_3 + v0_5))) & 0x200) == 0)) goto L_C016868;
    L_C016830:;
    if ((((((struct oEE_short *)(v0_0))->v)) != 0)) goto L_C016868;
    v0_3 = (0xC7F2EEE);
    if (((int)(*(short *)0xC7F2EEE) <= (int)0x30C)) goto L_C016868;
    if (((int)(*(short *)((v0_3 + 0x0))) >= (int)0x111C)) goto L_C016868;
    (((struct oEE_ushort *)(v0_0))->v) = 0x1;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_3 + 0x34)) = (*(int *)((v0_0 + 0x2C)));
    (((struct o2C_float *)(v0_3))->v) = ((((struct o24_float *)(v0_0))->v));
    (((struct o30_float *)(v0_3))->v) = ((((struct o28_float *)(v0_0))->v));
    v0_3 = (v0_3);
    L_C016868:;
    v0_5 = (0xEE);
    v0_4 = (0xC0DF4D0);
    if ((((((struct oEE_short *)(v0_0))->v)) == 0)) goto L_C0168E8;
    *(unsigned short *)((v0_0 + v0_5)) = ((*(short *)((v0_0 + v0_5))) + 0x1);
    if (((int)(*(short *)((v0_0 + v0_5))) < (int)0x3D)) goto L_C0168A0;
    *(unsigned short *)((v0_0 + v0_5)) = v0_2;
    *(unsigned short *)((v0_0 + (v0_5 + 0x2))) = v0_2;
    v0_3 = (((struct o2E4_int *)(v0_0))->v);
    *(unsigned int *)((v0_0 + 0x2C)) = (*(int *)((v0_3 + 0x34)));
    (((struct o24_float *)(v0_0))->v) = ((((struct o2C_float *)(v0_3))->v));
    (((struct o28_float *)(v0_0))->v) = ((((struct o30_float *)(v0_3))->v));
    v0_3 = (v0_3);
    L_C0168E8:;
    v0_3 = (((struct o2E8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    mdl_vtx_iter_begin(((((struct o80_int *)((*(int *)0xC6649D8)))->v)), ((((struct o9C_int *)(v0_3))->v)));
    v0_3 = (((((*(short *)((v0_1 + 0xE))) << 8) << 2) << 2));
    v0_4 = (0xC062ABE);
    v0_4 = (0xE38);
    w0_0 = (14.0f);
    L_C016972:;
    v0_5 = (mdl_vtx_iter_next()) == 0;
    if (v0_5) goto L_C01694C;
    if (((int)(*(short *)((v0_1 + 0xE))) < (int)0x19C8)) goto L_C0169A6;
    v0_3 = (v0_2);
    R5 = (0x28F);
    L_C01699E:;
    if (!(((int)v0_3 < (int)(*(signed char *)((v0_0 + 0x2DC)))))) goto L_C0169A6;
    v0_2 = *(int *)((((v0_3 << 2) + (0x2E0 + v0_0)) + 0x0));
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) - R5);
    v0_3 = ((v0_3 + 0x1));
    R6 = (v0_2);
    goto L_C01699E;
    L_C0169A6:;
    v0_2 = (((struct o2EC_int *)(v0_0))->v);
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0xB6);
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_1 + 0xE))) & 0x1);
    v0_1 = *(signed char *)((v0_1 + 0x5));
    v0_5 = ((unsigned char)v0_1);
    v0_3 = (v0_2);
    if (((int)(unsigned char)v0_1 <= (int)0x1)) goto L_C0169CA;
    L_C0169C4:;
    v0_5 = ((((int (*)(int, int, int))(obj_destroy))(v0_0, R5, R6)));
    L_C0169CA:;
    return v0_5;
    L_C01694C:;
    mdl_vtx_get_pos((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((math_cos_angle16(v0_3)) * (*(float *)(((int)stk + 16)))) / w0_0)));
    mdl_vtx_set_pos((((int)stk + 4) + 0x4));
    v0_3 = ((v0_3 + v0_4));
    goto L_C016972;
    L_C0168A0:;
    *(int *)((int)stk + 0) = (v0_0 + 0x24);
    w0_0 = ((((struct o24_float *)(v0_0))->v));
    w0_0 = w0_0 + 30.0f * (math_sin_angle16(((((struct oF0_short *)(v0_0))->v))));
    (((struct o24_float *)(v0_0))->v) = w0_0;
    *(int *)((int)stk + 0) = (0x28 + v0_0);
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - (((math_cos_angle16(((((struct oF0_short *)(v0_0))->v)))) * 30.0f)));
    (((struct oF0_ushort *)(v0_0))->v) = (((((struct oF0_short *)(v0_0))->v)) + 0x444);
    *(unsigned int *)((v0_0 + 0x2C)) = ((*(int *)((v0_0 + 0x2C))) + 0x444);
    v0_3 = (0x444);
    goto L_C0168E8;
    L_C016800:;
    v0_5 = (0x24);
    w0_0 = ((((((struct o24_float *)(v0_0))->v)) - w0_0));
    goto L_C016806;
    L_C01663A:;
    v0_7 = (((struct oEC_short *)(v0_0))->v);
    v0_5 = *(int *)((((((((short)v0_7 - 1) << 2) << 2) << 1) + v0_3) + 0x0));
    v0_6 = *(int *)(((((((short)v0_7 << 2) << 2) << 1) + v0_3) + 0x0));
    *(unsigned int *)((v0_4 + 0x34)) = (int)((float)((*(int *)(((((((short)v0_7 << 2) << 2) << 1) + v0_3) + 0x14))) - (*(int *)((v0_0 + 0x2C)))) / (float)(v0_6 - v0_5));
    *(unsigned int *)((v0_4 + 0x38)) = (int)((float)((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x18))) - (*(int *)((v0_0 + 0x30)))) / (float)(v0_6 - v0_5));
    v0_7 = *(int *)((v0_0 + 0x34));
    v0_8 = *(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x1C));
    *(unsigned int *)((v0_4 + 0x3C)) = (int)((float)(v0_8 - v0_7) / (float)(v0_6 - v0_5));
    R5 = (v0_3);
    w0_0 = ((float)(v0_6 - v0_5));
    FPUL_ = ((int)((float)(v0_8 - v0_7) / (float)(v0_6 - v0_5)));
    if (((*(int *)((((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3) + 0x4))) != 1)) goto L_C01672C;
    (((struct o38_float *)(v0_0))->v) = ((((((struct o8_float *)((R5 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o20_float *)(v0_0))->v))) / w0_0);
    (((struct o3C_float *)(v0_0))->v) = ((((((struct oC_float *)(((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3)))->v)) - ((((struct o24_float *)(v0_0))->v))) / w0_0);
    (((struct o40_float *)(v0_0))->v) = ((((((struct o10_float *)((v0_3 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o28_float *)(v0_0))->v))) / w0_0);
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    (((struct o48_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    goto L_C0167AA;
    L_C01672C:;
    w0_1 = (w0_0 * ((((struct o38_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o44_float *)(v0_0))->v) = (((((((struct o8_float *)((R5 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o20_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    w0_1 = (w0_0 * ((((struct o3C_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o48_float *)(v0_0))->v) = (((((((struct oC_float *)(((((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1) + v0_3)))->v)) - ((((struct o24_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    w0_1 = (w0_0 * ((((struct o40_float *)(v0_0))->v)));
    w0_1 = (w0_1 * 2.0f);
    (((struct o4C_float *)(v0_0))->v) = (((((((struct o10_float *)((v0_3 + (((((((struct oEC_short *)(v0_0))->v)) << 2) << 2) << 1))))->v)) - ((((struct o28_float *)(v0_0))->v))) - w0_1) / (w0_0 * w0_0));
    goto L_C0167AA;
}

int FUN_0c016d08(void)
{
    register int t0;
    register int t12;
    register int t4;
    register int t2;
    register int t3;
    register int t5;
    register float u6;

    t0 = obj_create(0x5, 0x1, 0x9);
    t12 = t0;
    if (t0 != 0) {
        ending_obj_init_basic(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC016BD2;
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            t5 = 0x2E0;
            t3 = t4;
            t3 = (t3 << 2);
            t5 = (t5 + t0);
            t5 = (t5 + t3);
            t5 = (*(int *)((t5 + 0x0)));
            ending_obj_set_sprite(t5, (*(int *)((0xC116C00 + t3))));
            t2 = 0x20;
            u6 = (*(float *)((0xC116C24 + t3)));
            t2 = (t2 + t5);
            *(float *)((t2 + 0x0)) = u6;
            t2 = 0x1C;
            t2 = (t2 + t5);
            t4 = (t4 + 0x1);
            *(float *)((t2 + 0x0)) = u6;
        }
        t12 = 0x2DC;
    }
    return t12;
}

int FUN_0c016d7a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c016df2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x8));
    t1 = t0;
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c016e02(void)
{
    register int t0;
    register int t6;
    register int t2;

    t0 = obj_create(0x5, 0x1, 0x1);
    t6 = t0;
    if (t0 != 0) {
        ending_obj_init_basic(t0);
        *(unsigned int *)((t0 + 0x10)) = 0xC016DF2;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(signed char *)((t0 + 0x2DC)))) {
                break;
            }
            ending_obj_set_sprite((*(int *)((((t2 << 2) + (0x2E0 + t0)) + 0x0))), 0x23);
            t2 = (t2 + 0x1);
        }
        t6 = 0x2DC;
    }
    return t6;
}

int ending_scene_main(void)
{
    int stack_args[6];
    register int phase;
    register int next_phase_a;
    register int next_phase_b;
    register int draw_arg_a;
    register int draw_arg_b;
    register int pad_a;
    int pad_b;
    register int pad_c;
    int pad_d;
    int pad_e;
    int pad_f;

    if ((*(signed char *)0xC7F300B) != 0) {
        return 0x12B;
    }
    if ((*(signed char *)0xC7F300E) != 0) {
        return 0x12E;
    }
    phase = *(signed char *)0xC7F2EE5;
    if ((unsigned char)phase != 0) {
        if ((unsigned char)phase != 1) {
            if ((unsigned char)phase == 2) {
                (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
                (((struct fld8_uint *)0xC7F31BC)->value) = 0x0;
                (((struct fld4_uint *)0xC7F31BC)->value) = 0x0;
                (((struct fld0_uint *)0xC7F31BC)->value) = 0x0;
                FUN_0c016b3e(0x0);
                FUN_0c016d8a();
                (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                if (((int)((((struct fldA_short *)0xC7F2EE4)->value)) < (int)0x168) && ((pad_a = (((struct fld0_short *)0xC361BFC)->value), ((unsigned short)pad_a & 8) == 0) && (pad_b = (((struct fld14_short *)0xC361BFC)->value), ((unsigned short)pad_b & 8) == 0))) {
                } else {
                    next_phase_a = 0xFF;
                    if ((*(signed char *)0xC7F301E) != 0) {
                    } else {
                        next_phase_a = ((*(signed char *)0xC7F2EE5) + 0x1);
                    }
                    (((struct fld1_uchar *)0xC7F2EE4)->value) = next_phase_a;
                    ui_fade_start(0xFFFFFFFF, 0x0, 0x1, 0x15);
                    (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                }
            } else {
                if ((unsigned char)phase == 3) {
                    (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                    if (((int)((((struct fldA_short *)0xC7F2EE4)->value)) < (int)0x168) && ((pad_c = (((struct fld0_short *)0xC361BFC)->value), ((unsigned short)pad_c & 8) == 0) && (pad_d = (((struct fld14_short *)0xC361BFC)->value), ((unsigned short)pad_d & 8) == 0))) {
                        draw_arg_a = 0xC7F2EE5;
                        draw_arg_b = 0x14;
                    } else {
                        next_phase_b = 0xFF;
                        if ((*(signed char *)0xC7F301E) != 0) {
                        } else {
                            next_phase_b = ((*(signed char *)0xC7F2EE5) + 0x1);
                        }
                        (((struct fld1_uchar *)0xC7F2EE4)->value) = next_phase_b;
                        ui_fade_start(0xFFFFFFFF, 0x0, 0x1, 0x15);
                        (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                    }
                } else {
                    if ((unsigned char)phase == 4) {
                        (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                        if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) >= (int)0x14) {
                            (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
                            game_reset_objects();
                            FUN_0c016e02();
                            ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0x14);
                            (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                        } else {
                            draw_arg_a = 0xC7F2EE5;
                            draw_arg_b = 0x14;
                        }
                    } else {
                        if ((unsigned char)phase == 5) {
                            (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                            if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) >= (int)0x78) {
                                (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
                                ui_fade_start(0xFFFFFFFF, 0x0, 0x1, 0x15);
                                (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                            } else {
                                draw_arg_a = 0xC7F2EE5;
                                draw_arg_b = 0x14;
                            }
                        } else {
                            if ((unsigned char)phase == 6) {
                                (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                                if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) < (int)0x14) {
                                    draw_arg_a = 0xC7F2EE5;
                                    draw_arg_b = 0x14;
                                } else {
                                    game_reset_objects();
                                    (((struct fld0_uchar *)0xC7F2EE4)->value) = 0x5;
                                    (((struct fld1_uchar *)0xC7F2EE4)->value) = 0x0;
                                }
                            } else {
                                (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
                                if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) >= (int)0x14) {
                                    ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0x1);
                                    game_reset_objects();
                                    (((struct fld0_uchar *)0xC7F2EE4)->value) = 0x5;
                                    (((struct fld1_uchar *)0xC7F2EE4)->value) = 0x0;
                                } else {
                                    draw_arg_a = 0xC7F2EE5;
                                    draw_arg_b = 0x14;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
            if (((((struct fldA_short *)0xC7F2EE4)->value)) == 0x19D8) {
                FUN_0c016b3e(0x1);
            }
            if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) >= (int)0x1A03) {
                (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
            }
            if ((((unsigned short)((((struct fld0_short *)0xC361BFC)->value)) & 0x8) == 0) && (pad_e = (((struct fld14_short *)0xC361BFC)->value), ((unsigned short)pad_e & 0x8) == 0)) {
                draw_arg_a = 0xC361BF0;
                draw_arg_b = 0x8;
            } else {
                (((struct fld1_uchar *)0xC7F2EE4)->value) = 0x3;
                (((struct fld8_uint *)0xC7F31BC)->value) = 0x0;
                (((struct fld4_uint *)0xC7F31BC)->value) = 0x0;
                (((struct fld0_uint *)0xC7F31BC)->value) = 0x0;
                game_reset_objects();
                FUN_0c016b3e(0x0);
                FUN_0c016d8a();
                (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
                fx_spawn_0488b8(0x0, 0x0, 0x3C, 0x1);
            }
        }
    } else {
        (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
        (((struct fld8_uint *)0xC7F31BC)->value) = 0x7F7FFF;
        (((struct fld4_uint *)0xC7F31BC)->value) = 0x7F7FFF;
        (((struct fld0_uint *)0xC7F31BC)->value) = 0x7F7FFF;
        (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
        (((struct fldC_ushort *)0xC7F2EE4)->value) = 0x0;
        game_reset_objects();
        ui_fade_start(0xFFFFFFFF, 0x0, 0x0, 0x1E);
        FUN_0c05f2d4(0x3, 0x0);
        bgm_stop_streams();
        bgm_play_ending_start();
        cam_force_mode(0x1C, 0x0, 0xF0);
        ending_spawn_sprite_pair();
        ending_spawn_uv_scroll();
        ending_spawn_vtx_wave();
        FUN_0c016b3e(0x0);
        FUN_0c016d08();
        staffroll_create();
        (((struct fldA_ushort *)0xC7F2EE4)->value) = (((((struct fldA_short *)0xC7F2EE4)->value)) + 0x1);
        if (((((struct fldA_short *)0xC7F2EE4)->value)) == 0x19D8) {
            FUN_0c016b3e(0x1);
        }
        if ((int)((((struct fldA_short *)0xC7F2EE4)->value)) >= (int)0x1A03) {
            (((struct fld1_uchar *)0xC7F2EE4)->value) = ((*(signed char *)0xC7F2EE5) + 0x1);
        }
        if ((((unsigned short)((((struct fld0_short *)0xC361BFC)->value)) & 0x8) == 0) && (pad_f = (((struct fld14_short *)0xC361BFC)->value), ((unsigned short)pad_f & 0x8) == 0)) {
            draw_arg_a = 0xC361BF0;
            draw_arg_b = 0x8;
        } else {
            (((struct fld1_uchar *)0xC7F2EE4)->value) = 0x3;
            (((struct fld8_uint *)0xC7F31BC)->value) = 0x0;
            (((struct fld4_uint *)0xC7F31BC)->value) = 0x0;
            (((struct fld0_uint *)0xC7F31BC)->value) = 0x0;
            game_reset_objects();
            FUN_0c016b3e(0x0);
            FUN_0c016d8a();
            (((struct fldA_ushort *)0xC7F2EE4)->value) = 0x0;
            fx_spawn_0488b8(0x0, 0x0, 0x3C, 0x1);
        }
    }
    cam_update_view_matrices(draw_arg_a, draw_arg_b, 0x0, 0x0, *(int *)((int)stack_args + 0), *(int *)((int)stack_args + 0 + 4), *(int *)((int)stack_args + 0 + 8), *(int *)((int)stack_args + 0 + 12));
    FUN_0c05f952();
    obj_tick_class(0x5);
    obj_tick_class(0x6);
    return FUN_0c0593e0(0x5);
}

int ending_mode_frame(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((unsigned char)(*(signed char *)0xC7F2EE9) == 0) {
        *(unsigned char *)g_ending_character = 0x0;
        res_switch_scene(0x9, a5, a6, a7);
        (((struct o6_uchar *)0xC7F2EE4)->v) = 0x0;
        (((struct o5_uchar *)0xC7F2EE4)->v) = ((*(signed char *)0xC7F2EE9) + 0x1);
    }
    if ((*(signed char *)0xC7F300C) == 0) {
        if (((unsigned short)((((struct o0_short *)0xC361C0C)->v)) & 0x20000) == 0) {
            (((struct o0_uchar *)0xC7F300B)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC7F300B)->v) = 0x1;
        }
    } else {
        if (((unsigned short)((((struct o4_short *)0xC361C0C)->v)) & 0x200) != 0) {
            (((struct o0_uchar *)0xC7F300B)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC7F300B)->v) = 0x1;
        }
    }
    if ((((unsigned short)((((struct o0_short *)0xC361C0C)->v)) & 0x20000) != 0) && (t0 = (((struct o4_short *)0xC361C0C)->v), ((unsigned short)t0 & 0x200) != 0)) {
        (((struct o1_uchar *)0xC7F300B)->v) = ((-(*(signed char *)0xC7F300C)) + 0x1);
    }
    if (0x0 != 0) {
        (((struct o2_uchar *)0xC7F300B)->v) = (((*(signed char *)0xC7F300D) + 0x1) & 0x7);
    }
    (((struct o3_uchar *)0xC7F300B)->v) = ((*(signed char *)0xC7F300E) - 1);
    if ((int)(*(signed char *)0xC7F300E) < 0) {
        (((struct o3_uchar *)0xC7F300B)->v) = (*(signed char *)0xC7F300D);
    }
    t0 = *(signed char *)0xC7F2EE5;
    (((struct o1_uchar *)0xC7F2EE4)->v) = (*(signed char *)0xC7F2EEA);
    ending_scene_main();
    game_draw_frame();
    (((struct o6_uchar *)0xC7F2EE4)->v) = (*(signed char *)0xC7F2EE5);
    (((struct o1_uchar *)0xC7F2EE4)->v) = (unsigned char)t0;
    if ((*(signed char *)0xC7F2EEA) == 0) {
        (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
        (((struct o1_uchar *)0xC7F2EE4)->v) = 0x2;
        (((struct o2_uchar *)0xC7F2EE4)->v) = 0x8;
        (((struct o3_uchar *)0xC7F2EE4)->v) = 0x1;
        (((struct o4_uchar *)0xC7F2EE4)->v) = 0x5;
        (((struct o5_uchar *)0xC7F2EE4)->v) = 0x0;
        (((struct o6_uchar *)0xC7F2EE4)->v) = 0x0;
    }
    t0 = testmode_check_exit_combo();
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
        (((struct o0_uchar *)0xC7F2EE4)->v) = 0x1;
        (((struct o1_uchar *)0xC7F2EE4)->v) = 0x2;
        (((struct o2_uchar *)0xC7F2EE4)->v) = 0x8;
        (((struct o3_uchar *)0xC7F2EE4)->v) = 0x0;
        (((struct o8_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o4_uint *)0xC7F31BC)->v) = 0x0;
        (((struct o0_uint *)0xC7F31BC)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
