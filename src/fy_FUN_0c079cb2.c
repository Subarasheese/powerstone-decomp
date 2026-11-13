/* Eases a gauge value towards a target from a local copy of the 2240-byte table at 0xC14F2E0 (sub-tables of 448 bytes by a7, entry X[2] of the block at +0x72BC): with a5 == -1 it moves the float at +80 of the player block (and copies it to +84 / +88), otherwise the float at +108 of the 176-byte record a5 of the player's slot (and copies it to +112 / +116); a6 == 0 raises it by target / 8 and clamps it to the target, a6 != 0 lowers it by target / 8 and clamps it to 1.0. */
struct Tbl { float f[560]; };
void FUN_0c079cb2(char *a, short a5, int a6, short a7)
{
    struct Tbl loc;
    float *r1;
    float *r7;
    char *t;
    int k;
    loc = *(struct Tbl *)0xC14F2E0;
    k = (signed char)a[0x72BC + 2];
    r1 = (float *)((char *)&loc + (short)(a7 * 448));
    if (a6 == 0) {
        if (a5 == -1) {
            if (r1[k] > *(float *)(a + 80)) {
                *(float *)(a + 80) = *(float *)(a + 80) + r1[k] / 8.0f;
                *(float *)(a + 88) = *(float *)(a + 80);
                *(float *)(a + 84) = *(float *)(a + 80);
                if (!(*(float *)(a + 80) > r1[k]))
                    return;
            }
            r7 = (float *)((char *)&loc + (short)(a7 * 448));
            *(float *)(a + 80) = r7[k];
            *(float *)(a + 88) = r7[k];
            *(float *)(a + 84) = r7[k];
        } else {
            t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
            if (r1[k] > *(float *)(t + 108)) {
                t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
                *(float *)(t + 108) = *(float *)(t + 108) + r1[k] / 8.0f;
                t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
                *(float *)(t + 116) = *(float *)(t + 108);
                *(float *)(t + 112) = *(float *)(t + 108);
                t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
                if (!(*(float *)(t + 108) > r1[k]))
                    return;
                r7 = (float *)((char *)&loc + (short)(a7 * 448));
                t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
                *(float *)(t + 108) = r7[k];
                *(float *)(t + 116) = r7[k];
                *(float *)(t + 112) = r7[k];
            } else {
                t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
                *(float *)(t + 108) = r1[k];
                *(float *)(t + 116) = r1[k];
                *(float *)(t + 112) = r1[k];
            }
        }
    } else {
        if (a5 == -1) {
            if (*(float *)(a + 80) > 1.0f) {
                *(float *)(a + 80) = *(float *)(a + 80) - r1[k] / 8.0f;
                *(float *)(a + 88) = *(float *)(a + 80);
                *(float *)(a + 84) = *(float *)(a + 80);
                if (!(1.0f > *(float *)(a + 80)))
                    return;
            }
            *(float *)(a + 80) = 1.0f;
            *(float *)(a + 88) = 1.0f;
            *(float *)(a + 84) = 1.0f;
        } else {
            t = a + 768 + (short)((signed char)a[0x71F1] * 3520) + (short)(a5 * 176);
            if (*(float *)(t + 108) > 1.0f) {
                *(float *)(t + 108) = *(float *)(t + 108) - r1[k] / 8.0f;
                *(float *)(t + 116) = *(float *)(t + 108);
                *(float *)(t + 112) = *(float *)(t + 108);
                if (!(1.0f > *(float *)(t + 108)))
                    return;
            }
            *(float *)(t + 108) = 1.0f;
            *(float *)(t + 116) = 1.0f;
            *(float *)(t + 112) = 1.0f;
        }
    }
}
