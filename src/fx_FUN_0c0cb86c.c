/* Per-frame step of a spawned effect (arg) following its owner at +28: copies the owner's position, offsets it by 100 along the heading and 80 up, and advances the state byte at +8 to the shared finisher FUN_0c059330. */
struct T12 { int a, b, c; };
extern int FUN_0c0555dc(void);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c059330(char *o);
extern void FUN_0c0cb5d6(void);
void FUN_0c0cb86c(char *o)
{
    char *own;
    float a, b, c;
    if (FUN_0c0555dc() != 0)
        o[8] = 2;
    own = *(char **)(o + 28);
    if (*(void **)(own + 16) != (void *)FUN_0c0cb5d6)
        o[8] = 2;
    switch (o[8]) {
    case 0:
        *(struct T12 *)(o + 44) = *(struct T12 *)(own + 44);
        *(struct T12 *)(o + 32) = *(struct T12 *)(own + 32);
        a = FUN_0c0df4d0(*(int *)(o + 48)) * 100.0f;
        b = FUN_0c0dfa50(*(int *)(o + 48)) * 0.0f;
        *(float *)(o + 40) += (a - b);
        c = FUN_0c0dfa50(*(int *)(o + 48));
        a = FUN_0c0df4d0(*(int *)(o + 48)) * 0.0f;
        *(float *)(o + 32) += (100.0f * c + a);
        *(float *)(o + 36) += 80.0f;
        if (own[8] >= 2)
            o[8]++;
        return;
    case 1:
        o[8]++;
        /* fall through */
    case 2:
        FUN_0c059330(o);
        return;
    default:
        return;
    }
}
