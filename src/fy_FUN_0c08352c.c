/* Starts a state change on an object and its owner (object at +28): copies the 12-byte vector at +32 to the owner, advances the owner's word at +48 by 0x8000 (16 bits), fires FUN_0c09a808 / FUN_0c09a828 and sets the flag bytes on both, resets the shorts at +0xEC/+0xEE (0 and 85), bumps byte +10 and sets bytes +11/+12 of the owner. */
struct V3 { int a, b, c; };
struct Own;
struct Obj {
    char pad0[10];
    char cnt;
    char pad1[17];
    struct Own *owner;
    struct V3 v;
    char pad2[4];
    unsigned int w48;
};
struct Own {
    char pad0[11];
    char b11;
    char b12;
    char pad1[19];
    struct V3 v;
    char pad2[4];
    unsigned int w48;
};
void FUN_0c09a808(struct Obj *o, int a, int b);
void FUN_0c09a828(struct Own *o, int a, int b);
void FUN_0c08352c(char *p)
{
    struct Obj *o = (struct Obj *)p;
    o->owner->v = o->v;
    o->owner->w48 = (unsigned short)(o->w48 + 0x8000);
    FUN_0c09a808(o, 4, 2);
    p[0x71A9] = 1;
    p[0x71A8] = 1;
    FUN_0c09a828(o->owner, 4, 55);
    ((char *)o->owner)[0x71A9] = 1;
    ((char *)o->owner)[0x71A8] = 1;
    ((char *)o->owner)[0x710B] = 1;
    ((char *)o->owner)[0x710C] = 1;
    *(short *)(p + 0xEC) = 0;
    *(short *)(p + 0xEE) = 85;
    o->cnt = o->cnt + 1;
    o->owner->b11 = 2;
    o->owner->b12 = 0;
}
