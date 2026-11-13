/* Launches a projectile from the owner (pointer at +28): advances the phase byte, clears the timers (+236, +242 floor), copies the owner's 12-byte position (+32) to a local, offsets it 100 units along the owner's facing (sine/cosine of 0x14000 - angle at +48, scaled by the float at +0x7298) and up by 160 * scale, then by the weapon byte at +0x30C (0, 2 or 14) hands the point to FUN_0c0b5f78 / FUN_0c0b5d60 / FUN_0c0b6dcc (14 also resets the sub-object at +740) and plays sound FUN_0c0a3796 (27 / 26 / 52). */
struct V { float x, y, z; };
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df4d0(int);
extern int FUN_0c0df920(void);
extern void FUN_0c0a3796(int, int);
extern void FUN_0c0b5d60(struct V *, int, int);
extern void FUN_0c0b5f78(struct V *, int, int);
extern void FUN_0c0b6dcc(struct V *, int, int);

void FUN_0c05b20a(unsigned char *o)
{
    unsigned char *P = *(unsigned char **)(o + 28);
    struct V v;
    float f15;
    float f13;
    unsigned char *Q;
    int sound;

    o[8]++;
    *(short *)(o + 236) = 0;
    *(short *)(o + 242) = *(short *)(o + 242) - 1;
    if (*(short *)(o + 242) < 0)
        *(short *)(o + 242) = 0;
    f15 = *(float *)(P + 0x7298);
    v = *(struct V *)(P + 32);
    f13 = f15 * 160.0f;
    switch ((signed char)o[0x30C]) {
    case 0:
        v.x = v.x + 100.0f * (FUN_0c0df4d0(0x14000 - *(int *)(P + 48)) * f15);
        v.y = v.y + f13;
        v.z = v.z + 100.0f * (FUN_0c0dfa50(0x14000 - *(int *)(P + 48)) * f15);
        FUN_0c0b5f78(&v, *(int *)(P + 48), (signed char)P[3]);
        sound = 27;
        break;
    case 2:
        v.x = v.x + 100.0f * (FUN_0c0df4d0(0x14000 - *(int *)(P + 48)) * f15);
        v.y = v.y + f13;
        v.z = v.z + 100.0f * (FUN_0c0dfa50(0x14000 - *(int *)(P + 48)) * f15);
        FUN_0c0b5d60(&v, *(int *)(P + 48), (signed char)P[3]);
        sound = 26;
        break;
    case 14:
        Q = *(unsigned char **)(o + 740);
        Q[0] = 1;
        *(int *)(*(unsigned char **)(o + 740) + 24) = FUN_0c0df920() % 0x10000;
        *(float *)(*(unsigned char **)(o + 740) + 28) = 0;
        *(float *)(*(unsigned char **)(o + 740) + 32) = 0;
        *(float *)(*(unsigned char **)(o + 740) + 36) = 0;
        *(float *)(*(unsigned char **)(o + 740) + 68) = 1;
        *(float *)(*(unsigned char **)(o + 740) + 72) = 1;
        *(float *)(*(unsigned char **)(o + 740) + 76) = 1;
        v.x = v.x + 100.0f * (FUN_0c0df4d0(0x14000 - *(int *)(P + 48)) * f15);
        v.y = v.y + f13;
        v.z = v.z + 100.0f * (FUN_0c0dfa50(0x14000 - *(int *)(P + 48)) * f15);
        FUN_0c0b6dcc(&v, *(int *)(P + 48), (signed char)P[3]);
        sound = 52;
        break;
    default:
        return;
    }
    FUN_0c0a3796((signed char)o[3], sound);
}
