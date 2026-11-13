/* Resets an object's state: bumps counter byte 8, clears fields, copies two 12-byte structs from fixed tables, sets flag bytes 261/263. */
typedef struct { int a, b, c; } S12;
typedef struct {
    char pad0[8];
    char cnt;
    char pad1[35];
    int f44;
    int pad2;
    int f52;
    S12 s56;
    S12 s68;
    char pad3[158];
    short h238;
    char pad4[21];
    char b261;
    char b262;
    char b263;
} Obj;
void FUN_0c05d970(Obj *o)
{
    o->cnt = o->cnt + 1;
    o->h238 = 0;
    o->f44 = 0;
    o->f52 = 0;
    o->s56 = *(S12 *)0x0c3363e0;
    o->s68 = *(S12 *)0x0c3363f8;
    o->b261 = 1;
    o->b263 = 0;
}
