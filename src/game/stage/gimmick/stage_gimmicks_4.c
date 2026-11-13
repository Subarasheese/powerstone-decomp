/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0aeee8-0c0af23c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
extern int FUN_0c0e6fe8();
void snd_play_stage_obj_se(int, int, int);
int stage_obj_on_break(char *);
void fx_spawn_thrown_item_kind(char *, int);
void obj_destroy(char *);
#define F(offset) (*(float *)(obj + (offset)))

int stage_spawn_type11(int a4)
{
    register int t0;
    register int t21;

    t0 = obj_create(0x2, 0x1, 0x2);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        *(unsigned char *)((t0 + 0x8)) = 0x0;
        *(unsigned char *)((t0 + 0x9)) = 0x0;
        *(unsigned char *)((t0 + 0xA)) = 0x0;
        *(unsigned char *)((t0 + 0xB)) = 0x0;
        (((struct o30D_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0xC0AEE0C;
        *(unsigned char *)((t0 + 0x4)) = 0xB;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct oEC_ushort *)(t0))->v) = 0x0;
        (((struct oEE_ushort *)(t0))->v) = 0x0;
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        (((struct o24_float *)(t0))->v) = (((((struct o24_float *)(t0))->v)) + 1.0f);
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((((*(signed char *)((t0 + 0x30E))) << 1) + 0xC33A158))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        FUN_0c06233a(((((struct o2E4_int *)(t0))->v)), 0xC664958, (*(signed char *)((((*(signed char *)((t0 + 0x30E))) << 1) + 0xC33A159))));
        *(unsigned char *)((((((struct o2E4_int *)(t0))->v)) + 0x0)) = 0x0;
        t21 = 0x2E4;
    }
    return t21;
}

void stage_type04_mode_19(char *obj)
{
    int state;
    int counter;
    signed char side;

    state = obj[8];
    if (state == 0) {
        counter = *(short *)(obj + 0xEC);
        if ((counter / 2) % 2 != 0)
            F(32) = F(32) + 5.0f;
        else
            F(32) = F(32) - 5.0f;
        *(short *)(obj + 0xEC) = *(short *)(obj + 0xEC) + 1;
        if (*(short *)(obj + 0xEC) >= 20) {
            obj[8] = obj[8] + 1;
            *(short *)(obj + 0xEC) = 0;
            F(60) = 0.0f;
            F(72) = -1.0f;
            obj[3] = (*(char **)(obj + 0x1C))[3];
            obj[0x105] = 0;
            side = *(signed char *)0xC7F3051;
            if (obj[0x30E] == 1 || obj[0x30E] == 4)
                snd_play_stage_obj_se(side, obj[3], 2);
        }
    } else if (state == 1) {
        if (obj[0x2D8] != 0) {
            stage_obj_on_break(obj);
            if (obj[0x30E] == 2)
                fx_spawn_thrown_item_kind(obj + 32, 1);
            obj[8] = obj[8] + 1;
        } else {
            F(36) = F(36) + F(60);
            F(60) = F(60) + F(72);
        }
    } else {
        obj_destroy(obj);
    }
}
