/* Step of an effect object: advances its counter (byte +8), calls FUN_0c0ace56, spawns an effect 50 units above its position (+32) with FUN_0c042eac, binds the model of FUN_0c06233a, then points +280 into a 3520-byte-per-slot table of the owner (+28) and resets its two vectors (+32, +44) from constants at 0xC339FE4 / 0xC339FF0. */
struct F3 { float x, y, z; };
struct Owner { char pad0[0x71F1]; signed char slot; };
struct Obj {
    char pad0[8];
    char cnt;
    char pad1[19];
    struct Owner *owner;
    struct F3 pos;
    struct F3 vel;
    char pad2[280 - 56];
    int ptr;
    char pad3[0x2E0 - 284];
    int model;
    char pad4[0x308 - 0x2E4];
    signed char *spec;
};
void FUN_0c0ace56(struct Obj *o);
void FUN_0c042eac(struct F3 *p, float a, float b, float c, float d);
void FUN_0c06233a(int model, int tbl, int idx);
void FUN_0c0ae2fc(struct Obj *o)
{
    struct F3 s;
    struct Owner *own = o->owner;
    o->cnt = o->cnt + 1;
    FUN_0c0ace56(o);
    s = o->pos;
    s.y = s.y + 50.0f;
    FUN_0c042eac(&s, 1.0f, 1.0f, 1.0f, 2.0f);
    FUN_0c06233a(o->model, 0xC664958, o->spec[1]);
    o->ptr = (int)own + 768 + (short)(own->slot * 3520) + 1408;
    o->pos = *(struct F3 *)0xC339FE4;
    o->vel = *(struct F3 *)0xC339FF0;
}
