/* Animates the pop-up marker child of an object (child pointer at 0x300) through the phases held in the step byte p[2]: 0 spawn at the object's position, 1 wait, 2 grow to full size, 3 fade out and finish, then draws it as a sprite record through FUN_0c027fa4 while it is live. */
struct V3 { float x, y, z; };
struct Rec {
    int w0;
    struct V3 v;            /* 4 */
    float size;             /* 16 */
    float spin;             /* 20 */
    char p24[16];
    int zero;               /* 40 */
    float alpha;            /* 44 */
    int p48;
    int ten;                /* 52 */
};
extern void FUN_0c027fa4(struct Rec *, int, int, int, int, int);
struct Child {
    char live;              /* 0 */
    signed char timer;      /* 1 */
    char p2[2];
    struct V3 v;            /* 4 */
    char p16[12];
    float size;             /* 28 */
    float spin;             /* 32 */
    char p36[4];
    float alpha;            /* 40 */
    char p44[8];
    int kind;               /* 52 */
};
void FUN_0c048480(char *o, signed char *p)
{
    struct Child *c = *(struct Child **)(o + 0x300);
    float step = 0.1666666567325592f;
    int zero = 0;
    struct Rec rec;

    switch (p[2]) {
    case 0:
        c->timer = c->timer - 1;
        if (c->timer == 0) {
            p[2] = p[2] + 1;
            c->timer = 10;
            c->live = 1;
            c->v.x = *(float *)(o + 32);
            c->v.y = *(float *)(o + 36) + 8.0f;
            c->v.z = 7.0999999f;
            c->size = step;
            c->alpha = 1.0f;
            c->kind = 8;
            c->spin = 0.5f;
        }
        break;
    case 1:
        c->timer = c->timer - 1;
        if (c->timer == 0)
            p[2] = p[2] + 1;
        break;
    case 2:
        c->spin = c->spin + 0.0833333283662796f;
        c->size = c->size + step;
        if (!(1.0f > c->size)) {
            c->size = 1.0f;
            c->spin = 1.0f;
            p[2] = p[2] + 1;
            c->timer = 10;
        }
        break;
    case 3:
        c->alpha = (float)c->timer / 10.0f;
        c->timer = c->timer - 1;
        if (c->timer == 0) {
            p[1] = p[1] - 1;
            p[2] = p[2] + 1;
            c->live = zero;
        }
        break;
    }
    if (c->live != 0) {
        rec.w0 = *(short *)0xC17FDB2 + 1;
        rec.v = c->v;
        rec.size = c->size;
        rec.spin = c->spin;
        rec.zero = zero;
        rec.alpha = c->alpha;
        rec.ten = 10;
        FUN_0c027fa4(&rec, 0xC17FDB0, 4, 4, o[3], 0);
    }
}
