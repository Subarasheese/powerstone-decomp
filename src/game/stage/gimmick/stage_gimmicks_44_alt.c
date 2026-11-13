/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0b5a5c-0c0b5d60) */

struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
extern int FUN_0c0e6fe8();
extern void stage_obj_on_break(char *);
extern void snd_play_stage_obj_se(int, int, int);
extern void fx_spawn_thrown_item_kind(char *, int);
extern void obj_destroy(char *);

int stage_gimmick_41_spawn_b(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x2, 0x1, 0x1);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t0 + 0x6)) = 0x5;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0B5C42;
        *(unsigned char *)((t0 + 0x4)) = 0xF;
        (((struct o308_uint *)(t0))->v) = ((((struct o308_int *)(a4))->v));
        (((struct o102_uchar *)(t0))->v) = 0xAC;
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x0;
        t3 = ((int (*)(int))(FUN_0c0e6fe8))(0x0);
        t4 = ((int (*)(void))(FUN_0c0e6fe8))();
        t5 = ((int (*)(void))(FUN_0c0e6fe8))();
        (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B5CB8);
        (((struct oEC_ushort *)(t0))->v) = 0x1E;
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((((struct o308_int *)(a4))->v)) + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x401;
        (((struct o40_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.0f;
        t14 = 0x40;
    }
    return t14;
}

void stage_gimmick_41_update_b(char *obj)
{
    char *block;
    float wobble;

    switch (obj[8]) {
    case 0:
        block = *(char **)(obj + 0x2E0);
        if (*(short *)(obj + 0xEC) % 2 == 0)
            wobble = 5.0f;
        else
            wobble = -5.0f;
        *(float *)(block + 4) = wobble;
        *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) - 1;
        if (*(short *)(obj + 0xEC) > 0)
            return;
        obj[8] = obj[8] + 1;
        *(float *)(*(char **)(obj + 0x2E0) + 4) = 0.0f;
        break;
    case 1:
        *(float *)(obj + 60) = *(float *)(obj + 60) - 1.0f;
        *(float *)(obj + 36) = *(float *)(obj + 36) + *(float *)(obj + 60);
        if (*(float *)(obj + 0x274) > 0.0f) {
            *(float *)(obj + 60) = 0.0f;
            stage_obj_on_break(obj);
            snd_play_stage_obj_se(*(signed char *)0x0C7F3051, obj[3], 3);
            fx_spawn_thrown_item_kind(obj + 32, 1);
            *(short *)(obj + 0xEC) = 30;
            obj[9] = obj[9] + 1;
        }
        break;
    case 2:
        *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) - 1;
        if (*(short *)(obj + 0xEC) < 0)
            obj[8] = obj[8] + 1;
        break;
    default:
        obj_destroy(obj);
        break;
    }
}
