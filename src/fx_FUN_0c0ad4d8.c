/* Initialises a thrown object (arg) from its owner at +28 and a 3-byte kind row: copies the owner's blocks, adds the owner's sin/cos-scaled offsets to its position and hands the result to FUN_0c0c07bc with a table float. */
struct T12 { int a, b, c; };
extern void FUN_0c0a1e0a(char *o, int k);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c0c07bc(char *a, char *b, char *c, int d, float f);
void FUN_0c0ad4d8(char *o)
{
    char *own = *(char **)(o + 28);
    signed char *e;
    float k;
    int j;
    o[8]++;
    o[3] = own[3];
    *(int *)(o + 280) = 0;
    e = (signed char *)(0xC33BFD8 + (signed char)o[788] * 10);
    o[0x101] = e[1];
    o[0x102] = e[2];
    FUN_0c0a1e0a(o, e[0]);
    o[261] = 0;
    o[262] = 0;
    o[263] = 0;
    *(struct T12 *)(o + 32) = *(struct T12 *)(own + 32);
    *(float *)(o + 32) += 50.0f * (FUN_0c0df4d0(0x14000 - *(int *)(own + 48)) * *(float *)(own + 0x7298));
    *(float *)(o + 40) += 50.0f * (FUN_0c0dfa50(0x14000 - *(int *)(own + 48)) * *(float *)(own + 0x7298));
    if ((signed char)o[781] == 8 || (signed char)o[781] == 9)
        k = 80.0f;
    else
        k = 120.0f;
    *(float *)(o + 36) += k * *(float *)(own + 0x7298);
    *(struct T12 *)(o + 44) = *(struct T12 *)(own + 44);
    *(struct T12 *)(o + 68) = *(struct T12 *)0xC339F90;
    j = ((signed char *)own)[4] * 24;
    if (e[7] != 0)
        FUN_0c0c07bc(o + 56, own + 32, *(char **)(own + 28) + 32, *(int *)(own + 48), *(float *)(0xC33C05C + j + 4));
    else
        FUN_0c0c07bc(o + 56, own + 32, *(char **)(own + 28) + 32, *(int *)(own + 48), *(float *)(0xC33C05C + j));
}
