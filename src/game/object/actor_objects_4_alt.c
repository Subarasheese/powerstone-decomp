/* secondary actor objects (arena clamp, angle helpers, owner transforms) (part 4 of 6 of the same module) (0c08c074-0c08c5c0) */

int fx_spawn_hit_effect(float *, int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int thunk_FUN_0c062242(int, float *);
struct Vec3 { float x, y, z; };
struct ActorObj {
    char pad_00[3];
    signed char stage;      /* 0x03 */
    char pad_04[6];
    signed char step;       /* 0x0A */
    char pad_0b[0x1C - 0xB];
    char *owner;            /* 0x1C */
    struct Vec3 pos;          /* 0x20 */
    char pad_2c[4];
    int yaw;                /* 0x30 */
};

void FUN_0c08c4ca(struct ActorObj *actor)
{
    struct Vec3 spawn;
    unsigned char *pl;
    char *owner_obj;

    pl_start_motion((int)actor, 4, 2);
    ((char *)actor)[0x71A9] = 1;
    ((char *)actor)[0x71A8] = 1;
    *(struct Vec3 *)(actor->owner + 0x20) = actor->pos;
    *(unsigned *)(actor->owner + 0x30) = (unsigned short)(actor->yaw + 0x8000);
    pl = (unsigned char *)(0xC7E40C4 + (unsigned short)((unsigned short)actor->stage * 0x72D0));
    thunk_FUN_0c062242((int)(pl + 0x300 + (short)((short)(signed char)pl[0x71F1] * 0xDC0) + 0x840), (float *)&spawn);
    fx_spawn_hit_effect((float *)&spawn, (int)actor + 0x2C, actor->stage, 1);
    pl_start_motion_owner((int)actor->owner, 4, 0x37);
    owner_obj = actor->owner;
    owner_obj[0x71A9] = 1;
    owner_obj[0x71A8] = 1;
    actor->owner[0x710B] = 1;
    actor->owner[0x710C] = 1;
    actor->owner[0xB] = 2;
    actor->owner[0xC] = 0;
    *(short *)((char *)actor + 0xEC) = 12;
    *(short *)((char *)actor + 0xEE) = 35;
    actor->step = actor->step + 1;
}
