/* stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions (0c0aeca8-0c0aed9c) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int stage_obj_load_layout_pos(int);
int FUN_0c0e6fe8(void);

int stage_spawn_gimmick_by_kind(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC33A09C + ((*(signed char *)((a4 + 0x7))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int stage_gimmick_03_04_spawn(int a4)
{
    register int t0;
    register int t13;

    t0 = obj_create(0x5, 0x1, 0x1);
    t13 = t0;
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
        *(unsigned int *)((t0 + 0x10)) = 0xC0AED66;
        *(unsigned char *)((t0 + 0x4)) = 0xD;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t13 = 0xF;
    }
    return t13;
}

void stage_gimmick_03_04_update(void)
{
    
}
