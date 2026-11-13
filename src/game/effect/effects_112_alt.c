/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c048074-0c0485f8) */

struct Vec3 { float x, y, z; };
struct SpriteRec {
    int frame_base;
    struct Vec3 pos;            /* 4 */
    float size;             /* 16 */
    float spin;             /* 20 */
    char pad24[16];
    int zero;               /* 40 */
    float alpha;            /* 44 */
    int pad48;
    int ten;                /* 52 */
};
extern void ui_sprite_queue_add(struct SpriteRec *, int, int, int, int, int);
struct Marker {
    char live;              /* 0 */
    signed char timer;      /* 1 */
    char pad2[2];
    struct Vec3 pos;            /* 4 */
    char pad16[12];
    float size;             /* 28 */
    float spin;             /* 32 */
    char pad36[4];
    float alpha;            /* 40 */
    char pad44[8];
    int kind;               /* 52 */
};

void fx_tick_popup_marker(char *obj, signed char *anim)
{
    struct Marker *marker = *(struct Marker **)(obj + 0x300);
    float step = 0.1666666567325592f;
    int zero = 0;
    struct SpriteRec sprite;

    switch (anim[2]) {
    case 0:
        marker->timer = marker->timer - 1;
        if (marker->timer == 0) {
            anim[2] = anim[2] + 1;
            marker->timer = 10;
            marker->live = 1;
            marker->pos.x = *(float *)(obj + 32);
            marker->pos.y = *(float *)(obj + 36) + 8.0f;
            marker->pos.z = 7.0999999f;
            marker->size = step;
            marker->alpha = 1.0f;
            marker->kind = 8;
            marker->spin = 0.5f;
        }
        break;
    case 1:
        marker->timer = marker->timer - 1;
        if (marker->timer == 0)
            anim[2] = anim[2] + 1;
        break;
    case 2:
        marker->spin = marker->spin + 0.0833333283662796f;
        marker->size = marker->size + step;
        if (!(1.0f > marker->size)) {
            marker->size = 1.0f;
            marker->spin = 1.0f;
            anim[2] = anim[2] + 1;
            marker->timer = 10;
        }
        break;
    case 3:
        marker->alpha = (float)marker->timer / 10.0f;
        marker->timer = marker->timer - 1;
        if (marker->timer == 0) {
            anim[1] = anim[1] - 1;
            anim[2] = anim[2] + 1;
            marker->live = zero;
        }
        break;
    }
    if (marker->live != 0) {
        sprite.frame_base = *(short *)0xC17FDB2 + 1;
        sprite.pos = marker->pos;
        sprite.size = marker->size;
        sprite.spin = marker->spin;
        sprite.zero = zero;
        sprite.alpha = marker->alpha;
        sprite.ten = 10;
        ui_sprite_queue_add(&sprite, 0xC17FDB0, 4, 4, obj[3], 0);
    }
}
