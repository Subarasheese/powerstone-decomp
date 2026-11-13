/* Follower effect: state 0 initialises the child sprite, state 1 mirrors the owner's child position and grows a scale while the owner is in state 2. */
int FUN_0c059330(int);
int FUN_0c0623a6(int, int, int);

struct V3 { float x, y, z; };
struct Kid {
    char on;                /* 0x00 */
    char p1;
    unsigned short flags;   /* 0x02 */
    struct V3 pos;          /* 0x04 */
    int a;                  /* 0x10 */
    char p14[0x20 - 0x14];
    float scale;            /* 0x20 */
};
struct Obj {
    char p0[1];
    char c1;                /* 0x01 */
    char p2[3];
    char c5;                /* 0x05 */
    unsigned short flags;   /* 0x06 */
    signed char state;      /* 0x08 */
    char c9;                /* 0x09 */
    char pa[0x1C - 0xA];
    struct Obj *owner;      /* 0x1C */
    char p20[4];
    float f24;              /* 0x24 */
    char p28[4];
    int v2c;                /* 0x2C */
    char p30[0x2E0 - 0x30];
    struct Kid *kid;        /* 0x2E0 */
};

void FUN_0c0aa286(struct Obj *o)
{
    unsigned char *ctl;

    if (o->owner == 0) {
        FUN_0c059330((int)o);
        return;
    }
    switch (o->state) {
    case 0:
        o->state = o->state + 1;
        o->c9 = 0;
        o->c1 = 1;
        o->flags = 0x1F;
        o->c5 = 25;
        FUN_0c0623a6((int)o->kid, 0xC664A60, 0x22);
        o->kid->on = 1;
        o->kid->flags = 0x1F;
        o->kid->scale = 0.0f;
        o->f24 = 90.0f;
        o->v2c = 0x5B0;
        o->kid->a = 0;
        break;
    case 1:
        if (o->owner->state == 2) {
            o->kid->on = 1;
            o->kid->scale = o->kid->scale + 0.399999976f;
            if (o->kid->scale > 2.0f) {
                o->kid->scale = 2.0f;
            }
        } else {
            o->kid->on = 0;
            o->kid->scale = 0.0f;
        }
        o->kid->pos = o->owner->kid->pos;
        ctl = (unsigned char *)0xC7F2EE4;
        if (ctl[2] == 2 && ctl[3] == 3) {
            o->state = o->state + 1;
        }
        break;
    default:
        FUN_0c059330((int)o);
        break;
    }
}
