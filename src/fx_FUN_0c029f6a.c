/* Jitter effect: on the last tick of its timer it resets each child's velocity from its base, otherwise advances it; adds random sparkle to the children and flickers its scale. */
int FUN_0c059330(int);
float FUN_0c0df940(void);

struct Kid {
    char p0[4];
    float v1;               /* 0x04 */
    float v2;               /* 0x08 */
    char pc[0x18 - 0xC];
    int cur;                /* 0x18 */
    char p1c[0x38 - 0x1C];
    int base;               /* 0x38 */
    int step;               /* 0x3C */
};
struct Obj {
    char p0[6];
    short flags;            /* 0x06 */
    signed char state;      /* 0x08 */
    char p9[0x60 - 9];
    float scale[3];         /* 0x60 */
    char p6c[0xEC - 0x6C];
    short age;              /* 0xEC */
    short timer;            /* 0xEE */
    char pF0[0x2DC - 0xF0];
    signed char nkids;      /* 0x2DC */
    char p2dd[3];
    struct Kid *kid[1];     /* 0x2E0 */
};

void FUN_0c029f6a(struct Obj *o)
{
    int i;
    struct Kid *k;
    float f;

    if (o->state == 0) {
        o->flags = o->flags | 0x200;
        o->state = o->state + 1;
    }
    if (o->timer > 0) {
        o->timer = o->timer - 1;
        if (o->timer == 0) {
            for (i = 0; i < o->nkids; i++) {
                k = o->kid[i];
                k->cur = k->base;
                k->v2 = (float)(o->age % 3 - 1) * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 3);
                k->v1 = (float)(o->age % 3 - 1) * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 2);
            }
        } else {
            for (i = 0; i < o->nkids; i++) {
                k = o->kid[i];
                k->cur = k->cur + k->step;
                k->v2 = (float)(o->age % 3 - 1) * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 3);
                k->v1 = (float)(o->age % 3 - 1) * (float)((unsigned)(FUN_0c0df940() * 255.0f) % 2);
            }
        }
    }
    f = ((unsigned)(FUN_0c0df940() * 255.0f) % 8 == 0) ? *(float *)0xC02A1EC : 1.0f;
    o->scale[2] = f;
    o->scale[1] = f;
    o->scale[0] = f;
    o->age = o->age - 1;
    if (o->age <= 0) {
        FUN_0c059330((int)o);
    }
}
