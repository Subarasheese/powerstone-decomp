/* character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks (0c068e10-0c0691c4) */

int fx_spawn_hit_effect(float *, int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int thunk_math_mat_get_translate(int, float *);
struct vec3_float { float x, y, z; };
struct actor {
    char pad_0[3];
    signed char player_index;      /* 0x03 */
    char pad_4[6];
    signed char step;       /* 0x0A */
    char pad_b[0x1C - 0xB];
    char *owner;            /* 0x1C */
    struct vec3_float pos;          /* 0x20 */
    char pad_2c[4];
    int yaw;                /* 0x30 */
};

void pl_falcon_special2_phase0(struct actor *obj)
{
    struct vec3_float spawn_pos;
    unsigned char *player_block;
    char *owner_ptr;

    pl_start_motion((int)obj, 4, 2);
    ((char *)obj)[0x71A9] = 1;
    ((char *)obj)[0x71A8] = 1;
    *(struct vec3_float *)(obj->owner + 0x20) = obj->pos;
    *(unsigned *)(obj->owner + 0x30) = (unsigned short)(obj->yaw + 0x8000);
    player_block = (unsigned char *)(0xC7E40C4 + (unsigned short)((unsigned short)obj->player_index * 0x72D0));
    thunk_math_mat_get_translate((int)(player_block + 0x300 + (short)((short)(signed char)player_block[0x71F1] * 0xDC0) + 0x840), (float *)&spawn_pos);
    fx_spawn_hit_effect((float *)&spawn_pos, (int)obj + 0x2C, obj->player_index, 1);
    pl_start_motion_owner((int)obj->owner, 4, 0x37);
    owner_ptr = obj->owner;
    owner_ptr[0x71A9] = 1;
    owner_ptr[0x71A8] = 1;
    obj->owner[0x710B] = 1;
    obj->owner[0x710C] = 1;
    obj->owner[0xB] = 2;
    obj->owner[0xC] = 0;
    *(short *)((char *)obj + 0xEC) = 12;
    *(short *)((char *)obj + 0xEE) = 35;
    obj->step = obj->step + 1;
}
