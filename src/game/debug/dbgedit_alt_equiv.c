/* debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader (0c0cfe04-0c0d24ec) */

extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int FUN_0c0e1550(int);
extern void nlUnitMatrix(void);
extern void nlLookAt(float *, float *, int);
struct sub_obj { char active; char pad; short model_id; };
struct task {
    char live;
    char field_01;
    char pad_00;
    char slot;
    char pad_01;
    char field_05;
    short field_06;
    char field_08, field_09;
    char pad_02[16 - 10];
    void (*handler)(void);
    char pad_03[32 - 20];
    float vel_x, vel_y, vel_z;
    int field_44, field_48, field_52;
    char pad_04[80 - 56];
    float scale_x, scale_y, scale_z;
    char pad_05[736 - 92];
    struct sub_obj *sub;
};
struct spawner {
    char pad_00[5];
    signed char slot;
    char char_id;
    char pad_01[28 - 7];
    char *player_a;
    char *player_b;
    struct task *task_a;
    struct task *task_b;
    char pad_02[156 - 44];
    short field_156;
};
void thunk_FUN_0c05fff4(void);
void FUN_0c09939c(void);
void pl_init_player_record(int slot);
void FUN_0c05f2d4(int a, int b);
void dbgedit_set_start_positions(char *p);
void FUN_0c0d00c8(void);
void FUN_0c0d00ea(char *task, int s);
int pl_start_motion(char *p, int a, int b);
struct task *obj_create(int a, int b, int c, int d);
void FUN_0c06233a(struct sub_obj *s, int tbl, int n);

int dbgedit_update_camera(void)
{
    unsigned int *pad;
    float *cam;
    float *player1, *player2;
    int *angle_ptr;

    pad = (unsigned int *)0xC7F31F0;
    cam = (float *)0xC7F29F8;
    if (*pad & 0x10000) {
        if (*pad & 1)
            cam[0x130 / 4] = cam[0x130 / 4] + 10.0f;
        else if (*pad & 0x200)
            cam[0x130 / 4] = cam[0x130 / 4] - 10.0f;
    }
    if (*pad & 0x400) {
        angle_ptr = (int *)((char *)cam + 0x110);
        if (*pad & 1) {
            *angle_ptr = *angle_ptr + 0x100;
            *angle_ptr = (unsigned short)*angle_ptr;
        } else if (*pad & 0x200) {
            *angle_ptr = *angle_ptr - 0x100;
            *angle_ptr = (unsigned short)*angle_ptr;
        }
    }
    player1 = (float *)0xC7E40C4;
    player2 = (float *)(0xC7E40C4 + 0x72D0);
    cam[0xEC / 4] = (player1[0x20 / 4] + player2[0x20 / 4]) / 2.0f;
    cam[0xF4 / 4] = (player1[0x28 / 4] + player2[0x28 / 4]) / 2.0f;
    cam[0xF0 / 4] = 100.0f;
    cam[0xBC / 4] = cam[0xEC / 4] + cam[0x130 / 4] * math_cos_angle16(*(int *)((char *)cam + 0x110));
    cam[0xC4 / 4] = cam[0xF4 / 4] + cam[0x130 / 4] * math_sin_angle16(*(int *)((char *)cam + 0x110));
    cam[0xC0 / 4] = cam[0xF0 / 4];
    FUN_0c0e1550(2);
    nlUnitMatrix();
    nlLookAt(cam + 0xBC / 4, cam + 0xEC / 4, 0);
    return FUN_0c0e1550(1);
}

void dbgedit_spawn_player_tasks(struct spawner *spawner)
{
    char *player;
    signed char *slot_rec;
    struct task *task;
    player = (char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0);
    player[0x71EC] = 1;
    thunk_FUN_0c05fff4();
    FUN_0c09939c();
    pl_init_player_record(spawner->slot);
    FUN_0c05f2d4(0, 0);
    dbgedit_set_start_positions((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0));
    slot_rec = (signed char *)(0xC4949A0 + (short)(spawner->slot * 168));
    pl_start_motion((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0), slot_rec[8], slot_rec[9]);
    *(int *)((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0) + 0x7194) = *(int *)((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0) + 0x718C);
    *(int *)((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0) + 0x7190) = *(int *)((char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0) + 0x718C);
    spawner->player_b = (char *)0xC7E40C4 + (unsigned short)(spawner->slot * 0x72D0);
    task = obj_create(1, 1, 1, 0);
    if (task != 0) {
        task->live = 1;
        task->field_01 = 0;
        task->slot = spawner->slot;
        task->field_06 = 15;
        task->field_05 = 25;
        task->handler = FUN_0c0d00c8;
        task->field_08 = 0;
        task->field_09 = 0;
        task->vel_x = 0.0f;
        task->vel_y = 0.0f;
        task->vel_z = 0.0f;
        dbgedit_set_start_positions((char *)task);
        task->field_44 = 0;
        task->field_48 = 0;
        task->field_52 = 0;
        task->scale_z = 1.0f;
        task->scale_y = 1.0f;
        task->scale_x = 1.0f;
        task->sub->active = 1;
        task->sub->model_id = 15;
        FUN_0c06233a(task->sub, 0xC6002D0, 0);
    }
    spawner->task_a = task;
    task = obj_create(2, 1, 1, 0);
    if (task != 0) {
        task->live = 1;
        task->field_01 = 0;
        task->slot = spawner->slot;
        task->field_06 = 15;
        task->field_05 = 25;
        task->handler = FUN_0c0d00c8;
        task->field_08 = 0;
        task->field_09 = 0;
        dbgedit_set_start_positions((char *)task);
        task->field_44 = 0;
        task->field_48 = 0;
        task->field_52 = 0;
        FUN_0c0d00ea((char *)task, (unsigned short)spawner->field_156);
        task->scale_z = 1.0f;
        task->scale_y = 1.0f;
        task->scale_x = 1.0f;
        FUN_0c06233a(task->sub, 0xC664958, spawner->field_156);
        task->sub->active = 1;
        task->sub->model_id = 15;
    }
    spawner->task_b = task;
    spawner->player_a = spawner->player_b;
    spawner->char_id = spawner->player_a[4];
}
