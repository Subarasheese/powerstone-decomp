/* attract/demo screen objects (bank SYUKYAKU/DEMO COMN) (0c02a1f4-0c02afc4) */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int obj_destroy(int);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
extern void FUN_0c02a5e4(void);
extern void FUN_0c02a6c4(void);
extern void FUN_0c02aa9c(int);
extern void demo_spawn_jitter_sparkle(int, int);
extern void FUN_0c0a3f50(int);
extern void bgm_play_open(void);
extern void bgm_play_demo_m(void);
extern void bgm_play_demo_w(void);
extern void bgm_play_demo_e(void);
extern void FUN_0c028f48(void *);
extern void demo_spawn_keyframe_mover(int, int, float);
extern void fx_spawn_0574d2(int);
extern void demo_spawn_effect_actors(int, int);
extern void FUN_0c029abc(int, int);
extern void FUN_0c029ec4(void);
extern void ui_fade_start(int, int, int, int);
extern float math_rand_float(void);
#define STATE_BLOCK ((char *)0xC7F2EE0)
#define SHORT_AT(o) (*(short *)(STATE_BLOCK + (o)))
#define CUE_ENTRY ((char *)0xC147988 + (short)(24 * SHORT_AT(20)))
#define ENTRY_INT(o) (*(int *)(CUE_ENTRY + (o)))
#define CUE_TABLE ((char *)0xC1484C8)

int FUN_0c02a784(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x8))) != 0) {
    } else {
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = -256.0f;
        u1 = u1 + 4.0f * u0;
        (((struct o44_float *)(a4))->v) = u1;
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x80);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        u1 = 30.0f;
        u1 = u1 + 90.0f * ((u0 / 128.0f));
        (((struct o48_float *)(a4))->v) = u1;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        (((struct oEC_ushort *)(a4))->v) = ((((int)((unsigned int)(int)u1 % (unsigned int)0x40)) << 8) << 2);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x40);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o50_float *)(a4))->v) = ((u0 / 64.0f) + 0.75f);
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t0 = (int)((unsigned int)(int)u1 % (unsigned int)0x40);
        u0 = (float)t0;
        if ((int)t0 < 0) {
            u0 = ((float)t0 + 4.2949673e+09f);
        }
        (((struct o54_float *)(a4))->v) = ((u0 / ((((struct o0_float *)0xC02AA2C)->v))) + ((((struct o4_float *)0xC02AA2C)->v)));
        u0 = math_rand_float();
        u1 = (u0 * 255.0f);
        if (!(2.14748365e+09f > (u0 * 255.0f))) {
            u1 = (((u0 * 255.0f)) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((a4 + 0x34)) = (((int)((unsigned int)(int)u1 % (unsigned int)0x8)) << 13);
    }
    (((struct oF2_ushort *)(a4))->v) = (((((struct oF2_short *)(a4))->v)) + 0x1);
    u0 = (((struct o10_float *)0xC02AA2C)->v);
    if ((((((struct oF2_short *)(a4))->v)) & 4) != 0) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
        u1 = (((((struct o54_float *)(a4))->v)) + u0);
    } else {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - u0);
        u1 = (((((struct o54_float *)(a4))->v)) - u0);
    }
    (((struct o54_float *)(a4))->v) = u1;
    (((struct oEC_ushort *)(a4))->v) = (((((struct oEC_short *)(a4))->v)) + 0x38E);
    u0 = ((((struct o44_float *)(a4))->v));
    u0 = u0 + ((((struct o48_float *)(a4))->v)) * (math_sin_angle16(((((struct oEC_short *)(a4))->v))));
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.5f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    if (((((struct o1C_float *)0xC02AA2C)->v)) > ((((struct o24_float *)(a4))->v))) {
        return obj_destroy(a4);
    }
    return 0x24;
}

