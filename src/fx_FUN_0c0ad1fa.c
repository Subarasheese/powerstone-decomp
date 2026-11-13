/* Resets an object to state 2: bumps counter byte 8, clears fields, copies two 12-byte structs from fixed tables, copies bytes 4 and 5 of the object's linked record (pointer at +776) to bytes 257/258, clears 261-263. */
typedef struct { int a, b, c; } S12;
typedef struct { char pad[4]; char b4; char b5; } P;
typedef struct {
    char pad0[3];
    char b3;
    char pad4[4];
    char cnt;
    char pad9[35];
    int f44;
    int pad48;
    int f52;
    S12 s56;
    S12 s68;
    char pad80[177];
    char b257;
    char b258;
    char pad259[2];
    char b261;
    char b262;
    char b263;
    char pad264[16];
    int w280;
    char pad284[445];
    char b729;
    char pad730[46];
    P *p776;
} Obj;
void FUN_0c0ad1fa(Obj *o)
{
    P *p;
    o->b3 = 2;
    o->cnt = o->cnt + 1;
    o->f44 = 0;
    o->f52 = 0;
    o->s56 = *(S12 *)0x0c339f90;
    o->s68 = *(S12 *)0x0c339fa8;
    o->w280 = 0;
    o->b729 = 0;
    p = o->p776;
    o->b257 = p->b4;
    o->b258 = p->b5;
    o->b261 = 0;
    o->b262 = 0;
    o->b263 = 0;
}
