/* Builds a camera-style ray (arg) from the two 0x72D0-byte player records at 0xC7E40C4 selected by the byte at arg: copies the eye points, normalises the direction and pushes the eye 800 along it, then loads a 52-byte template and runs FUN_0c0d9288 and FUN_0c0d827e. */
struct T12 { int a, b, c; };
struct S52 { int w[13]; };
extern void FUN_0c0e24f0(float *v);
extern void FUN_0c0d9288(char *p, char *q);
extern void FUN_0c0d827e(char *p);
void FUN_0c0dbe30(char *p)
{
    signed char idx = p[0];
    char *g = (char *)0xC7E40C4;
    char *A = g + (unsigned short)(idx * 0x72d0);
    char *B = g + (unsigned short)((1 - idx) * 0x72d0);
    float F[3];
    struct T12 G;
    float D[3];
    F[0] = *(float *)(A + 32);
    F[1] = *(float *)(A + 36) + 400.0f;
    F[2] = *(float *)(A + 40);
    G = *(struct T12 *)(B + 32);
    D[0] = F[0] - ((float *)&G)[0];
    D[2] = F[2] - ((float *)&G)[2];
    D[1] = F[1] - ((float *)&G)[1];
    if (D[0] == 0.0f && D[2] == 0.0f && D[1] == 0.0f) {
        D[1] = 0.0001f;
        D[2] = 0.0001f;
        D[0] = 0.0001f;
    }
    FUN_0c0e24f0(D);
    F[0] += 800.0f * D[0];
    F[2] += 800.0f * D[2];
    F[1] += 800.0f * D[1];
    if (0.0f > F[1])
        F[1] = 0.0f;
    *(struct T12 *)(p + 392) = G;
    *(struct T12 *)(p + 404) = *(struct T12 *)F;
    *(int *)(p + 416) = (int)(p + 392);
    *(int *)(p + 420) = (int)(p + 404);
    *(struct S52 *)(p + 424) = *(struct S52 *)0xC155394;
    FUN_0c0d9288(p, p + 424);
    FUN_0c0d827e(p);
}
