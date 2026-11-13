/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0c44d6.json (synthetic). */
/* Boss/effect stage machine (stage bytes at +12, +13, +14): slides a scale up and down, steers the position, and finally eases +0x20.. toward +0x38.. */
struct v3 { float x, y, z; };
extern void thunk_math_mat_get_translate(int, float *);
extern void FUN_0c0c3408(char *, int);
extern void cam_set_shake_ramp(int);
extern int pl_angle_to_opponent(char *);
extern void fx31_steer_toward_target(char *, int);
extern void fx_spawn_33(char *, int, char *, float *);
extern void fx_spawn_32(char *, int);
extern void snd_play_char_voice(char *, int);
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);

void fx31_thrown_update(char *o)
{
    char *p, *base;
    float buf[3];
    float v[3];
    float c01, c005, c02, c3, f, g;
    unsigned int b01, b005, b02;
    int *q;
    int b, step;

    p = *(char **)(o + 0x1C);
    switch (o[12]) {
    case 0:
        o[12] = o[12] + 1;
        o[13] = 0;
        *(short *)(o + 0xF2) = 0;
        break;
    case 1:
        break;
    default:
        return;
    }
    b01 = 0x3DCCCCCC;
    b005 = 0x3D4CCCCC;
    b02 = 0x3E4CCCCC;
    c01 = *(float *)&b01;
    c005 = *(float *)&b005;
    c02 = *(float *)&b02;
    base = (char *)0xC7E40C4 + (unsigned short)((unsigned short)p[3] * (unsigned short)0x72D0);
    b = *(signed char *)(base + 0x71F1);
    thunk_math_mat_get_translate((int)(base + 0x300 + (short)(b * 3520) + 0x840), buf);
    *(struct v3 *)(o + 56) = *(struct v3 *)(p + 32);
    *(float *)(o + 60) = buf[1] + 100.0f;
    step = 0;          /* 0: nothing, 1: call fx_spawn_33 with v = c005 * o[80], 2: with v = c02 */
    switch (o[13]) {
    case 0:
        *(float *)(o + 88) = *(float *)(o + 88) - c01;
        f = *(float *)(o + 88);
        if (c01 > f) {
            *(float *)(o + 88) = c01;
            o[13] = o[13] + 1;
            o[14] = 0;
            FUN_0c0c3408(o, 1);
            *(short *)(o + 0xF2) = 0;
        }
        *(float *)(o + 84) = *(float *)(o + 88);
        *(float *)(o + 80) = *(float *)(o + 88);
        break;
    case 1:
        *(int *)(o + 48) = *(int *)(o + 48) + 1820;
        *(int *)(o + 48) = *(int *)(o + 48) & 0xFFFF;
        *(float *)(o + 88) = *(float *)(o + 88) + c01;
        *(short *)(o + 0xF2) = *(short *)(o + 0xF2) + 1;
        cam_set_shake_ramp(5);
        c3 = 3.0f;
        f = *(float *)(o + 88);
        if (f > c3) {
            *(float *)(o + 88) = c3;
            *(int *)(o + 48) = pl_angle_to_opponent(p);
            *(int *)(o + 52) = 0;
            *(int *)(o + 44) = 0;
            o[13] = o[13] + 1;
            o[14] = 0;
            *(short *)(o + 0xF2) = 0;
        }
        *(float *)(o + 84) = *(float *)(o + 88);
        *(float *)(o + 80) = *(float *)(o + 88);
        step = 1;
        break;
    case 2:
        switch (o[14]) {
        case 0:
            o[14] = o[14] + 1;
            *(short *)(o + 0xF2) = 0;
            /* fall through */
        case 1:
            fx31_steer_toward_target(o, 3);
            *(short *)(o + 0xF2) = *(short *)(o + 0xF2) + 1;
            if (*(short *)(o + 0xF2) == 30) {
                o[14] = o[14] + 1;
                *(short *)(o + 0xF2) = 0;
            }
            if (*(short *)(o + 0xF2) % 3 == 0)
                step = 1;
            break;
        case 2:
            *(short *)(o + 0xF2) = *(short *)(o + 0xF2) + 1;
            if (*(short *)(o + 0xF2) % 3 == 0)
                step = 2;
            q = *(int **)(o + 740);
            q[4] = q[4] + 546;
            q = *(int **)(o + 740);
            if (q[4] >= 5461) {
                q = *(int **)(o + 740);
                q[4] = 5461;
                o[14] = o[14] + 1;
                *(short *)(o + 0xF2) = 0;
            }
            break;
        default:
            o[13] = o[13] + 1;
            o[14] = 0;
            break;
        }
        break;
    case 3:
        if (o[14] == 0) {
            o[14] = o[14] + 1;
            *(short *)(o + 0xF0) = 5;
            *(short *)(o + 0xF2) = 20;
        }
        fx31_steer_toward_target(o, 3);
        *(short *)(o + 0xF2) = *(short *)(o + 0xF2) - 1;
        if (*(short *)(o + 0xF2) == 0) {
            *(short *)(o + 0xF2) = 20;
            *(short *)(o + 0xF0) = *(short *)(o + 0xF0) - 1;
            if (*(short *)(o + 0xF0) == 0) {
                o[13] = o[13] + 1;
                o[14] = 0;
            }
            g = math_sin_angle16(*(int *)(o + 48)) * 100.0f;
            *(float *)(o + 32) = *(float *)(o + 32) - g;
            g = math_cos_angle16(*(int *)(o + 48)) * 100.0f;
            *(float *)(o + 40) = *(float *)(o + 40) - g;
            fx_spawn_32(o, 0);
            snd_play_char_voice(p, 55);
        }
        if (*(short *)(o + 0xF2) % 6 == 0)
            step = 3;
        break;
    case 4:
        q = *(int **)(o + 740);
        q[4] = q[4] - 546;
        q = *(int **)(o + 740);
        if (q[4] < 0) {
            o[13] = o[13] + 1;
            o[14] = 0;
            q = *(int **)(o + 740);
            q[4] = 0;
        }
        break;
    case 5:
        *(float *)(o + 88) = *(float *)(o + 88) - c01;
        f = *(float *)(o + 88);
        if (c01 > f) {
            *(float *)(o + 88) = c01;
            o[13] = o[13] + 1;
            o[14] = 0;
            FUN_0c0c3408(o, 0);
        }
        *(float *)(o + 84) = *(float *)(o + 88);
        *(float *)(o + 80) = *(float *)(o + 88);
        break;
    default:
        o[12] = o[12] + 1;
        o[13] = 0;
        o[14] = 0;
        break;
    }
    if (step == 1) {
        f = *(float *)(o + 80) * c005;
        v[0] = f; v[1] = f; v[2] = f;
        fx_spawn_33(o, 1, o + 32, v);
    } else if (step == 2) {
        v[0] = c02; v[1] = c02; v[2] = c02;
        fx_spawn_33(o, 1, o + 32, v);
    } else if (step == 3) {
        v[0] = c02; v[1] = c02; v[2] = c02;
        fx_spawn_33(o, 1, o + 32, v);
    }
    *(float *)(o + 32) = *(float *)(o + 32) + (*(float *)(o + 56) - *(float *)(o + 32)) / 5.0f;
    *(float *)(o + 36) = *(float *)(o + 36) + (*(float *)(o + 60) - *(float *)(o + 36)) / 5.0f;
    *(float *)(o + 40) = *(float *)(o + 40) + (*(float *)(o + 64) - *(float *)(o + 40)) / 5.0f;
}
