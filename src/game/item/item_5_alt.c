/* item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item (0c05b6dc-0c05c1c0) */

/* named globals (symbols.txt) */
int FUN_0c05bbc8(int a4, int a5, int a6, int a7);
extern char g_proj_char_offset_tbl[];
struct o118_uint { char p[0x118]; unsigned int v; };
int item_init_hold_pose(int);
struct o0_float { float v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int fx_spawn_item_sparkle(int);
int math_rand_next(void);
float math_sin_angle16(int);
int _modls(void);
extern int _quick_odd_mvn();
struct v3 { int x, y, z; };
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern int FUN_0c0ac5c4(char *);
extern char FUN_0c026554(char *);
extern void obj_set_mode_owner(char *, int, int);
extern void FUN_0c0e21b0(char *, char *);
extern void obj_destroy(char *);
extern void thunk_FUN_0c062242(int, float *);
extern void FUN_0c0c07bc(char *, float *, float *, int, float);

int FUN_0c05b9a4(int a4)
{
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t1 + 0x3)));
    item_init_hold_pose(a4);
    (((struct o118_uint *)(a4))->v) = (((short)((short)(*(signed char *)((t1 + 0x71F1))) * (short)0xDC0) + (0x300 + t1)) + 0x580);
    return 0x118;
}

void FUN_0c05b9e4(void)
{
    
}


void obj_tick_owner_projectile(char *obj)
{
    char *owner;
    float scale;
    float *table;
    float vec_a[3], vec_b[3];
    char *other_player;
    int variant;

    switch (obj[8]) {
    case 0:
        owner = *(char **)(obj + 0x1C);
        obj[3] = 2;
        obj[8] = obj[8] + 1;
        *(int *)(obj + 0x1C) = 0;
        obj[0x107] = 0;
        *(int *)(obj + 0x118) = 0;
        scale = *(float *)(owner + 0x7298);
        *(struct v3 *)(obj + 32) = *(struct v3 *)(owner + 32);
        *(float *)(obj + 32) = *(float *)(obj + 32) + 100.0f * (math_cos_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        *(float *)(obj + 36) = *(float *)(obj + 36) + 180.0f * scale;
        *(float *)(obj + 40) = *(float *)(obj + 40) + 100.0f * (math_sin_angle16(0x14000 - *(int *)(owner + 48)) * scale);
        *(struct v3 *)(obj + 44) = *(struct v3 *)(owner + 44);
        table = (float *)(((int)g_proj_char_offset_tbl) + 24 * owner[4]);
        if (obj[0x30C] == 9)
            scale = table[1];
        else
            scale = table[0];
        *(struct v3 *)vec_a = *(struct v3 *)(obj + 32);
        other_player = (char *)0xC7E40C4 + (unsigned short)((unsigned short)(1 - owner[3]) * (unsigned short)0x72D0);
        variant = *(signed char *)(other_player + 0x71F1);
        thunk_FUN_0c062242((int)(other_player + 0x300 + 0x2C0 + (short)(variant * 3520)), vec_b);
        FUN_0c0c07bc(obj + 56, vec_a, vec_b, *(int *)(owner + 48), scale);
        *(struct v3 *)(obj + 68) = *(struct v3 *)0xC336298;
        return;
    case 1:
        if (FUN_0c0ac5c4(obj) != 0) {
            obj_set_mode_owner(obj, 17, obj[3]);
            return;
        }
        if (FUN_0c026554(obj) != 0) {
            obj_set_mode_owner(obj, 0, obj[3]);
            return;
        }
        *(int *)(obj + 0x2C) = *(int *)(obj + 0x2C) + 910;
        FUN_0c0e21b0(obj + 32, obj + 56);
        FUN_0c0e21b0(obj + 56, obj + 68);
        return;
    case 2:
        obj_destroy(obj);
        return;
    default:
        return;
    }
}
