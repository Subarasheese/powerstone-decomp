/* Ages the ten sprites listed at +0x2E0 of an object: advances the float at +4 by 0.5, takes 1 or 2 off the float at +8 (alternating by index), retires the sprite (FUN_0c0b5420, flag 0x400 cleared, float +64 = 1.0) when it drops below zero and, below 50.0, sets flag 0x400 and the fade float at +64 = age / 50. */
typedef struct { char pad[2]; unsigned short flags; float f4; float f8; char pad1[52]; float f64; } Sprite;
extern void FUN_0c0b5420(char *);

void FUN_0c0b5568(char *o)
{
    int i;
    Sprite *e;

    for (i = 0; i < 10; i++) {
        e = *(Sprite **)(o + 0x2E0 + i * 4);
        e->f4 += 0.5f;
        e->f8 = e->f8 - ((float)(i % 2) + 1.0f);
        if (e->f8 < 0.0f) {
            FUN_0c0b5420((char *)e + 4);
            e->flags &= 0xFBFF;
            e->f64 = 1.0f;
        }
        if (e->f8 < 50.0f) {
            e->flags |= 0x400;
            e->f64 = e->f8 / 50.0f;
        }
    }
}
