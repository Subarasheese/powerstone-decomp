/* Per-frame step of a swirling effect (arg) following its owner at +28: copies the owner's position, scales by its size, and in state 0 rotates the heading vectors into the position; state 2 runs the finisher. */
struct T12 { int a, b, c; };
extern int FUN_0c0555dc(void);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c059330(char *o);
void FUN_0c0cbf1c(char *o)
{
    char *own;
    float c, s, c2, s2, f;
    if (FUN_0c0555dc() != 0)
        o[8] = 1;
    if ((*(char **)(o + 28))[14] != 0)
        o[8] = 1;
    *(struct T12 *)(o + 32) = *(struct T12 *)(*(char **)(o + 28) + 32);
    *(struct T12 *)(o + 44) = *(struct T12 *)(*(char **)(o + 28) + 44);
    f = *(float *)(o + 68) * *(float *)(*(char **)(o + 28) + 80);
    *(float *)(o + 88) = f;
    *(float *)(o + 84) = f;
    *(float *)(o + 80) = f;
    switch (o[8]) {
    case 0:
        if ((*(char **)(o + 28))[8] >= 2)
            o[8] = 1;
        c = FUN_0c0dfa50(*(int *)(o + 48));
        s = FUN_0c0df4d0(*(int *)(o + 48));
        *(float *)(o + 32) += *(float *)(o + 80) * (*(float *)(o + 64) * c + s * *(float *)(o + 56));
        s2 = FUN_0c0df4d0(*(int *)(o + 48));
        s2 = s2 * *(float *)(o + 64);
        c2 = FUN_0c0dfa50(*(int *)(o + 48));
        *(float *)(o + 40) += *(float *)(o + 80) * (s2 - c2 * *(float *)(o + 56));
        *(float *)(o + 36) += *(float *)(o + 80) * *(float *)(o + 60);
        return;
    case 1:
        o[8]++;
        /* fall through */
    case 2:
        (*(char **)(o + 28))[15]--;
        FUN_0c059330(o);
        return;
    default:
        return;
    }
}
