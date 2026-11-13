/* Lays out the two sub-objects (+736, +740) of a HUD element from its scale (float +40): sub 0 gets its model from the table at 0xC1525B4 (type 71 for mode 10, else table[o[4]] + 15), a facing word (+20, 0x8000 when o[3] is 0, else 0) and a position / size on the 640x480 screen; sub 1 the model 3 (when the byte at 0xC7F2F08 is set and mode is 0) or table[o[4]] + 25 (70 for mode 10) and its own offsets; both get flag byte 1, short 287 and scale 1.0. */
struct Sub {
    char b0;
    char pad0;
    short s2;
    float f4, f8;
    char pad1[20 - 12];
    int w20;
    char pad2[28 - 24];
    float f28, f32, f36;
};
struct Obj {
    char pad0[3];
    char b3;
    signed char mode;
    char pad1[40 - 5];
    float f40;
    char pad2[736 - 44];
    struct Sub *sub[2];
};
void FUN_0c06233a(struct Sub *s, int tbl, int n);
void FUN_0c0aaa38(struct Obj *o)
{
    signed char *tbl = (signed char *)0xC1525B4;
    int i;
    int type;
    struct Sub *s;
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            if (o->mode == 10)
                type = 71;
            else
                type = tbl[o->mode] + 15;
            FUN_0c06233a(o->sub[i], 0xC664A78, type);
            o->sub[i]->w20 = o->b3 == 0 ? 0x8000 : 0;
            o->sub[i]->f4 = (float)(o->b3 == 0 ? 50 : -50);
            o->sub[i]->f8 = 50.0f;
            s = o->sub[i];
            s->f4 = -(o->f40 * s->f4 * 1.0f) / 640.0f;
            s = o->sub[i];
            s->f8 = -(o->f40 * s->f8 * 1.0f) / 480.0f;
            o->sub[i]->f28 = -(o->f40 * 0.849999964f) / 640.0f;
            o->sub[i]->f32 = -(o->f40 * 0.699999988f) / 480.0f;
        } else {
            if (*(char *)0xC7F2F08 != 0 && o->mode == 0) {
                FUN_0c06233a(o->sub[i], 0xC664A78, 3);
            } else {
                if (o->mode == 10)
                    type = 70;
                else
                    type = tbl[o->mode] + 25;
                FUN_0c06233a(o->sub[i], 0xC664A78, type);
            }
            o->sub[i]->f4 = (float)(o->b3 == 0 ? 50 : -50);
            o->sub[i]->f8 = -80.0f;
            s = o->sub[i];
            s->f4 = -(o->f40 * s->f4 * 1.0f) / 640.0f;
            s = o->sub[i];
            s->f8 = -(o->f40 * s->f8 * 1.0f) / 480.0f;
            o->sub[i]->f28 = -(o->f40 * 1.0f) / 640.0f;
            o->sub[i]->f32 = -(o->f40 * 1.0f) / 480.0f;
        }
        o->sub[i]->b0 = 1;
        o->sub[i]->s2 = 287;
        o->sub[i]->f36 = 1.0f;
    }
}
