/* Rouge state updates and specials (part 5 of 7 of the same module) (0c08352c-0c0835dc) */

struct V3 { int x, y, z; };
struct Own;
struct Obj {
    char pad_0[10];
    char counter;
    char pad_1[17];
    struct Own *owner;
    struct V3 vec;
    char pad_2[4];
    unsigned int field_30;
};
struct Own {
    char pad_0[11];
    char field_0b;
    char field_0c;
    char pad_1[19];
    struct V3 vec;
    char pad_2[4];
    unsigned int field_30;
};
void pl_start_motion(struct Obj *obj, int arg_a, int arg_b);
void pl_start_motion_owner(struct Own *obj, int arg_a, int arg_b);

void pl_rouge_special_id4(char *raw)
{
    struct Obj *obj = (struct Obj *)raw;
    obj->owner->vec = obj->vec;
    obj->owner->field_30 = (unsigned short)(obj->field_30 + 0x8000);
    pl_start_motion(obj, 4, 2);
    raw[0x71A9] = 1;
    raw[0x71A8] = 1;
    pl_start_motion_owner(obj->owner, 4, 55);
    ((char *)obj->owner)[0x71A9] = 1;
    ((char *)obj->owner)[0x71A8] = 1;
    ((char *)obj->owner)[0x710B] = 1;
    ((char *)obj->owner)[0x710C] = 1;
    *(short *)(raw + 0xEC) = 0;
    *(short *)(raw + 0xEE) = 85;
    obj->counter = obj->counter + 1;
    obj->owner->field_0b = 2;
    obj->owner->field_0c = 0;
}
