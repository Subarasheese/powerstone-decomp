/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o69_uchar { char p[0x69]; unsigned char v; };
struct o6A_uchar { char p[0x6A]; unsigned char v; };
struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o7264_float { char p[0x7264]; float v; };
struct o7268_float { char p[0x7268]; float v; };
struct o726C_float { char p[0x726C]; float v; };
struct o7270_float { char p[0x7270]; float v; };
struct o7274_float { char p[0x7274]; float v; };
struct o7278_float { char p[0x7278]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int pad_get_type(int);
int hit_load_box_world(int, int, int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int FUN_0c041e14(int);
int game_reset_objects(void);
int obj_release_class(int);
int obj_create(int, int, int);
int pl_adjust_power_gauge(int);
int FUN_0c059d7e(int, int, int);
int res_load_file_unpack(int);
int res_load_file_raw_c(int);
float math_vec3_length(int, float);
int FUN_0c063468(int);
int FUN_0c06428a(int);
int pl_update_hit_reaction(int);
int FUN_0c064534(int);
int FUN_0c0645a0(int);
int pl_ryoma_mode04_phase0(int);
int pl_ryoma_mode04_phase1(int);
int pl_ryoma_mode04_phase2(int);
int pl_ryoma_wait_anim_end(int);
int pl_wangtang_mode12_phase0(int);
int pl_wangtang_mode12_phase1(int);
int pl_wangtang_mode12_phase2(int);
int pl_wangtang_wait_anim_end(int);
int pl_gunrock_mode01_03_enter_v1(int);
int obj_start_motion_2_0(int);
int obj_wait_motion_end_then_end_move(int);
int pl_state28_sub1_phase0(int);
int pl_state28_sub1_phase1(int);
int pl_state28_sub1_phase2(int);
int pl_state28_sub1_phase3(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int vib_stop_all(void);
int pl_get_held_item_class(int, int, int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int FUN_0c0a022e(int, float);
int obj_set_record(int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_change_state(int, int, int);
int snd_play_se(int);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int fx_spawn_29(int, int, int);
int FUN_0c0cc074(void);
int savedata_reset_keep_ranking(void);
int FUN_0c0d54ac(void);
int cam_request_mode(int, int, int);
int cam_force_mode(int, int, int);
int cam_step_keyframe_script(int, int);
int nlInvLightVector(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int);
int nlMakeModelViewProjectMatrix_objput(void);
int nl_model_bind_step(int, int, int, int);
int FUN_0c0dd9e0(int);
int nl_texture_surface_words(int);
int gfx_flip_frame_buffer(void);
int gfx_set_background_color(int, int, int);
int gfx_set_fog_color(int);
int gfx_set_fog_density(int);
int nlStoreMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetTranslate(int);
int FUN_0c0e24f0(int, int, int, float, float, float, float);
int nl_sprite_set_register(int, int);
int nl_sprite_set_release(int, int);
int syRtcGetAndCheckCount(int);
int syRtcGetCountForce(void);
int snd_bank_load(int, int);
int snd_bank_unload(int);
int _divls(void);
int sys_strided_copy_blocks(int, int, int, int, int, int);
int FUN_0c0ee6dc(int, int);
int FUN_0c0f1766(int);
int syCfgGetIDAddress(int, int, int);
int FUN_0c0f4202(int, int);
int ADXT_SetOutVol(int, int, int, int);
int FUN_0c0fb042(int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int gdFsToUpper(int);
int FUN_0c0fe938(int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c0ff640(int, int);
int FUN_0c0ff7e0(void);
int FUN_0c100260(void);
int kdGetDeviceInfo(int);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int vmsfs_c_getstate(int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext_ex(int, int, int);
int ADXSJD_GetLpStartOfst(int);
int FUN_0c1064b8(int);
int FUN_0c106654(int);
int FUN_0c106688(int, int);
int FUN_0c10d0a4(void);
int FUN_0c10dbe0(int, int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_setcmd(int, int, int, int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_bread(int, ...);
int mpdrv_set_getlerr(int, ...);
int mpdrv_set_transagain_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int FUN_0c113df4(int);
int FUN_0c11518e(int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int gdFsClose(int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int thunk_FUN_0c020cba(void);
int pdVibMxIsReady(int);
int thunk_FUN_0c0fbcf0(int);
int mpdrv_set_hreset(void);
int pl_add_gauge_by_percent(int a4);
int pl_ryoma_mode07_phase2(int a4);
int FUN_0c098a0e(int a4);
int fx29_spawn_burst8(int a4, int a5);
int game_clear_win_records(void);
int game_play_state_00(void);
int FUN_0c101090(int a4, int a5);
int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int FUN_0c114ea4(int a4, int a5, int a6);
int FUN_0c114e5c(int a4, int a5, int a6);
int opt_reset_game_options(void);
int obj_apply_accel(int a4);
int obj_apply_velocity(int a4);
int obj_apply_scale_rate(int a4);
int FUN_0c02114c(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c0210c8(int a4, int a5, int a6);
int FUN_0c0210f4(int a4, int a5, int a6);
int FUN_0c021120(int a4, int a5, int a6);
int FUN_0c05414e(void);
int FUN_0c05f136(void);
float math_vec3_normalize(int a4, float f4);
int pl_apply_velocity(int a4);
int pl_apply_acceleration(int a4);
int FUN_0c09e89a(int a4, int a5, int a6);
int pl_update_pos_delta(int a4);
int menu_ui_spawn_14(int a4);
int menu_ui_spawn_16(int a4);
int menu_ui_spawn_13(int a4);
int FUN_0c0c58da(int a4);
int fx31_pick_mode3_from_owner(int a4);
int rank_start_time_rows(int a4);
int rank_start_vs_rows(int a4);
int input_get_active_pads_mask(void);
int cam_request_mode_04(int a4, int a5);
int cam_request_mode_03(int a4, int a5);
int nl_model_bind_textures(int a4, int a5);
int nlObjPutUseViewMatrixTrnsl(int a4, float f4);
int FUN_0c0ddd40(int a4, int a5);
int nlObjPut(int a4);
float nlRotateAX(int a4);
void nlScaleV(int a4);
void nlTransposeMatrix(void);
int FUN_0c0e66f4(int a4, int a5, int a6);
int FUN_0c0e6726(int a4, int a5, int a6);
int FUN_0c0eb0c0(int a4, int a5, int a6);
int kdSetBlockRead(Stk4 s);
int kdSetGetLastError(Stk4 s);
int FUN_0c1010c2(int a4, int a5);
int FUN_0c10bc80(int a4, int a5, int a6);
int mpdrv_set_dreq(int a4);
int mpdrv_set_transagain(int a4);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_dreset(int a4);
int mpdrv_set_dkill(int a4);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_ft4ctrl(int a4, int a5);
int FUN_0c025f50(void);
int obj_release(int a4);
int FUN_0c062d78(void);
int pl_mode07_enter(int a4);
int pl_mode15_cls14_f0_phase1(int a4);
int pl_mode07_update(int a4);
int pl_jack_mode04_update(int a4, int a5, int a6, int a7);
int pl_wangtang_mode12_update(int a4);
int pl_ryoma_mode04_update(int a4);
int FUN_0c08e8ac(int a4);
int FUN_0c09c3f8(int a4, int a5);
int pl_state28_sub1_update(int a4);
int bgm_set_volume(int a4, int a5, int a6, int a7);
int pl_play_side_se_at_frame(int a4, int a5, int a6);
int FUN_0c0a3fa4(int a4, int a5);
int fx31_spin_kid_angles(int a4);
int cam_mode_20(int a4);
int FUN_0c0e4688(int a4);
int syRtcExecServer(void);
int syRtcInit(void);
int buFindFirstFileEx(int a4, int a5, int a6);
int buFindNextFileEx(int a4, int a5, int a6);
int syCfgGetDefaultLanguage(int a4, int a5, int a6);
int syHwInit(void);
int FUN_0c0fb0fc(int a4, int a5);
int FUN_0c0fd160(int a4, int a5, int a6);
int FUN_0c1010ee(int a4, int a5);
int vmsfs_unmount(int a4);
void FUN_0c105e60(int a4);
int FUN_0c107ecc(int a4, int a5, int a6, int a7);
int FUN_0c10aa20(void);
int FUN_0c10b388(void);
int kmiBGPlaneSetPCW(int a4, int a5, int a6);
int FUN_0c0207a2(int a4, int a5);
int part_free0(int a4);
int part_free1(int a4);
int part_free2(int a4);
int FUN_0c05a138(int a4, int a5, int a6);
int res_model_release(int a4);
int res_model_register(int a4);
int res_cockpit_face_load(int a4);
int pl_mode08_09_enter_v1(int a4);
int pl_load_gravity(int a4);
int FUN_0c0a32dc(void);
int FUN_0c0afb0a(int a4);
int FUN_0c0ddeb0(void);
int nlStoreMatrix8(int a4);
float nlRotateXSC(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
int syRtcAicaSetWriteFlag(void);
int FUN_0c0ed8f4(int a4, int a5);
int gdFsGetDrvStatG(int a4, int a5, int a6, int a7);
void hwInit(void);
int FUN_0c0fd18a(int a4, int a5, int a6);
void FUN_0c10660e(int a4);
int FUN_0c107ea4(int a4, int a5, int a6, int a7);
int FUN_0c10dd8c(int a4, int a5, int a6, int a7);
int kmiPurgeMemory(int a4, int a5);
int FUN_0c114b50(int a4);
int FUN_0c01e75e(int a4, int a5);
int FUN_0c020468(int a4);
int FUN_0c027c7e(void);
int FUN_0c02d458(void);
int FUN_0c04ca6e(int a4);
int obj_tick_class(int a4, int a5, int a6, int a7);
int mdl_vtx_iter_begin(int a4, int a5);
int FUN_0c064c66(int a4);
int pl_wait_anim_end_to_state14(int a4);
int pl_mode15_cls15_f0_phase0(int a4);
int pl_garuda_mode04_phase3(int a4);
int FUN_0c08b81e(int a4);
int ai_difficulty_tier(void);
int pl_inc_owner_combo(int a4, int a5);
int FUN_0c092894(int a4);
int pl_is_airborne(int a4);
int FUN_0c0a3cb0(int a4, int a5);
void FUN_0c0a3f50(int a4);
int nl_mesh_set_texture(int a4, int a5);
int syRtcAicaSetDateLo(int a4);
int syRtcAicaSetDateHi(int a4);
int gdFsGetLE4(int a4);
int vib_port_has_vibration(int a4);
int pdVibMxStart(int a4, int a5);
int FUN_0c0f271a(void);
int gdFsGetTokenSize(int a4, int a5, int a6);
int gdFsGetSearchID(int a4);
int FUN_0c0ff884(void);
int kdSetResetPattern(void);
int vmsfs_c_execcallback(int a4, int a5, int a6);
int ADXSTM_GetCurOfst(int a4, int a5);
int FUN_0c107e7e(int a4, int a5, int a6, int a7);
int adxt_eos_entry(int a4);
int FUN_0c10822c(int a4, int a5, int a6, int a7);
int mpdrv_set_getminfo_ns(int a4, int a5, int a6);
int FUN_0c024274(void);
int ai_angle_to_pad_dir(int a4);
int FUN_0c06144e(void);
int pl_falcon_attack_kind68_phase0(int a4);
int pl_jack_mode01_03_enter(int a4);
int pl_garuda_state31_phase0(int a4);
int pl_gunrock_mode01_03_enter(int a4, int a5, int a6, int a7);
int pl_state26_phase1(int a4);
int math_vec3_sub_scaled(int a4, int a5, int a6, float f4);
int menu_check_start_any_pad(void);
int item_director_count_free_slots(void);
int input_get_start_pressed_pad(void);
int FUN_0c0d643c(int a4);
int cam_request_mode_01(int a4);
int cam_request_mode_02(int a4);
int nl_texture_slot_free(int a4, int a5);
float nlRotateYSC(float f4, float f5);
void nlUnitMatrix(void);
int kmSetBackGroundPlane(int a4, int a5, int a6, int a7);

int FUN_0c101090(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0xBA);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x80;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = ((unsigned int)t4 >> 1);
                t6 = (t6 - 0x1);
                if (t6 == 0) {
                    break;
                }
            }
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 + 0x1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        t1 = (t1 - 12);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xB, ((int)stk + 8), 0x2, 0x0));
}

int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 8), 0x2, 0x0));
}

int FUN_0c114ea4(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c11518e(a4, 0x9, 0x0));
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c11518e(a4, 0xA, 0x0));
    return 0x0;
}

int FUN_0c114e5c(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c11518e(a4, 0x7, 0x0));
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c11518e(a4, 0x8, 0x0));
    return 0x0;
}

float nlRotateAX(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    u4[6] = u2[2];
    u4[7] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

void nlScaleV(int a4)
{
    register float u2;
    register float u3;
    register float u4;
    int t5;
    float u0[16];
    float u6[16];

    _builtin_st_ext((float (*)[4])u0);
    u2 = *(float *)((a4 + 0x0));
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    t5 = (*(int *)&(u0[15]));
    _builtin_st_ext((float (*)[4])u6);
    u6[0] = (u0[0] * u2);
    u6[1] = (u0[1] * u2);
    u6[2] = (u0[2] * u2);
    u6[3] = (u0[3] * u2);
    u6[4] = (u0[4] * u3);
    u6[5] = (u0[5] * u3);
    u6[6] = (u0[6] * u3);
    u6[7] = (u0[7] * u3);
    u6[8] = (u0[8] * u4);
    u6[9] = (u0[9] * u4);
    u6[10] = (u0[10] * u4);
    u6[11] = (u0[11] * u4);
    u6[12] = u0[12];
    u6[13] = u0[13];
    u6[14] = u0[14];
    u6[15] = (*(float *)&t5);
    _builtin_ld_ext((float (*)[4])u6);
}

void nlTransposeMatrix(void)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    float u0[16];
    float u13[16];

    _builtin_st_ext((float (*)[4])u0);
    t2 = (*(int *)&(u0[1]));
    t4 = (*(int *)&(u0[2]));
    t6 = (*(int *)&(u0[3]));
    t8 = (*(int *)&(u0[6]));
    t10 = (*(int *)&(u0[7]));
    t12 = (*(int *)&(u0[11]));
    _builtin_st_ext((float (*)[4])u13);
    u13[0] = u0[0];
    u13[1] = u0[4];
    u13[2] = u0[8];
    u13[3] = u0[12];
    u13[4] = (*(float *)&t2);
    u13[5] = u0[5];
    u13[6] = u0[9];
    u13[7] = u0[13];
    u13[8] = (*(float *)&t4);
    u13[9] = (*(float *)&t8);
    u13[10] = u0[10];
    u13[11] = u0[14];
    u13[12] = (*(float *)&t6);
    u13[13] = (*(float *)&t10);
    u13[14] = (*(float *)&t12);
    u13[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u13);
}

int FUN_0c0e66f4(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 8)));
    t1 = *(short *)(((int)stk + 6));
    t2 = *(int *)(((int)stk + 0));
    (((struct o31_uchar *)(((t1 << 2) + t2)))->v) = (*(short *)(((((int)stk + 0) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x31);
}

int FUN_0c0e6726(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 8)));
    t1 = *(short *)(((int)stk + 6));
    t2 = *(int *)(((int)stk + 0));
    (((struct o32_uchar *)(((t1 << 2) + t2)))->v) = (*(short *)(((((int)stk + 0) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x32);
}

int kdSetBlockRead(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_bread(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int kdSetGetLastError(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_getlerr(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int FUN_0c1010c2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0x5);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = (t4 << 1);
                t6 = (t6 - 0x1);
                if (t6 == 0) {
                    break;
                }
            }
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 - 1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        t1 = (t1 + 0xC);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int FUN_0c10bc80(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0ee6dc(a4, 0xC15B608);
    t1 = a6;
    if (t0 == 0) {
        t0 = FUN_0c0ee6dc(a5, 0xC15B614);
        if (t0 == 0) {
            t0 = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int mpdrv_set_dreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_transagain(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getcond(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreset(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dkill(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_allstatreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getminfo(int a4, int a5, int a6)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_setcond(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_arctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_ft4ctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC112F54)) == 0) {
        mpdrv_dpf(0xC15B66C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC112F54) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c0e4688(int a4)
{
    register int t0;

    t0 = *(int *)0xC7FD04C;
    *(unsigned int *)(((((int)a4 >> 5) << 2) + t0)) = ((*(int *)(((((int)a4 >> 5) << 2) + t0))) & (~((int)0x1 << (int)(a4 & 0x1F))));
    return t0;
}

int syRtcExecServer(void)
{
    register int t0;
    register int t1;

    if ((((((struct o4_int *)0xC7FD0C8)->v)) & 1) == 0) {
        (((struct o0_uint *)0xC7FD0C8)->v) = (syRtcGetAndCheckCount(((((struct o0_int *)0xC7FD0C8)->v))));
    }
    t0 = (((struct o4_int *)0xC7FD0C8)->v);
    t1 = t0;
    if ((t0 & 2) != 0) {
        t0 = syRtcGetCountForce();
        (((struct o0_uint *)0xC7FD0C8)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int syRtcInit(void)
{
    (((struct o0_uint *)0xC7FD0C8)->v) = (syRtcGetCountForce());
    (((struct o4_uint *)0xC7FD0C8)->v) = 0x0;
    syRtcExecServer();
    (((struct o8_uint *)0xC7FD0C8)->v) = (FUN_0c0ff1ac(0x900, 0xC0E4B28, 0x5C, 0x0));
    return 0x0;
}

int buFindFirstFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst_ex(a4, a5, a6);
}

int buFindNextFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext_ex(a4, a5, a6);
}

int syCfgGetDefaultLanguage(int a4, int a5, int a6)
{
    register int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xB)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syHwInit(void)
{
    hwInit();
    FUN_0c0ff640(((((struct o4_int *)0xC15A370)->v)), (*(int *)0xC346BE8));
    FUN_0c0ff7e0();
    FUN_0c0fe938(((((struct o0_int *)0xC15A370)->v)));
    return FUN_0c0ff884();
}

int FUN_0c0fb0fc(int a4, int a5)
{
    FUN_0c10d0a4();
    FUN_0c0fb042((*(int *)0xC347628), 0x2, a4, a5);
    return 0x0;
}

int FUN_0c0fd160(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((FUN_0c0fcea0(a6, a6)) << 2) + 0xC15AB80));
    return kmiCopyToFrameBuffer((a4 + 0x4), a5, (t1 + 0x4));
}

int FUN_0c1010ee(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x20;
    t1 = (a4 + 0xC0);
    t2 = a5;
    for (;;) {
        t3 = 0x6;
        for (;;) {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            for (;;) {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t6 = (t6 - 0x1);
                t4 = (t4 << 1);
                if ((t6 == 0)) {
                    break;
                }
            }
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = t5;
            t1 = (t1 - 0x1);
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t7;
}

int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0xC80DBC8) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC80DBC8) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0xC80DBC8) + 0x4)) = 0x0;
    return 0x0;
}

void FUN_0c105e60(int a4)
{
    if (a4 != 0) {
        if ((*(int *)((a4 + 0x4))) != 0) {
            FUN_0c113df4((*(int *)((a4 + 0x4))));
        }
        memset(a4, 0x0, 0x4);
    return;
    }
}

int FUN_0c107ecc(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (((0x4 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1) >> 1);
}

int FUN_0c10aa20(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC8174A8;
    t1 = 0xC8174A8;
    t2 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)((t1 + 0x0))) & 0x1) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x18);
        t1 = (t1 + 0x18);
        if ((int)t2 >= (int)0x1000) {
            return 0x0;
        }
    }
    *(unsigned short *)((t0 + 0x0)) = 0x1;
    return t0;
}

int FUN_0c10b388(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC82F4A8;
    t1 = 0xC82F4A8;
    t2 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)((t1 + 0x0))) & 0x1) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x4C);
        t1 = (t1 + 0x4C);
        if ((int)t2 >= (int)0x400) {
            return 0x0;
        }
    }
    *(unsigned short *)((t0 + 0x0)) = 0x1;
    return t0;
}

