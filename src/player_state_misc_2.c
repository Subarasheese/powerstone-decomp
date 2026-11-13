/* state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 2 of 2 of the same module) (0c098160-0c098c48) */

/* named globals (symbols.txt) */
extern char g_pl_special_move_tbl[];
extern char g_pl_victim_tbl[];
struct u8_at_00 { unsigned char byte_00; };
struct u8_at_01 { char p[0x1]; unsigned char byte_01; };
struct float_at_20 { char p[0x20]; float pos_x; };
struct float_at_28 { char p[0x28]; float pos_z; };
struct int_at_2e4 { char p[0x2E4]; int field_2e4; };
struct int_at_71f8 { char p[0x71F8]; int field_71f8; };
struct u8_at_720a { char p[0x720A]; unsigned char field_720a; };
struct u8_at_720b { char p[0x720B]; unsigned char field_720b; };
struct u8_at_7243 { char p[0x7243]; unsigned char field_7243; };
struct short_at_7248 { char p[0x7248]; short field_7248; };
int FUN_0c0555c4(void);
int pl_state28_sub3_update(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
struct o24_float { char p[0x24]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int obj_place_linked_ahead(int, int, float);
typedef struct { char byte_0; char pad; unsigned short word_2; short word_4; } step_rec;
extern void pl_step_motion(char *);
struct o107_uchar { char p[0x107]; unsigned char v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int FUN_0c09bc3a(int, int);
int pl_angle_to_opponent(int);
struct o2E4_int { char p[0x2E4]; int v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct oEE_short { char p[0xEE]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
int pl_end_action_choose_state(int);
struct oEC_short { char p[0xEC]; short v; };
int pl_step_motion_owner(int);
int pl_apply_motion_translation(int);
int pl_change_state(int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);

int FUN_0c098818(int a4);

int pl_state28_sub0_update(int player, int arg5, int arg6, int arg7)
{
    int stack_args[9];

    register int reg_r1;
    register int reg_r2;
    register int reg_r3;
    register int reg_r8;
    register int reg_r12;
    register float freg_0;
    register float freg_2;
    register float freg_3;
    register float freg_12;
    register float freg_14;
    register float freg_15;
    register int tflag;
    register int tmp_a;
    register int tmp_b;
    register int tmp_c;
    register int tmp_d;
    register float ftmp_0;
    register float ftmp_1;
    register float ftmp_2;
    register float ftmp_3;
    register float ftmp_4;
    tmp_b = player;
    tmp_a = arg5;
    tmp_a = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((int)g_pl_special_move_tbl) + ((*(signed char *)((tmp_b + 0x4))) << 2))))))(tmp_b, tmp_a, arg6, arg7, *(int *)((int)stack_args + 0), *(int *)((int)stack_args + 0 + 4), *(int *)((int)stack_args + 0 + 8), *(int *)((int)stack_args + 0 + 12), *(int *)((int)stack_args + 0 + 16), *(int *)((int)stack_args + 0 + 20), *(int *)((int)stack_args + 0 + 24));
    tmp_d = *(signed char *)((tmp_b + 0x4));
    tmp_c = (tmp_d);
    tmp_a = (tmp_b);
    if ((tmp_d != 10)) goto check_state;
    done:;
    return tmp_c;
    check_state:;
    tmp_b = *(signed char *)((tmp_a + 0x71BA));
    tmp_c = (tmp_b);
    if ((tmp_b == 28)) goto check_flag_7209;
    goto done;
    check_flag_7209:;
    tmp_c = (0x7209);
    if (((*(signed char *)((tmp_a + 0x7209))) == 0)) goto turn_step;
    goto done;
    turn_step:;
    if (((*(signed char *)((tmp_a + 0x7243))) == 0)) goto after_turn;
    tmp_c = *(int *)((tmp_a + 0x30));
    tmp_d = (((struct short_at_7248 *)(tmp_a))->field_7248);
    tmp_b = ((unsigned short)(tmp_d - tmp_c));
    if (((0x8000 & (unsigned short)(tmp_d - tmp_c)) == 0)) goto turn_ok;
    tmp_b = ((tmp_b | 0xFFFF0000));
    turn_ok:;
    tmp_b = tmp_b / *(signed char *)((tmp_a + 0x7243));
    *(unsigned int *)((tmp_a + 0x30)) = (unsigned short)((*(int *)((tmp_a + 0x30))) + tmp_b);
    tmp_c = *(int *)((tmp_a + 0x1C));
    *(unsigned int *)((tmp_c + 0x30)) = (unsigned short)((*(int *)((tmp_c + 0x30))) + tmp_b);
    tmp_c = *(int *)((tmp_a + 0x1C));
    ftmp_2 = (((struct float_at_20 *)(tmp_a))->pos_x);
    *(float *)(((int)stack_args + 0)) = ftmp_2;
    ftmp_3 = (((struct float_at_20 *)(tmp_c))->pos_x);
    ftmp_0 = (((struct float_at_28 *)(tmp_c))->pos_z);
    ftmp_1 = (((struct float_at_28 *)(tmp_a))->pos_z);
    ftmp_4 = (*(float *)(((int)stack_args + 0)));
    ftmp_4 = ftmp_4 + ((ftmp_3 - ftmp_2)) * (math_cos_angle16((unsigned short)(-tmp_b)));
    (((struct float_at_20 *)(tmp_c))->pos_x) = (ftmp_4 - (((math_sin_angle16((unsigned short)(-tmp_b))) * (ftmp_0 - ftmp_1))));
    tmp_c = *(int *)((tmp_a + 0x1C));
    ftmp_4 = ((((struct float_at_28 *)(tmp_a))->pos_z));
    ftmp_4 = ftmp_4 + ((ftmp_3 - ftmp_2)) * (math_sin_angle16((unsigned short)(-tmp_b)));
    ftmp_2 = ftmp_4;
    ftmp_2 = ftmp_2 + ((ftmp_0 - ftmp_1)) * (math_cos_angle16((unsigned short)(-tmp_b)));
    (((struct float_at_28 *)(tmp_c))->pos_z) = ftmp_2;
    (((struct u8_at_7243 *)(tmp_a))->field_7243) = ((*(signed char *)((tmp_a + 0x7243))) - 1);
    after_turn:;
    tmp_b = FUN_0c0555c4();
    tmp_c = (tmp_b);
    if ((tmp_b == 0)) goto done;
    tmp_c = (0x720B);
    if (((*(signed char *)((tmp_a + 0x720B))) == 0)) goto done;
    tmp_b = *(signed char *)((0x71BB + (*(int *)((tmp_a + 0x1C)))));
    tmp_c = (tmp_b);
    if ((tmp_b == 13)) goto done;
    tmp_b = *(int *)((tmp_a + 0x1C));
    tmp_c = (((struct int_at_71f8 *)(tmp_b))->field_71f8);
    tmp_d = (((struct int_at_2e4 *)(tmp_b))->field_2e4);
    tmp_b = (((tmp_d | tmp_c) & 0x600));
    if ((((tmp_d | tmp_c) & 0x600) != 0x600)) goto dec_counter;
    (((struct u8_at_720b *)(tmp_a))->field_720b) = 0x0;
    (((struct u8_at_720a *)(tmp_a))->field_720a) = 0x4;
    *(unsigned char *)((tmp_a + 0xA)) = 0x0;
    *(unsigned char *)((tmp_a + 0xB)) = 0x0;
    pl_state28_sub3_update(tmp_a);
    tmp_b = (0x0);
    if (((*(signed char *)(((*(int *)((tmp_a + 0x1C))) + 0x9))) != 3)) goto skip_flip;
    *(unsigned int *)(((*(int *)((tmp_a + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((tmp_a + 0x30))) + 0x8000);
    *(unsigned char *)(((*(int *)((tmp_a + 0x1C))) + 0xA)) = 0x6;
    *(unsigned char *)(((*(int *)((tmp_a + 0x1C))) + 0xB)) = tmp_b;
    skip_flip:;
    (((struct u8_at_00 *)0xC7F31D0)->byte_00) = 0x1;
    (((struct u8_at_01 *)0xC7F31D0)->byte_01) = 0x2;
    tmp_c = (0x15);
    goto done;
    dec_counter:;
    (((struct u8_at_720b *)(tmp_a))->field_720b) = ((*(signed char *)((tmp_a + 0x720B))) - 1);
    tmp_c = (0x720B);
    goto done;
}

int pl_state28_sub1_phase0(int a4)
{
    register int t0;

    pl_start_motion(a4, 0x1, 0x56);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    pl_start_motion_owner((*(int *)((a4 + 0x1C))), 0x1, 0x57);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC098440));
    (((struct o24_float *)((*(int *)((a4 + 0x1C)))))->v) = ((((struct o24_float *)(a4))->v));
    (((struct o723E_uchar *)((*(int *)((a4 + 0x1C)))))->v) = 0x32;
    (((struct oEC_ushort *)(a4))->v) = 0xF;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

void pl_state28_sub1_phase1(char *fighter)
{
    step_rec *rec;
    short timer;
    float **unused;

    pl_step_motion(fighter);
    timer = *(short *)(fighter + 0xEC) - 1;
    *(short *)(fighter + 0xEC) = timer;
    if (timer <= 0) {
        rec = (step_rec *)0xC338E26;
        *(short *)(fighter + 0xEC) = 300;
        *(short *)(fighter + 0xEE) = 0;
        *(char *)(fighter + 0x723E) = rec->byte_0;
        *(int *)(fighter + 0x7248) = 0x10000 / rec->word_2;
        *(short *)(fighter + 0xF0) = rec->word_4;
        fighter[11]++;
        *(float *)(fighter + 0x727C) = (*(float **)(fighter + 28))[8];
        *(float *)(fighter + 0x7284) = (*(float **)(fighter + 28))[10];
    }
}

int FUN_0c098818(int a4)
{
    register int t0;

    (((struct o107_uchar *)(a4))->v) = 0x1;
    pl_start_motion(a4, 0x0, 0x37);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    FUN_0c09bc3a((*(int *)((a4 + 0x1C))), 0xC150A40);
    pl_start_motion((*(int *)((a4 + 0x1C))), 0x0, 0x38);
    t0 = *(int *)((a4 + 0x1C));
    (((struct o71A9_uchar *)(t0))->v) = 0x1;
    (((struct o71A8_uchar *)(t0))->v) = 0x1;
    FUN_0c09bc3a((*(int *)((a4 + 0x1C))), 0xC150A61);
    *(unsigned int *)((a4 + 0x30)) = (pl_angle_to_opponent(a4));
    obj_place_linked_ahead(a4, 0x0, (*(float *)0xC098970));
    (((struct oEE_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int pl_state28_sub2_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t3 = a5;
    if (((*(signed char *)((a4 + 0xB))) != 0) && ((t0 = (((struct oEE_short *)(a4))->v), t0 == 0) && (t1 = (((struct o71F8_int *)(a4))->v), t2 = (((struct o2E4_int *)(a4))->v), ((t2 | t1) & 0x600) == 0x600))) {
        (((struct oEE_ushort *)(a4))->v) = (((((struct oEE_short *)(a4))->v)) + 0x1);
        t3 = 0x600;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0986E6))(a4, t3, a6, a7);
    }
    return FUN_0c098818(a4);
}

float FUN_0c0988c6(int a4)
{
    register float t4;

    pl_start_motion(a4, 0x1, 0x53);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x14;
    (((struct oEE_ushort *)(a4))->v) = 0xA;
    (((struct o38_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000))) * 16.0f));
    t4 = math_sin_angle16(((-(*(int *)((a4 + 0x30)))) + 0x14000));
    (((struct o40_float *)(a4))->v) = (-(t4 * 16.0f));
    (((struct o44_float *)(a4))->v) = ((-((((struct o38_float *)(a4))->v))) / 10.0f);
    (((struct o4C_float *)(a4))->v) = ((-((((struct o40_float *)(a4))->v))) / 10.0f);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = 0.0f;
    *(unsigned char *)((a4 + 0xB)) = ((*(signed char *)((a4 + 0xB))) + 0x1);
    return (-(t4 * 16.0f));
}

int FUN_0c0989ea(int a4, int a5, int a6, int a7)
{
    register int t2;

    t2 = *(int *)((((int)g_pl_victim_tbl) + ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t2))(a4, a5, a6, a7);
}

int FUN_0c0989fc(int a4)
{
    register int t1;

    t1 = *(signed char *)(((*(int *)((a4 + 0x1C))) + 0x9));
    if (t1 != 2) {
        return pl_end_action_choose_state(a4);
    }
    return t1;
}

int FUN_0c098a0e(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        return pl_change_state(a4, 0xF, ((((struct oEC_short *)(a4))->v)));
    }
    return 0x71AA;
}

