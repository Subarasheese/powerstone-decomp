/* Per-frame update of a pulsing effect object: waits for its owner, then breathes a scale value and spins two child objects. */
int FUN_0c026554(int);
int FUN_0c039828(int, int);
int FUN_0c03b1ec(int, int);
int FUN_0c0555dc(void);
int FUN_0c059330(int);
float FUN_0c0dfa50(int);
int FUN_0c0e21b0(int, int);

struct Kid { char p[0x10]; int a; int pad; int b; };
struct Own { char p[0x1C]; struct Own *inner; };
struct Obj {
    char p0[1];
    char b1;                /* 0x01 */
    char p2;
    char b3;                /* 0x03 */
    char b4;                /* 0x04 */
    char p5[3];
    signed char state;      /* 0x08 */
    char p9[0x1C - 9];
    char *owner;            /* 0x1C */
    float pos[3];           /* 0x20 */
    char p2c[0x38 - 0x2C];
    float d[3];             /* 0x38 */
    char p44[0xEC - 0x44];
    short age;              /* 0xEC */
    char pEE[0x105 - 0xEE];
    char f105;
    char p106[0x2E0 - 0x106];
    struct Kid *kid[2];     /* 0x2E0 */
};

void FUN_0c0c0a64(struct Obj *o)
{
    float w, s;
    char *sc;
    int i;

    if (FUN_0c0555dc() != 0) {
        FUN_0c059330((int)o);
        return;
    }
    if (o->state != 0) {
        o->b1 = o->age % 2;
        o->age = o->age + 1;
        if (o->age >= 20) {
            FUN_0c059330((int)o);
        }
        return;
    }
    if (((struct Own *)o->owner)->inner->p[4] != 10) {
        if (o->owner[0x10B] != 0) {
            return;
        }
        if (((struct Own *)o->owner)->inner->p[0x10B] != 0) {
            return;
        }
    }
    if ((signed char)FUN_0c026554((int)o) != 0) {
        o->state = o->state + 1;
        o->age = 0;
        FUN_0c03b1ec((int)o->pos, o->b3);
        o->f105 = 1;
        *(*(char **)((char *)o + 0x2E4)) = 0;
        return;
    }
    if (o->b4 == 0 && o->age % 5 == 0) {
        FUN_0c039828((int)o->pos, o->b3);
    }
    o->age = o->age + 1;
    w = FUN_0c0dfa50((int)((float)(o->age * 30) * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
    w = 0.5f + 0.5f * w;
    s = w * 0.5f;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x1C) = s + 1.0f;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x20) = s + 1.0f;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x24) = s + 1.0f;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x44) = 1.0f - s;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x48) = 1.0f - s;
    sc = *(char **)((char *)o + 0x2E4);
    *(float *)(sc + 0x4C) = 1.0f - s;
    FUN_0c0e21b0((int)o->pos, (int)o->d);
    for (i = 0; i < 2; i++) {
        o->kid[i]->a = o->kid[i]->a + 0x1555;
        o->kid[i]->b = o->kid[i]->b + 0x71C;
        if (o->kid[i]->b >= 0x8000) {
            o->kid[i]->b = 0x8000;
        }
    }
}
