/* Effect ring update: on the first frame (+8 == 0) it places its parts (the list at +0x2E0, count +0x2DC): in spread mode
   (+4 == 0) every part starts at the 0x0C148DD0 vector with a velocity on a circle (960 and 832 over the duration +0xEE,
   angle (+0xF2 + 2i) * 5 degrees) and a spin; in single mode the first part starts at 0x0C148DDC, scale 1 and a 10-frame
   slide. Every frame the parts move (FUN_0c062050) and grow by 2 / duration, or the single part slides 1/10 of the
   way to its end; on odd frames the texture frame (+0xF0, 0..7, from 0x0C148DF4) is applied to all parts; the last part
   touched gets its shadow scale at +0x98, and when the counter +0xEC runs out the effect ends (FUN_0c059330). */
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);
void FUN_0c062050(float *a, float *b, float *c);
void FUN_0c059330(char *o, int **anim);   /* the original passes r5 = the texture-animation table when it just used it */

typedef struct { float x, y, z; } VEC3;

#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define PART(o, i) (((char **)((o) + 0x2E0))[i])
#define END ((float *)0x0C148DDC)

void FUN_0c029268(char *o)
{
    char *e;
    int i;
    float a;
    int **anim = 0;

    if (B(o, 8) == 0) {
        B(o, 8) = B(o, 8) + 1;
        H(o, 0xF0) = 0;
        if (B(o, 4) == 0) {
            for (i = 0; i < B(o, 0x2DC); i++) {
                e = PART(o, i);
                *(VEC3 *)(e + 4) = *(VEC3 *)0x0C148DD0;
                a = 960.0f / (float)H(o, 0xEE);
                F(e, 0x28) = a * FUN_0c0dfa50((int)((float)((H(o, 0xF2) + i * 2) * 5) * 65536.0f / 360.0f));
                a = 832.0f / (float)H(o, 0xEE);
                F(e, 0x2C) = a * FUN_0c0df4d0((int)((float)((H(o, 0xF2) + i * 2) * 5) * 65536.0f / 360.0f));
                F(e, 0x30) = 0.0f;
                F(e, 0x20) = 1.0f;
                F(e, 0x1C) = 1.0f;
                *(int *)(e + 0x18) = -(int)((float)((H(o, 0xF2) + 1) * i * 5) * 65536.0f / 360.0f);
            }
        } else {
            e = PART(o, 0);
            *(VEC3 *)(e + 4) = *(VEC3 *)END;
            F(e, 0x24) = 1.0f;
            F(e, 0x20) = 1.0f;
            F(e, 0x1C) = 1.0f;
            H(o, 0xF2) = 10;
        }
    }
    if (B(o, 4) == 0) {
        for (i = 0; i < B(o, 0x2DC); i++) {
            e = PART(o, i);
            FUN_0c062050((float *)(e + 4), (float *)(e + 4), (float *)(e + 40));
            F(e, 0x20) = F(e, 0x20) + 2.0f / (float)H(o, 0xEE);
            F(e, 0x1C) = F(e, 0x20);
        }
    } else if (H(o, 0xF2) != 0) {
        F(PART(o, 0), 4) = F(PART(o, 0), 4) + (END[3] - END[0]) / 10.0f;
        H(o, 0xF2) = H(o, 0xF2) - 1;
        if (H(o, 0xF2) == 0)
            F(PART(o, 0), 4) = END[3];
    }
    if (H(o, 0xEC) & 1) {
        H(o, 0xF0) = H(o, 0xF0) + 1;
        H(o, 0xF0) = H(o, 0xF0) & 7;
        anim = (int **)0x0C6649E8;
        for (i = 0; i < B(o, 0x2DC); i++) {
            e = PART(o, i);
            *(int *)(e + 0x9C) = anim[2][((int *)0x0C148DF4)[H(o, 0xF0)]];
        }
    }
    F(e, 0x98) = F(e, 0x1C);
    if (1.0f > F(e, 0x98))
        F(e, 0x98) = 1.0f;
    if (F(e, 0x20) > F(e, 0x98))
        F(e, 0x98) = F(e, 0x20);
    H(o, 0xEC) = H(o, 0xEC) - 1;
    if (H(o, 0xEC) <= 0)
        FUN_0c059330(o, anim);
}
