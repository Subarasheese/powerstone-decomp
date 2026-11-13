/* Sets up the n-th sub-object of a HUD element: binds its model (FUN_0c06233a with a type from the 16-byte table at 0xC152C2C plus the object's byte +4, or 35 for n >= 2), copies the 12-byte record at 0xC152C20 + 16n to +40, for n == 2 mirrors it by the flag, then places it on screen from the object's scale (float +40): position (+4, +8) and size (+28, +32, +36) divided by 640 / 480. */
struct V3 { float x, y, z; };
struct Sub {
    char b0;
    char pad0;
    short s2;
    float f4, f8;
    char pad1[20 - 12];
    int w20;
    char pad2[28 - 24];
    float f28, f32, f36;
    struct V3 rec;
};
struct Obj {
    char pad0[4];
    signed char b4;
    char pad1[40 - 5];
    float f40;
    char pad2[736 - 44];
    struct Sub *sub[8];
};
void FUN_0c06233a(struct Sub *s, int tbl, int type);
void FUN_0c0a9352(struct Obj *o, int n, int flag)
{
    int type;
    struct Sub *q;
    if (n >= 2)
        type = 35;
    else
        type = *(signed char *)(0xC152C2C + n * 16) + o->b4;
    FUN_0c06233a(o->sub[n], 0xC664A60, type);
    o->sub[n]->b0 = 1;
    o->sub[n]->s2 = 287;
    o->sub[n]->rec = *(struct V3 *)(0xC152C20 + n * 16);
    if (n == 2) {
        o->sub[n]->rec.x = o->sub[n]->rec.x * (float)(flag != 0 ? -1 : 1);
        o->sub[n]->w20 = flag != 0 ? 0x8000 : 0;
    }
    q = o->sub[n];
    q->f4 = -(o->f40 * q->rec.x * 1.0f) / 640.0f;
    q = o->sub[n];
    q->f8 = -(o->f40 * q->rec.y * 1.0f) / 480.0f;
    if (n == 0) {
        o->sub[n]->f28 = -(o->f40 * 0.899999976f) / 640.0f;
        o->sub[n]->f32 = -(o->f40 * 0.899999976f) / 480.0f;
    } else {
        o->sub[n]->f28 = -(o->f40 * 1.0f) / 640.0f;
        o->sub[n]->f32 = -(o->f40 * 1.0f) / 480.0f;
    }
    o->sub[n]->f36 = 1.0f;
}