int FUN_0c098a64(int a4)
{
    pl_step_motion_owner(a4);
    pl_apply_motion_translation(a4);
    if ((*(signed char *)((a4 + 0x71AA))) != 0) {
        obj_set_owner_hit_record((*(int *)((a4 + 0x1C))), ((((struct oEC_short *)(a4))->v)));
        return obj_force_owner_state27((*(int *)((a4 + 0x1C))), ((((struct oEC_short *)(a4))->v)));
    }
    return 0x71AA;
}

int FUN_0c098ac8(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((((int)g_pl_victim_tbl) + ((*(signed char *)((a4 + 0x4))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c098ad8(int a4)
{
    register int t1;

    pl_start_motion(a4, 0x1, 0x53);
    (((struct o71A9_uchar *)(a4))->v) = 0x1;
    (((struct o71A8_uchar *)(a4))->v) = 0x1;
    (((struct oEC_ushort *)(a4))->v) = 0x1E;
    t1 = *(signed char *)((a4 + 0xB));
    *(unsigned char *)((a4 + 0xB)) = (t1 + 0x1);
    return (t1 + 0x1);
}

int FUN_0c098b2a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC098B02))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC098AD8))(a4, a5, a6, a7);
}

int FUN_0c098b96(void)
{
    return ((int (*)(void))(0xC08C838))();
}
