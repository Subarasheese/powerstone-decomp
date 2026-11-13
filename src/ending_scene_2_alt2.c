/* ending scene state, groups of ending sprites, staff roll controller (same ending mode) (0c01628c-0c017240) */

typedef struct { char pad[2]; unsigned short flags; char pad1[24]; float field_28; float field_32; } child_t;
typedef struct { char pad; char pad0[3]; char arg; char pad1[11]; void (*fn)(void); char pad2[0x2DC - 20]; char count; char pad3[3]; child_t *child[8]; } slot_t;
extern slot_t *obj_create(int, int, int, int);
extern void ending_obj_init_basic(slot_t *);
extern void ending_obj_set_sprite(child_t *, int);
extern void FUN_0c016ac2(void);

void FUN_0c016b3e(int arg_byte)
{
    slot_t *slot;
    child_t *kid;
    int i;

    slot = obj_create(5, 1, 1, 0);
    if (slot != 0) {
        ending_obj_init_basic(slot);
        slot->fn = FUN_0c016ac2;
        slot->arg = arg_byte;
        for (i = 0; i < slot->count; i++) {
            kid = slot->child[i];
            ending_obj_set_sprite(kid, 18);
            kid->flags |= 0x200;
            kid->field_32 = 2.0f;
            kid->field_28 = 2.0f;
        }
    }
}
