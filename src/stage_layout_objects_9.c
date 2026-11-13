/* stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris (0c0ae77c-0c0aeab8) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o98_float { char p[0x98]; float v; };
int obj_create(int, int, int);
int FUN_0c06233a(int, int, int);
int obj_set_record(int, int);
int stage_obj_load_layout_pos(int);
int FUN_0c0e6fe8(void);
struct o107_uchar { char p[0x107]; unsigned char v; };
int obj_destroy(int, int, int, int);
int stage_obj_on_break(int);

int stage_spawn_type02(int a4)
{
    register int t0;
    register int t17;

    t0 = obj_create(0x2, 0x1, 0x1);
    t17 = t0;
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
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE72C;
        *(unsigned char *)((t0 + 0x4)) = 0x2;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x4)));
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        (((struct o314_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x6)));
        obj_set_record(t0, (*(signed char *)((a4 + 0x6))));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0x1001;
        (((struct o98_float *)(((((struct o2E0_int *)(t0))->v))))->v) = 1.39999998f;
        t17 = 0x98;
    }
    return t17;
}

int stage_type12_mode_02(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return obj_destroy(a4, a5, a6, a7);
    }
    stage_obj_on_break(a4);
    (((struct o106_uchar *)(a4))->v) = 0x1;
    (((struct o107_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x8));
    *(unsigned char *)((a4 + 0x8)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int stage_spawn_type12(int a4)
{
    register int t0;
    register int t12;

    t0 = obj_create(0x2, 0x1, 0x1);
    t12 = t0;
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
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE8D4;
        *(unsigned char *)((t0 + 0x4)) = 0xC;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x8)));
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o105_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t12 = 0xF;
    }
    return t12;
}

int stage_type08_update(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x30D));
    if (t0 == 0) {
        return ((int (*)(int, int, int, int))(0xC0AE9D0))(a4, a5, a6, a7);
    }
    return t0;
}

int stage_spawn_type08(int a4)
{
    register int t0;
    register int t11;

    t0 = obj_create(0x2, 0x1, 0x1);
    t11 = t0;
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
        *(unsigned int *)((t0 + 0x10)) = 0xC0AE9D4;
        *(unsigned char *)((t0 + 0x4)) = 0x8;
        (((struct o308_uint *)(t0))->v) = a4;
        (((struct o30E_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct o2D9_uchar *)(t0))->v) = 0x1;
        (((struct o2DA_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x9)));
        (((struct o101_uchar *)(t0))->v) = 0x0;
        (((struct o102_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x5)));
        stage_obj_load_layout_pos(t0);
        FUN_0c0e6fe8();
        FUN_0c06233a(((((struct o2E0_int *)(t0))->v)), 0xC664958, (*(signed char *)((a4 + 0x2))));
        *(unsigned char *)((((((struct o2E0_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct o2E0_int *)(t0))->v)) + 0x2)) = 0xF;
        t11 = 0xF;
    }
    return t11;
}
