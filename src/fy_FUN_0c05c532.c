/* Animation step of an effect object (state byte +9, step counter short +236): state 0 grows the scale of the sub-object (+0x2E4: floats +28/+32/+36) by 0.2 per step, state 1 pulses it with FUN_0c0dfa50; then advances the sub-object's word +24, and every few steps (short +238) emits a particle with FUN_0c0b6568 at the position (0, 12.4, 76) transformed by nlCalcPoint. */
struct Sub { char pad0[24]; int w24; float f28, f32, f36; };
float FUN_0c0dfa50(int a);
int FUN_0c0e1550(int a);
int FUN_0c0e1240(char *m);
int nlCalcPoint(float *in, float *out);
void FUN_0c0b6568(float *p, char *q, int a, int b);
void FUN_0c05c532(char *o)
{
    float stk[6];
    char *own = *(char **)(o + 28);
    struct Sub *sub = *(struct Sub **)(o + 0x2E4);
    sub->w24 = sub->w24 + 12743;
    switch (*(signed char *)(o + 9)) {
    case 0:
        (*(struct Sub **)(o + 0x2E4))->f28 = (*(struct Sub **)(o + 0x2E4))->f28 + 0.199999988f;
        (*(struct Sub **)(o + 0x2E4))->f32 = (*(struct Sub **)(o + 0x2E4))->f32 + 0.199999988f;
        (*(struct Sub **)(o + 0x2E4))->f36 = (*(struct Sub **)(o + 0x2E4))->f36 + 0.199999988f;
        *(short *)(o + 236) = *(short *)(o + 236) + 1;
        if (*(short *)(o + 236) >= 3) {
            *(signed char *)(o + 9) = *(signed char *)(o + 9) + 1;
            *(short *)(o + 236) = 0;
        }
        break;
    case 1:
        (*(struct Sub **)(o + 0x2E4))->f28 = 1.0f + 0.5f * FUN_0c0dfa50((short)(*(short *)(o + 236) * 30));
        (*(struct Sub **)(o + 0x2E4))->f32 = 1.0f + 0.5f * FUN_0c0dfa50((short)(*(short *)(o + 236) * 30));
        (*(struct Sub **)(o + 0x2E4))->f36 = 1.0f + 0.25f * FUN_0c0dfa50(*(short *)(o + 236) * 15);
        *(short *)(o + 236) = *(short *)(o + 236) + 1;
        if (*(short *)(o + 236) >= 12)
            *(short *)(o + 236) = 0;
        break;
    default:
        break;
    }
    FUN_0c0e1550(1);
    FUN_0c0e1240(o + 108);
    stk[3] = 0.0f;
    stk[4] = 12.3999996f;
    stk[5] = 76.0f;
    nlCalcPoint(&stk[3], &stk[0]);
    if (*(short *)(o + 238) == 0) {
        FUN_0c0b6568(&stk[0], own + 44, *(signed char *)(own + 3), 1);
    } else if (*(short *)(o + 238) % 4 == 0) {
        FUN_0c0b6568(&stk[0], own + 44, *(signed char *)(own + 3), 0);
    }
    *(short *)(o + 238) = *(short *)(o + 238) + 1;
    if (*(short *)(o + 238) >= 16)
        *(short *)(o + 238) = 0;
}
