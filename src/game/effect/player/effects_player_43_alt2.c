/* player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects (0c0c209c-0c0c2a20) */

void obj_destroy(int);
void fx_spawn_26(int);
void fx_spawn_03cf50(int, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record_char(int, int);
extern int FUN_0c0e6fe8();

void fx_update_27(char *obj)
{
#define FLOAT_AT(offset) (*(float *)(obj + (offset)))
#define SHORT_AT(offset) (*(short *)(obj + (offset)))
    if (*(int *)(obj + 0x1C) == 0)
        { obj_destroy((int)obj); return; }
    switch (obj[8]) {
    case 0:
        obj[8]++;
        SHORT_AT(0xEC) = 60;
        FLOAT_AT(0x38) = math_sin_angle16(*(int *)(obj + 0x30)) * 20.0f;
        FLOAT_AT(0x40) = math_cos_angle16(*(int *)(obj + 0x30)) * 20.0f;
        /* fall through */
    case 1:
        FLOAT_AT(0x20) = FLOAT_AT(0x20) + FLOAT_AT(0x38);
        FLOAT_AT(0x24) = FLOAT_AT(0x24) + FLOAT_AT(0x3C);
        FLOAT_AT(0x28) = FLOAT_AT(0x28) + FLOAT_AT(0x40);
        if ((SHORT_AT(0xEC) % 8) == 0) {
            fx_spawn_26((int)obj);
            fx_spawn_03cf50((int)obj, 0);
        }
        SHORT_AT(0xEC) = SHORT_AT(0xEC) - 1;
        if (SHORT_AT(0xEC) != 0 && obj[0x108] == 0 && obj[0x2D8] == 0)
            return;
        SHORT_AT(0xEC) = 10;
        obj[8]++;
        return;
    case 2:
        SHORT_AT(0xEC) = SHORT_AT(0xEC) - 1;
        if (SHORT_AT(0xEC) == 0)
            obj[8]++;
        return;
    default:
        { obj_destroy((int)obj); return; }
    }
}

int fx_spawn_28(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = obj_create(0x1, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned int *)((t0 + 0x10)) = 0xC0C269C;
        FUN_0c0e6fe8();
        FUN_0c0e6fe8();
        (((struct o58_float *)(t0))->v) = 0.099999994f;
        (((struct o54_float *)(t0))->v) = 0.099999994f;
        (((struct o50_float *)(t0))->v) = 0.099999994f;
        *(unsigned int *)((t0 + 0x1C)) = a4;
        *(unsigned char *)((t0 + 0x4)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x3F;
        t7 = *(signed char *)((a4 + 0x3));
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), ((signed char)((((t7 << 1) + t7) << 2) << 1) + 0xC6002D0), 0x1);
        *(volatile int *)((t0 + 0x2E0));
        FUN_0c0e6fe8();
        (((struct o101_uchar *)(t0))->v) = 0x2;
        (((struct o102_uchar *)(t0))->v) = 0x2;
        return obj_set_record_char(t0, 0x78);
    }
    return t0;
}
