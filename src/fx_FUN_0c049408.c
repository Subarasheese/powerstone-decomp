/* Initialises an effect object: copies a 3-entry base/spread row from the table at 0xC14A928 and perturbs each with random values. */
int FUN_0c06231c(int, int, int);
float FUN_0c0df940(void);

void FUN_0c049408(char *o)
{
    float *src;
    float *dst;
    float w;
    int i;

    o[0] = 0;
    FUN_0c06231c((int)o, 0xC4CFA68, o[0x11] + 0x21);
    src = (float *)0xC14A928 + o[0x14] * 6;
    dst = (float *)(o + 4);
    for (i = 0; i < 3; i++) {
        dst[i] = src[2 * i];
        w = src[2 * i + 1];
        if (w != 0.0f) {
            dst[i] += (float)(o[0x13] % 5) * (w / 5.0f);
            dst[i] += (float)((unsigned)(FUN_0c0df940() * 255.0f) % (unsigned)(int)(w / 5.0f));
        }
    }
    *(float *)(o + 0x40) = 1.0f;
    *(float *)(o + 0x24) = 2.0f;
    *(float *)(o + 0x20) = 2.0f;
    *(float *)(o + 0x1C) = 2.0f;
    *(unsigned *)(o + 0x18) = ((unsigned)(FUN_0c0df940() * 255.0f) % 16) << 12;
    o[0] = 1;
    o[0x12] = 0;
    o[0x10] = 3;
}