void demo_attract_main(void)
{
    float time_scale, scale_30;
    int frames_30, cue_time, unused_i;
    unsigned char mode_byte;

    if (*(int *)0xC386830 != 0) {
        *(int *)0xC386834 = 0;
        time_scale = 0.8333333134651184f;
    } else {
        time_scale = 1.0f;
    }
    scale_30 = time_scale * 30.0f;
    switch ((unsigned char)STATE_BLOCK[7]) {
    case 0:
        STATE_BLOCK[7] = STATE_BLOCK[7] + 1;
        STATE_BLOCK[10] = 0;
        STATE_BLOCK[9] = 0;
        STATE_BLOCK[8] = 0;
        SHORT_AT(24) = 0;
        SHORT_AT(22) = 0;
        SHORT_AT(20) = 0;
        SHORT_AT(18) = 0;
        FUN_0c02aa9c(0);
        /* fall through */
    case 1:
        if ((unsigned int)(math_rand_float() * 255.0f) % 5 == 0) {
            FUN_0c02a5e4();
        }
        switch ((unsigned char)STATE_BLOCK[8]) {
        case 0:
            SHORT_AT(18) = 1;
            SHORT_AT(20) = 5;
            demo_spawn_jitter_sparkle(0, 0);
            STATE_BLOCK[8] = STATE_BLOCK[8] + 1;
            FUN_0c0a3f50(4);
            /* fall through */
        case 1:
            SHORT_AT(18) = SHORT_AT(18) - 1;
            if (SHORT_AT(18) == 3 && SHORT_AT(20) == 1) {
                bgm_play_open();
            }
            if (SHORT_AT(18) != 0) {
                return;
            }
            SHORT_AT(18) = (int)(time_scale * 60.0f);
            SHORT_AT(20) = SHORT_AT(20) - 1;
            if (SHORT_AT(20) > 1) {
                demo_spawn_jitter_sparkle(1, SHORT_AT(20) - 1);
                demo_spawn_jitter_sparkle(2, 0);
                FUN_0c0a3f50(6);
                return;
            }
            if (SHORT_AT(20) == 1) {
                FUN_0c0a3f50(5);
                FUN_0c0a3f50(7);
                return;
            }
            if (SHORT_AT(20) != 0) {
                return;
            }
            STATE_BLOCK[7] = STATE_BLOCK[7] + 1;
            STATE_BLOCK[8] = 0;
            SHORT_AT(18) = 0;
            SHORT_AT(20) = 0;
            SHORT_AT(22) = 0;
            SHORT_AT(24) = 0;
            if (STATE_BLOCK[40] != 0) {
                bgm_play_demo_e();
                return;
            }
            switch (*(int *)0xC321070) {
            case 0:
                bgm_play_demo_m();
                break;
            case 1:
                bgm_play_demo_w();
                break;
            case 2:
                bgm_play_demo_e();
                break;
            }
            *(int *)0xC321070 = (*(int *)0xC321070 + 1) % 3;
            return;
        default:
            return;
        }
    case 2:
        FUN_0c02a5e4();
        FUN_0c02a5e4();
        FUN_0c02a5e4();
        FUN_0c02a6c4();
        SHORT_AT(18) = SHORT_AT(18) - 1;
        while (SHORT_AT(18) <= 0) {
            if (SHORT_AT(22) == 1) {
                STATE_BLOCK[7] = STATE_BLOCK[7] + 1;
                STATE_BLOCK[8] = 0;
                SHORT_AT(18) = 0;
                SHORT_AT(20) = 0;
                return;
            }
            if (*(int *)(CUE_TABLE + (short)(48 * SHORT_AT(20))) == -1) {
                SHORT_AT(22) = 1;
                SHORT_AT(18) = 0;
            } else {
                FUN_0c028f48(CUE_TABLE + (short)(48 * SHORT_AT(20)));
                SHORT_AT(18) = (int)((float)(SHORT_AT(24) + *(int *)(CUE_TABLE + (short)(48 * SHORT_AT(20)))) * time_scale);
                SHORT_AT(24) = (int)((float)*(int *)(CUE_TABLE + (short)(48 * SHORT_AT(20))) - (float)SHORT_AT(18) / time_scale);
                SHORT_AT(20) = SHORT_AT(20) + 1;
            }
        }
        return;
    case 3:
        frames_30 = (int)scale_30;
        cue_time = (int)((float)ENTRY_INT(0) * time_scale);
        while (!(cue_time > SHORT_AT(18))) {
            mode_byte = STATE_BLOCK[40];
            if (!(ENTRY_INT(4) == 1 && mode_byte != 0)) {
                switch (ENTRY_INT(8)) {
                case -1:
                    SHORT_AT(18) = frames_30;
                    STATE_BLOCK[7] = STATE_BLOCK[7] + 1;
                    STATE_BLOCK[8] = 0;
                    return;
                case 0:
                    if (ENTRY_INT(4) == 2) {
                        if (mode_byte == 1) {
                            demo_spawn_keyframe_mover(ENTRY_INT(12), ENTRY_INT(16), *(float *)(CUE_ENTRY + 20));
                        }
                    } else {
                        demo_spawn_keyframe_mover(ENTRY_INT(12), ENTRY_INT(16), *(float *)(CUE_ENTRY + 20));
                    }
                    break;
                case 1:
                    FUN_0c02aa9c(ENTRY_INT(12));
                    break;
                case 2:
                    fx_spawn_0574d2(*(signed char *)(0xC148DC8 + ENTRY_INT(12)));
                    break;
                case 3:
                    demo_spawn_effect_actors(ENTRY_INT(12), ENTRY_INT(16));
                    break;
                case 4:
                    FUN_0c029abc(ENTRY_INT(12), ENTRY_INT(16));
                    break;
                case 5:
                    FUN_0c029ec4();
                    break;
                }
            }
            SHORT_AT(20) = SHORT_AT(20) + 1;
            cue_time = (int)((float)ENTRY_INT(0) * time_scale);
        }
        SHORT_AT(18) = SHORT_AT(18) + 1;
        return;
    default:
        SHORT_AT(18) = SHORT_AT(18) - 1;
        if (SHORT_AT(18) == 0) {
            STATE_BLOCK[5] = STATE_BLOCK[5] + 1;
            STATE_BLOCK[6] = 0;
            STATE_BLOCK[7] = 0;
            ui_fade_start(-1, 0, 0, 60);
            return;
        }
        if (SHORT_AT(18) == (int)scale_30 - 1) {
            ui_fade_start(-1, 0, 1, (int)scale_30 - 1);
        }
        return;
    }
}
