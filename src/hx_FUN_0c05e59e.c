/* Power-stone aura effect update: spins the ring model, flickers the sparkle model (4 frames of the model table
   0x0C664988 from kind 25, random spin, every other frame), moves three glow models along a 20-frame looped path
   (5 keys of 0x0C336470 (positions, 12 bytes) and 0x0C3364B8 (angles in degrees), interpolated over 4 frames; the
   three run 7 frames apart) and, every 5th frame, re-anchors the aura on its owner's chest (owner +0x1C: position, yaw,
   size +0x7298, crouching height 80 / 92) with FUN_0c0b7150, ending the effect (FUN_0c0abe44) when its life +0xF2
   runs out. */
void FUN_0c0624c4(char *model, void *table, int kind);
int FUN_0c0df920(void);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
void FUN_0c0b7150(float *pos, int yaw, int side);
void FUN_0c0abe44(char *e, int kind, int side);

typedef struct { float x, y, z; } VEC3;

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define MDL(e, n) (*(char **)((e) + (n)))

static void path(char *m, int t)
{
    int k;
    float f;
    float *key, *ang;

    k = t / 4;
    f = (float)(t % 4);
    key = (float *)((char *)0x0C336470 + (signed char)(k * 12));
    F(m, 4) = key[0] + f * ((key[3] - key[0]) / 4.0f);
    F(m, 8) = key[1] + f * ((key[4] - key[1]) / 4.0f);
    F(m, 12) = key[2] + f * ((key[5] - key[2]) / 4.0f);
    ang = (float *)0x0C3364B8 + k;
    I(m, 16) = (int)((ang[0] + f * ((ang[1] - ang[0]) / 4.0f)) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
}

void FUN_0c05e59e(char *e)
{
    VEC3 p;
    char *f;
    float k, a;

    f = *(char **)(e + 28);
    I(MDL(e, 0x2E4), 24) = I(MDL(e, 0x2E4), 24) + 10923;
    if (*(int *)0x0C7F307C & 1) {
        FUN_0c0624c4(MDL(e, 0x2F4) + 156, (void *)0x0C664988, B(e, 0xF0) + 25);
        H(e, 0xF0) = H(e, 0xF0) + 1;
        if (H(e, 0xF0) >= 4)
            H(e, 0xF0) = 0;
        MDL(e, 0x2F4)[0] = 1;
        I(MDL(e, 0x2F4), 24) = FUN_0c0df920() % 0x10000;
    } else {
        MDL(e, 0x2F4)[0] = 0;
    }
    H(e, 0xEC) = H(e, 0xEC) + 1;
    if (H(e, 0xEC) >= 20)
        H(e, 0xEC) = 0;
    path(MDL(e, 0x2E8), H(e, 0xEC));
    path(MDL(e, 0x2EC), (H(e, 0xEC) + 7) % 20);
    path(MDL(e, 0x2F0), (H(e, 0xEC) + 14) % 20);
    if (H(e, 0xEE) == 0) {
        k = F(f, 0x7298);
        p = *(VEC3 *)(f + 32);
        a = FUN_0c0df4d0(0x14000 - I(f, 48)) * 185.0f;
        a = a - FUN_0c0df4d0(0x10000 - I(f, 48)) * 13.0f;
        p.x = p.x + k * a;
        a = FUN_0c0dfa50(0x14000 - I(f, 48)) * 185.0f;
        a = a - FUN_0c0dfa50(0x10000 - I(f, 48)) * 13.0f;
        p.z = p.z + k * a;
        p.y = p.y + (B(f, 0x71BC) == 2 ? 92.0f : 80.0f) * k;
        FUN_0c0b7150(&p.x, I(f, 48), B(f, 3));
        H(e, 0xF2) = H(e, 0xF2) - 1;
        if (H(e, 0xF2) < 0) {
            H(e, 0xF2) = 0;
            FUN_0c0abe44(e, 4, B(e, 3));
            return;
        }
    }
    H(e, 0xEE) = H(e, 0xEE) + 1;
    if (H(e, 0xEE) >= 5)
        H(e, 0xEE) = 0;
}
