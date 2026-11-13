/* character 3 (Jack) (0c07282c-0c0742fc) */

struct timed_obj {
    char pad0[10];
    signed char state;      /* 10 */
    char pad11[49];
    float life;              /* 60 */
    char pad64[8];
    float field_72;              /* 72 */
    char pad76[0xF0 - 76];
    short timer;            /* 0xF0 */
};
char pl_landed(struct timed_obj *, float);
void pl_change_state(struct timed_obj *, int, int);
void pl_apply_velocity(struct timed_obj *);
void pl_apply_acceleration(struct timed_obj *);
char pl_step_motion(struct timed_obj *);
void pl_end_action_choose_state(struct timed_obj *);

void pl_jack_mode01_03_update(struct timed_obj *effect)
{
    if (!(effect->life > 0.0f) && pl_landed(effect, 0.0f) != 0) {
        pl_change_state(effect, 6, 0);
        return;
    }
    pl_apply_velocity(effect);
    pl_apply_acceleration(effect);
    pl_step_motion(effect);
    switch (effect->state) {
    case 0:
        effect->timer = 30;
        effect->state = 1;
        /* fall through */
    case 1:
        effect->timer = effect->timer - 1;
        if (effect->timer == 0) {
            effect->field_72 = -0.5f;
            effect->timer = 30;
            effect->state = 2;
        }
        break;
    case 3:
        pl_end_action_choose_state(effect);
        break;
    }
}
