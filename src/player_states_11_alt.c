/* state update functions of the player state machine (table 0xC3390D4) (part 11 of 14 of the same module) (0c096484-0c0975c8) */

struct anim_obj {
    char pad_00[10];
    char field_0a;
    char pad_0b[37];
    int angle;
    char pad_34[184];
    short timer;
};
extern signed char pl_step_motion(struct anim_obj *);
extern int pl_start_motion(struct anim_obj *, int, int);
extern int pl_angle_to_opponent(struct anim_obj *);
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int pl_try_start_basic_attack(int, int, int);
extern int pl_change_state();
typedef struct { int words[6]; } rec24;
extern int hit_find_wall_entry_by_kind(char *obj, int type);

void pl_state34_phase1(struct anim_obj *obj)
{
    short diff;
    short count;

    if (pl_step_motion(obj)) {
        pl_start_motion(obj, 2, 0xD4);
        obj->field_0a = 0;
        return;
    }
    if (obj->timer != 0) {
        diff = pl_angle_to_opponent(obj) - obj->angle;
        count = obj->timer--;
        obj->angle = (unsigned short)(obj->angle + diff / count);
    }
}

int pl_state38_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct oEC_short *)(a4))->v);
    (((struct oEC_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        return ((int (*)(int, int, int, int))(pl_change_state))(a4, 0x5, 0x3, a7);
    }
    t0 = pl_try_start_basic_attack(a4, a5, a6);
    if ((signed char)t0 != 0) {
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)((*(int *)((a4 + 0x30))) + 0x8000);
        return ((int (*)(int, int, int))(pl_change_state))(a4, 0xA, 0x1);
    }
    return (signed char)t0;
}

int FUN_0c0972b2(char *obj)
{
    rec24 rec;
    signed char slot_idx = hit_find_wall_entry_by_kind(obj, 10);
    rec = **(rec24 **)(obj + 0x2C0 + (slot_idx - 1) * 4);
    return !(*(float *)((char *)&rec + 12) > *(float *)((char *)&rec + 20));
}
