/* Per-frame update of a homing/flying object: steps toward a target position taken from a table, then ages and retires it. */
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0a1d88(int, int);
int FUN_0c0c10f0(int);
int FUN_0c0df400(float, float);
int FUN_0c0e21b0(int, int);
int FUN_0c0e24f0(int);
int thunk_FUN_0c062242(int, int);
extern float _builtin_sqrtf(float);

struct Obj {
    char p0[8];
    signed char state;      /* 0x08 */
    char p9[0x1C - 9];
    char *owner;            /* 0x1C */
    float pos[3];           /* 0x20 */
    int ang0;               /* 0x2C */
    int ang1;               /* 0x30 */
    char p34[4];
    float d[3];             /* 0x38 */
    char p44[0xEC - 0x44];
    short age;              /* 0xEC */
    short step;             /* 0xEE */
    char pF0[0x2E0 - 0xF0];
    int *link;              /* 0x2E0 */
};

void FUN_0c0c1186(struct Obj *o)
{
    float tgt[3];
    unsigned char *tab;
    int k;

    if (FUN_0c0555dc() != 0 || o->state != 0) {
        FUN_0c059330((int)o);
        return;
    }
    if ((signed char)FUN_0c0c10f0((int)o) != 0) {
        if (o->owner[9] == 3) {
            o->state = o->state + 1;
            return;
        }
        o->step = o->step + 1;
        if (o->step > 3) {
            o->state = o->state + 1;
            return;
        }
        k = ((struct Obj *)*(char **)(o->owner + 0x1C))->p0[3];
        tab = (unsigned char *)(0xC7E40C4 + (unsigned short)((unsigned short)k * 0x72D0));
        thunk_FUN_0c062242((int)(tab + 0x300 + (short)((short)(signed char)tab[0x71F1] * (short)0xDC0)), (int)tgt);
        o->d[0] = tgt[0] - o->pos[0];
        o->d[1] = tgt[1] - o->pos[1];
        o->d[2] = tgt[2] - o->pos[2];
        FUN_0c0e24f0((int)o->d);
        if (o->d[2] == 0.0f) {
            o->d[2] = 9.99999975e-06f;
        }
        o->ang0 = FUN_0c0df400(-o->d[1], _builtin_sqrtf(o->d[2] * o->d[2] + o->d[0] * o->d[0]));
        o->ang1 = FUN_0c0df400(o->d[0], o->d[2]);
        o->d[0] = o->d[0] * 40.0f;
        o->d[1] = o->d[1] * 40.0f;
        o->d[2] = o->d[2] * 40.0f;
    }
    if (*(volatile unsigned *)0xC7F307C % 30 == 0) {
        FUN_0c0a1d88((int)o, 0x72);
    }
    o->age = o->age + 1;
    if (o->age >= 180) {
        o->state = o->state + 1;
    }
    FUN_0c0e21b0((int)o->pos, (int)o->d);
    o->link[4] = o->link[4] + 0x1555;
}
