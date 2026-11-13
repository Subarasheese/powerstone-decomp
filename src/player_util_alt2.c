/* player helper functions: lists, item class, combo, linked object placement (0c09c974-0c09d544) */

struct entry {
    char pad0[2];
    signed char kind;       /* 2 */
    char pad3[0x2d9 - 3];
    signed char flag;       /* 0x2d9 */
};
struct actor {
    char pad0[48];
    int ang;                /* 48 */
    char pad52[0x280 - 52];
    int vals[5];               /* 0x280 */
    struct entry *ents[5];       /* 0x294 */
    signed char count;      /* 0x2a8 */
    signed char bytes_a[8];       /* 0x2a9 */
    char pad2b1[7];
    signed char bytes_b[8];      /* 0x2b8 */
    int words[4];               /* 0x2c0 */
    char pad2d0[8];
    signed char count2;     /* 0x2d8 */
};
void hit_build_part_shape(struct actor *, void *);
signed char hit_dispatch_shape_pair(int, int, void *, int);
signed char FUN_0c026076(int, int, void *, int, struct entry *);

int FUN_0c09cee4(struct actor *actor_obj)
{
    int vec[6];
    int i;
    signed char quadrant;

    hit_build_part_shape(actor_obj, vec);
    quadrant = (unsigned short)(actor_obj->ang + 0xA000) / 0x4000 + 4;
    for (i = 0; i < actor_obj->count2; i++) {
        if (hit_dispatch_shape_pair(1, actor_obj->bytes_b[i], vec, actor_obj->words[i]) == quadrant)
            return 1;
    }
    for (i = 0; i < actor_obj->count; i++) {
        struct entry *ent = actor_obj->ents[i];
        if (ent->kind == 2 && ent->flag != 2) {
            if (FUN_0c026076(1, actor_obj->bytes_a[i], vec, actor_obj->vals[i], actor_obj->ents[i]) == quadrant)
                return 1;
        }
    }
    return 0;
}
