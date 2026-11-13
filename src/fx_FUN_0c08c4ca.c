/* Starts an effect on an actor and its owner: copies the position to the owner, looks up a spawn point in the stage table and flags both sides. */
int FUN_0c04bef2(float *, int, int, int);
int FUN_0c09a808(int, int, int);
int FUN_0c09a828(int, int, int);
int thunk_FUN_0c062242(int, float *);

struct V3 { float x, y, z; };
struct Obj {
    char p0[3];
    signed char stage;      /* 0x03 */
    char p4[6];
    signed char step;       /* 0x0A */
    char pb[0x1C - 0xB];
    char *owner;            /* 0x1C */
    struct V3 pos;          /* 0x20 */
    char p2c[4];
    int ang;                /* 0x30 */
};

void FUN_0c08c4ca(struct Obj *o)
{
    struct V3 spawn;
    unsigned char *tab;
    char *ow;

    FUN_0c09a808((int)o, 4, 2);
    ((char *)o)[0x71A9] = 1;
    ((char *)o)[0x71A8] = 1;
    *(struct V3 *)(o->owner + 0x20) = o->pos;
    *(unsigned *)(o->owner + 0x30) = (unsigned short)(o->ang + 0x8000);
    tab = (unsigned char *)(0xC7E40C4 + (unsigned short)((unsigned short)o->stage * 0x72D0));
    thunk_FUN_0c062242((int)(tab + 0x300 + (short)((short)(signed char)tab[0x71F1] * 0xDC0) + 0x840), (float *)&spawn);
    FUN_0c04bef2((float *)&spawn, (int)o + 0x2C, o->stage, 1);
    FUN_0c09a828((int)o->owner, 4, 0x37);
    ow = o->owner;
    ow[0x71A9] = 1;
    ow[0x71A8] = 1;
    o->owner[0x710B] = 1;
    o->owner[0x710C] = 1;
    o->owner[0xB] = 2;
    o->owner[0xC] = 0;
    *(short *)((char *)o + 0xEC) = 12;
    *(short *)((char *)o + 0xEE) = 35;
    o->step = o->step + 1;
}
