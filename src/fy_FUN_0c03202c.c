/* Randomises a particle record (floats +4 +8 +12 +28..+48, +68..+76, words +20 +56): speeds and scales from random numbers 0..255 mod small constants (FUN_0c0df940 is a random float in 0..1), a heading angle +20 from 360 / (1 + rand mod 36) turns, and its sine / cosine (FUN_0c0df4d0 / FUN_0c0dfa50) scaled by the speed (+40). */
extern float FUN_0c0df940(void);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
#define URAND(n) ((unsigned int)(FUN_0c0df940() * 255.0f) % (n))
void FUN_0c03202c(char *o)
{
    unsigned int k;
    float fq;
    float c;
    float s;
    *(float *)(o + 40) = 20.0f + 10.0f * (float)URAND(10u);
    *(float *)(o + 48) = *(float *)(o + 40) + 10.0f * (float)URAND(10u) + 1.0f;
    k = URAND(36u) + 1;
    fq = (float)(360u / k);
    *(int *)(o + 20) = (int)(fq * 65536.0f / 360.0f);
    c = FUN_0c0df4d0(0x10000 - *(int *)(o + 20));
    *(float *)(o + 4) = c * *(float *)(o + 40);
    s = FUN_0c0dfa50(0x10000 - *(int *)(o + 20));
    *(float *)(o + 12) = s * *(float *)(o + 40);
    *(float *)(o + 8) = 10.0f + 10.0f * (float)URAND(10u);
    c = *(float *)(o + 40) / 100.0f + 1.0f;
    *(float *)(o + 36) = c;
    *(float *)(o + 32) = c;
    *(float *)(o + 28) = c;
    *(int *)(o + 56) = (int)((float)(URAND(20u) + 15) * 65536.0f / 360.0f);
    *(float *)(o + 44) = (float)URAND(8u) + 3.5f;
    *(float *)(o + 68) = 0.00999999978f;
    *(float *)(o + 76) = 0.00999999978f;
    *(float *)(o + 72) = 0.00999999978f;
}
