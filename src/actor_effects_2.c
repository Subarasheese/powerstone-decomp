/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05dd00-0c05e20c) */

typedef struct { int x, y, z; } Vec12;
typedef struct {
    char pad_00[8];
    char counter;
    char pad_09[35];
    int word_44;
    int pad_30;
    int word_52;
    Vec12 vec_56;
    Vec12 vec_68;
    char pad_80[158];
    short half_238;
    char pad_240[21];
    char flag_261;
    char flag_262;
    char flag_263;
} PoolObj;
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
int FUN_0c05deec(int);
int FUN_0c05df96(void);
int obj_set_mode_owner(int, int, int);
struct o118_uint { char p[0x118]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int item_init_hold_pose(int);
int fx_spawn_06(int);
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct oEC_short { char p[0xEC]; short v; };

int FUN_0c05e01e(int a4);
int FUN_0c05e06e(int a4, float f4);

void FUN_0c05dd00(PoolObj *obj)
{
    obj->counter = obj->counter + 1;
    obj->half_238 = 0;
    obj->word_44 = 0;
    obj->word_52 = 0;
    obj->vec_56 = *(Vec12 *)0x0c336410;
    obj->vec_68 = *(Vec12 *)0x0c336428;
    obj->flag_261 = 1;
    obj->flag_263 = 0;
}

int FUN_0c05dea2(int a4)
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
            FUN_0c05df96();
        }
    } else {
        FUN_0c05deec(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c05dfd4(int a4, float f4)
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
            FUN_0c05e06e(a4, f4);
        }
    } else {
        FUN_0c05e01e(a4);
    }
    (((struct o71CC_uint *)(t0))->v) = a4;
    return 0x71CC;
}

int FUN_0c05e01e(int a4)
{
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned char *)((a4 + 0x8)) = ((*(signed char *)((a4 + 0x8))) + 0x1);
    *(unsigned char *)((a4 + 0x9)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t1 + 0x3)));
    (((struct oEC_ushort *)(a4))->v) = 0x0;
    item_init_hold_pose(a4);
    (((struct o118_uint *)(a4))->v) = (((short)((short)(*(signed char *)((t1 + 0x71F1))) * (short)0xDC0) + (0x300 + t1)) + 0x580);
    return fx_spawn_06(t1);
}

int FUN_0c05e06e(int a4, float f4)
{
    register int t0;
    register int t2;

    t0 = 0x10B;
    if ((*(signed char *)(((*(int *)((a4 + 0x1C))) + 0x10B))) == 0) {
        if ((*(signed char *)((a4 + 0x9))) == 0) {
            t0 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.0599999987f);
            if (((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v)) > 1.0f) {
                (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 1.0f;
            }
            t0 = (((struct oEC_short *)(a4))->v);
            (((struct oEC_ushort *)(a4))->v) = (t0 + 0x1);
            t2 = 0xEC;
            if ((int)(short)(t0 + 0x1) >= (int)0xF) {
                t0 = *(signed char *)((a4 + 0x9));
                *(unsigned char *)((a4 + 0x9)) = (t0 + 0x1);
                t2 = (t0 + 0x1);
            }
            t0 = t2;
        } else {
            t2 = (((struct o2E0_int *)(a4))->v);
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.179999992f);
            if (0.199999988f > ((((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v))) {
                (((struct o20_float *)(((((struct o2E0_int *)(a4))->v))))->v) = 0.199999988f;
            }
            t0 = 0x20;
        }
    }
    return t0;
}
