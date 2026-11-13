/* staff roll: fade object and credit line spawner (0c017240-0c0172e0) */

struct o24_float { char p[0x24]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int obj_destroy(int, int, int, int);

int ending_fade_obj_update(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return obj_destroy(a4, a5, a6, a7);
                }
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 0.0149999997f);
                u0 = (((struct o5C_float *)(a4))->v);
                (((struct o5C_float *)(a4))->v) = (u0 - 0.0199999996f);
                t0 = 0x5C;
                if (0.0f > (u0 - 0.0199999996f)) {
                    t1 = *(signed char *)((a4 + 0x8));
                    *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                    t0 = (t1 + 0x1);
                }
                return t0;
            }
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 0.00999999978f);
            t0 = 0x24;
            if (((((struct o24_float *)(a4))->v)) > 1.25f) {
                t1 = *(signed char *)((a4 + 0x8));
                *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
                t0 = (t1 + 0x1);
            }
            return t0;
        }
    } else {
        (((struct o5C_float *)(a4))->v) = 0.0f;
        *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    }
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 0.0149999997f);
    u0 = (((struct o5C_float *)(a4))->v);
    (((struct o5C_float *)(a4))->v) = (u0 + 0.0199999996f);
    t0 = 0x5C;
    if (!((u0 + 0.0199999996f) > 1.0f)) {
    } else {
        t1 = *(signed char *)((a4 + 0x8));
        *(unsigned char *)((a4 + 0x8)) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}