int kmiBGPlaneSetPCW(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC81716C = (((a4 & 0x7) << 16) << 8);
    if (a6 != 0) {
        t0 = *(int *)0xC81716C;
        *(unsigned int *)0xC81716C = (t0 | 0x10000000);
        t1 = (t0 | 0x10000000);
    }
    if (a5 != 0) {
        *(unsigned int *)0xC81716C = ((*(int *)0xC81716C) | 0x8000000);
    }
    return t1;
}

int nlStoreMatrix8(int a4)
{
    register int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC7FCCBC);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}

float nlRotateXSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    u2[6] = u0[2];
    u2[7] = u0[3];
    u2[8] = u1[0];
    u2[9] = u1[1];
    u2[10] = u1[2];
    u2[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

float nlRotateAY(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[8] = u3[0];
    u4[9] = u3[1];
    u4[10] = u3[2];
    u4[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

float nlRotateAZ(int a4)
{
    register float u0;
    register float u1;
    float u2[4];
    float u3[4];
    float u4[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = u0;
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    u4[2] = u2[2];
    u4[3] = u2[3];
    u4[4] = u3[0];
    u4[5] = u3[1];
    u4[6] = u3[2];
    u4[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u4);
    return u2[0];
}

int syRtcAicaSetWriteFlag(void)
{
    int stk[3];

    *(unsigned short *)(((int)stk + 8)) = 0x1;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    sys_strided_copy_blocks((((int)stk + 0) + 0x8), 0xA0710008, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int FUN_0c0ed8f4(int a4, int a5)
{
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0xC346B70 = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    return 0x0;
}

int gdFsGetDrvStatG(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;

    t3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x20)))))(((int)stk + 0), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 0)));
}

