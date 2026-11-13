/* camera mode 19 handler (0c0dc9d4-0c0dca60) */

struct Obj { char pad[3]; signed char kind; };
void cam_compute_follow(struct Obj *obj, int rec);
void cam_step_keyframe_script(struct Obj *obj, int v);
void FUN_0c0d91d6(struct Obj *obj);

void cam_mode_19(struct Obj *obj)
{
    signed char kind_val = obj->kind;
    if ((unsigned int)kind_val < 18u) {
        cam_compute_follow(obj, 0xC343D54 + (short)(obj->kind * 52));
    } else {
        cam_step_keyframe_script(obj, *(int *)(0xC344DFC + ((obj->kind - 32) << 2)));
    }
    FUN_0c0d91d6(obj);
}
