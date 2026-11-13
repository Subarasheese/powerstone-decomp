/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c3544-0c0c571c) */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int thunk_math_mat_get_translate(int, int);

int fx31_shrink_follow_owner(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(signed char *)((a4 + 0xC));
    if (t1 != 0) {
        if (t1 != 1) {
            t1 = *(signed char *)((a4 + 0xA));
            *(unsigned char *)((a4 + 0xA)) = (t1 + 0x1);
            t2 = (t1 + 0x1);
        } else {
            t1 = (((struct oF2_short *)(a4))->v);
            (((struct oF2_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
            }
            t1 = *(signed char *)((t0 + 0x3));
            thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t1 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), a4 + 0x38);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
            if (0.5f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = 0.5f;
            }
            u0 = (((struct o50_float *)(a4))->v);
            (((struct o58_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = u0;
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o38_float *)(a4))->v)) - ((((struct o20_float *)(a4))->v))) / 5.0f));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o3C_float *)(a4))->v)) - ((((struct o24_float *)(a4))->v))) / 5.0f));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o40_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 5.0f));
            t2 = 0x28;
        }
        t1 = t2;
    } else {
        *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        (((struct oF2_ushort *)(a4))->v) = 0x3C;
        t2 = (((struct oF2_short *)(a4))->v);
        (((struct oF2_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            *(unsigned char *)((a4 + 0xC)) = ((*(signed char *)((a4 + 0xC))) + 0x1);
        }
        t2 = *(signed char *)((t0 + 0x3));
        thunk_math_mat_get_translate((((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x300) + (short)((short)(*(signed char *)((((unsigned short)((unsigned short)t2 * (unsigned short)0x72D0) + 0xC7E40C4) + 0x71F1))) * (short)0xDC0)) + 0x840), a4 + 0x38);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
        if (0.5f > ((((struct o50_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = 0.5f;
        }
        u0 = (((struct o50_float *)(a4))->v);
        (((struct o58_float *)(a4))->v) = u0;
        (((struct o54_float *)(a4))->v) = u0;
        (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) + ((((((struct o38_float *)(a4))->v)) - ((((struct o20_float *)(a4))->v))) / 5.0f));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((((struct o3C_float *)(a4))->v)) - ((((struct o24_float *)(a4))->v))) / 5.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o40_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 5.0f));
        t1 = 0x28;
    }
    return t1;
}