void hwInit(void)
{
    register int t0;
    register int t1;

    (((struct o0_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o4_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o8_ushort *)0xFFD00000)->v) = 0x0;
    (((struct oC_ushort *)0xFFD00000)->v) = 0x0;
    t0 = 0xFFD00004;
    t1 = 0xC15A378;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t0 = (*(int *)((t1 + 0x0)));
            *(unsigned int *)((t0 + 0x0)) = (*(int *)((t1 + 0x4)));
            t1 = (t1 + 0x8);
            continue;
        }
        break;
    }
}

int FUN_0c0fd18a(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((FUN_0c0fcea0(a6, a6)) << 2) + 0xC15AB80));
    return kmiCopyFromFrameBuffer(a4, (a5 + 0x4), t1);
}

void FUN_0c10660e(int a4)
{
    if (a4 != 0) {
        FUN_0c106654(a4);
        if ((*(int *)((a4 + 0x8))) != 0) {
            gdFsClose((*(int *)((a4 + 0x8))));
        }
        FUN_0c1064b8(a4);
    return;
    }
}

int FUN_0c107ea4(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int FUN_0c10dd8c(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x8;
    (((struct oC_uint *)0xC8426DC)->v) = (((((struct oC_int *)0xC8426DC)->v)) + 0x1);
    if ((*(int *)0xC817464) == 1) {
        (((struct o0_uint *)0xC8426DC)->v) = (((((struct o0_int *)0xC8426DC)->v)) + 0x1);
        FUN_0c10dbe0(0x1, a5, a6, a7);
    }
    return 0x0;
}

int kmiPurgeMemory(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned int)a4 <= (unsigned int)(a4 + a5)) {
        t0 = a4;
        for (;;) {
            t1 = FUN_0c0fddce(t0);
            t0 = (t0 + 0x20);
            if ((unsigned int)t0 > (unsigned int)(a4 + a5)) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c114b50(int a4)
{
    register int t3;

    if (a4 != 0) {
        memset((*(int *)((a4 + 0x4))), 0x0, 0x100);
        t3 = memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t3;
}

int syRtcAicaSetDateLo(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    sys_strided_copy_blocks((((int)stk + 0) + 0x8), 0xA0710004, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int syRtcAicaSetDateHi(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    sys_strided_copy_blocks((((int)stk + 0) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int gdFsGetLE4(int a4)
{
    return (((((unsigned char)(*(signed char *)((a4 + 0x1))) << 8) | ((unsigned char)(*(signed char *)((a4 + 0x2))) << 16)) | (((unsigned char)(*(signed char *)((a4 + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)((a4 + 0x0))));
}

int vib_port_has_vibration(int a4)
{
    register int t1;

    t1 = *(int *)(((kdGetDeviceInfo(a4)) + 0x0));
    if ((t1 & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

int pdVibMxStart(int a4, int a5)
{
    register int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return FUN_0c0f4202(a4, a5);
}

int FUN_0c0f271a(void)
{
    register int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0xC15A2E8), 0x0);
    *(unsigned int *)0xC7FE708 = 0x0;
    return t3;
}

int gdFsGetTokenSize(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = a4;
    t2 = a6;
    t3 = 0x0;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t2 = a5;
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) == 0) {
                break;
            }
            if ((*(signed char *)((t1 + 0x0))) != ((*(signed char *)((t2 + 0x0))))) {
                t2 = (t2 + 0x1);
                continue;
            }
            return t3;
        }
        t3 = (t3 + 0x1);
        t1 = (t1 + 0x1);
    }
    return t3;
}

int gdFsGetSearchID(int a4)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0xDA;
    t2 = a4;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t0 = (gdFsToUpper(t4));
        t0 = (unsigned char)t0;
        t1 = (t1 + t0);
    }
    return (unsigned char)((unsigned int)t1 >> 2);
}

int FUN_0c0ff884(void)
{
    register int t1;

    (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
    (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFE);
    (((struct o10_ushort *)0xFFD80000)->v) = 0x2;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    t1 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t1 | 0x1);
    return (t1 | 0x1);
}

int kdSetResetPattern(void)
{
    register int t0;

    t0 = mpdrv_set_hreset();
    if (((((struct o10E8_int *)((*(int *)0xC843924)))->v)) != 0) {
        FUN_0c100260();
    }
    return t0;
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    register int t2;
    register int t3;

    if (((((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v)) != 0) {
        t2 = (((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v);
        t3 = (((struct o7C_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC8057B0)))->v);
        return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, t3);
    }
    return 0x74;
}

int ADXSTM_GetCurOfst(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = ((FUN_0c0f1766((*(int *)((a4 + 0x8))))) - (*(int *)((a4 + 0xC))));
    return 0x1;
}

int FUN_0c107e7e(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (0x1 & (unsigned char)(*(signed char *)((a4 + 0x1))));
}

int FUN_0c10822c(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC15B31C, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (*(int *)(((a4 + 0x64) + (a5 << 2))));
}

int mpdrv_set_getminfo_ns(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((a6 << 16) << 8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xA, ((int)stk + 8), 0x2, 0x0));
}

float nlRotateYSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    u2[2] = u0[2];
    u2[3] = u0[3];
    u2[8] = u1[0];
    u2[9] = u1[1];
    u2[10] = u1[2];
    u2[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u2);
    return u0[0];
}

void nlUnitMatrix(void)
{
    float u0[16];

    u0[2] = 0.0f;
    u0[3] = 0.0f;
    u0[6] = 0.0f;
    u0[7] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[12] = 0.0f;
    u0[13] = 0.0f;
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[10] = 1.0f;
    u0[11] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[14] = 0.0f;
    u0[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

int kmSetBackGroundPlane(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC347690)))))(a4, a5, a6, a7);
    *(unsigned int *)0xC817064 = ((*(int *)0xC817064) & 0xFFF00000);
    return t1;
}
