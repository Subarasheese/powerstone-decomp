/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05ae26-0c05b6dc) */

int FUN_0c05b18c(int a4, int a5, int a6, int a7);
int item_tick_falling(int a4, int a5, int a6, int a7);
struct o274_float { char p[0x274]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_set_mode_owner(int, int, int);
int _quick_odd_mvn(int);
int item_free_init(int);
int item_free_update(int);
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int item_attach_to_hand(int);
int FUN_0c05b188(void);
struct vec3f { float x, y, z; };
extern float math_sin_angle16(int);
extern float math_cos_angle16(int);
extern int math_rand_next(void);
extern void snd_play_side_se(int, int);
extern void fx_spawn_01(struct vec3f *, int, int);
extern void fx_spawn_02(struct vec3f *, int, int);
extern void fx_spawn_05(struct vec3f *, int, int);


int item_tick_free(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return item_free_update(a4);
    }
    return item_free_init(a4);
}

int item_tick_held(int a4)
{
    register int t0;
    register int t4;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(signed char *)((t0 + 0x7236))) == 0) {
        return obj_set_mode_owner(a4, 0x4, (*(signed char *)((a4 + 0x3))));
    }
    t4 = *(signed char *)((a4 + 0x8));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c05b188();
        }
    } else {
        item_attach_to_hand(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}


void obj_launch_owner_projectile(unsigned char *obj)
{
    unsigned char *owner = *(unsigned char **)(obj + 28);
    struct vec3f point;
    float scale;
    float lift;
    unsigned char *sub;
    int sound;

    obj[8]++;
    *(short *)(obj + 236) = 0;
    *(short *)(obj + 242) = *(short *)(obj + 242) - 1;
    if (*(short *)(obj + 242) < 0)
        *(short *)(obj + 242) = 0;
    scale = *(float *)(owner + 0x7298);
    point = *(struct vec3f *)(owner + 32);
    lift = scale * 160.0f;
    switch ((signed char)obj[0x30C]) {
    case 0:
        point.x = point.x + 100.0f * (math_cos_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        point.y = point.y + lift;
        point.z = point.z + 100.0f * (math_sin_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        fx_spawn_02(&point, *(int *)(owner + 48), (signed char)owner[3]);
        sound = 27;
        break;
    case 2:
        point.x = point.x + 100.0f * (math_cos_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        point.y = point.y + lift;
        point.z = point.z + 100.0f * (math_sin_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        fx_spawn_01(&point, *(int *)(owner + 48), (signed char)owner[3]);
        sound = 26;
        break;
    case 14:
        sub = *(unsigned char **)(obj + 740);
        sub[0] = 1;
        *(int *)(*(unsigned char **)(obj + 740) + 24) = math_rand_next() % 0x10000;
        *(float *)(*(unsigned char **)(obj + 740) + 28) = 0;
        *(float *)(*(unsigned char **)(obj + 740) + 32) = 0;
        *(float *)(*(unsigned char **)(obj + 740) + 36) = 0;
        *(float *)(*(unsigned char **)(obj + 740) + 68) = 1;
        *(float *)(*(unsigned char **)(obj + 740) + 72) = 1;
        *(float *)(*(unsigned char **)(obj + 740) + 76) = 1;
        point.x = point.x + 100.0f * (math_cos_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        point.y = point.y + lift;
        point.z = point.z + 100.0f * (math_sin_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        fx_spawn_05(&point, *(int *)(owner + 48), (signed char)owner[3]);
        sound = 52;
        break;
    default:
        return;
    }
    snd_play_side_se((signed char)obj[3], sound);
}
