/* input snapshot, round-level update of the two fighters, per-player update (part 1 of 4 of the same module) (0c092814-0c092894) */

struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };

int pl_hitreact_phase4_update(int a4, int a5, int a6, int a7)
{
    int t0;
    float u0;

    if ((*(signed char *)((a4 + 0x10B))) != 0) {
        (((struct o10B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x10B))) - 1);
    }
    if (((int)(*(signed char *)((a4 + 0xB))) > 0) && (t0 = *(signed char *)((a4 + 0x10B)), t0 != 0)) {
        return 0x10B;
    }
    if (((*(signed char *)((a4 + 0x71BC))) != 2) && (u0 = (((struct o274_float *)(a4))->v), !(u0 > 0.0f))) {
        (((struct o71E8_float *)(a4))->v) = (((((struct o71E8_float *)(a4))->v)) + ((((struct o71E4_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o71E8_float *)(a4))->v)));
    } else {
        (((struct o71E8_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0xB));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0927AA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC092696))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC092412))(a4, a5, a6, a7);
}
