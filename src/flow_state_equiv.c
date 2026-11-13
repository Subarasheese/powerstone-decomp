/* mode 5..9 handlers, state predicates, HP gauge tick (0c054114-0c0559bc) */

int FUN_0c041e14(int);
int obj_release_class(int);
int FUN_0c0cc074(void);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int bgm_stop_streams(void);
int FUN_0c0d5292(void);
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D4_ushort { char p[0x71D4]; unsigned short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o71D8_ushort { char p[0x71D8]; unsigned short v; };
struct o720F_uchar { char p[0x720F]; unsigned char v; };
int FUN_0c095472(void);
int bgm_set_volume(int, int);
int bgm_play_hen_00(void);
int bgm_play_hen_01(void);
typedef struct { char pad0; signed char level; char pad2; signed char flag_3; signed char flag_4; char pad5[5]; unsigned short buttons; } level_rec;

int FUN_0c055566(int a4);

int FUN_0c054114(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F3073;
    if (((unsigned char)t0 != 1) && ((unsigned char)t0 != 2)) {
        return 0x0;
    }
    if ((int)(*(signed char *)(((unsigned char)((unsigned short)(t0 + 0xFF) * (unsigned short)0x78) + 0xC7F2E46))) > (int)0x8) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05414e(void)
{
    obj_release_class(0x2);
    obj_release_class(0x3);
    obj_release_class(0x4);
    obj_release_class(0x5);
    FUN_0c0cc074();
    FUN_0c041e14(0x0);
    return FUN_0c041e14(0x1);
}

int FUN_0c054a78(void)
{
    bgm_stop_streams();
    (((struct o0_uchar *)0xC7F302C)->v) = 0x7;
    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
    return 0x0;
}

int game_mode_handler_5(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(void))(0xC05471C))();
                }
                return ((int (*)(void))(0xC054B50))();
            }
            return ((int (*)(void))(0xC054B04))();
        }
        return ((int (*)(void))(0xC054664))();
    }
    return ((int (*)(void))(0xC05417A))();
}

int game_mode_handler_6(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302D;
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(void))(0xC054DD0))();
        }
        return ((int (*)(void))(0xC054DC2))();
    }
    return ((int (*)(void))(0xC054DB4))();
}

int game_mode_handler_8(void)
{
    *(unsigned char *)0xC7F2EE4 = 0x6;
    return FUN_0c0d5292();
}

int game_mode_handler_9(void)
{
    *(unsigned char *)(((0xC7E40C5 + (unsigned short)((unsigned short)((-(*(signed char *)0xC7F304F)) + 0x1) * (unsigned short)0x72D0)) + 0x0)) = 0x0;
    return 0x0;
}

void FUN_0c055562(void)
{
    
}

int FUN_0c055566(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x720F));
    (((struct o720F_uchar *)(a4))->v) = (t2 - 1);
    if (((int)(unsigned char)(t2 - 1) <= 0) && (t0 = (((struct o71D4_short *)(a4))->v), t1 = (((struct o71D6_short *)(a4))->v), (int)(t0 + 0x1) < (int)(t1 + 0x1))) {
        (((struct o71D4_ushort *)(a4))->v) = (((((struct o71D4_short *)(a4))->v)) + 0x1);
        (((struct o720F_uchar *)(a4))->v) = 0x28;
    }
    t0 = *(int *)0xC7F307C;
    t1 = t0;
    if ((t0 & 1) == 0) {
        t0 = 0x71D6;
        if ((int)(((((struct o71D8_short *)(a4))->v)) + 0x1) > (int)(((((struct o71D6_short *)(a4))->v)) + 0x1)) {
            (((struct o71D8_ushort *)(a4))->v) = (((((struct o71D8_short *)(a4))->v)) - 1);
            t0 = 0x71D8;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0555b6(void)
{
    FUN_0c055566(0xC7E40C4);
    return FUN_0c055566(0xC7EB394);
}

int FUN_0c0555c4(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 3) && (t1 = *(signed char *)0xC7F302D, t1 == 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0555dc(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F302C;
    if ((t0 == 5) || (t0 == 9)) {
        *(unsigned char *)0xC7F3199 = 0x1;
    }
    return (*(signed char *)0xC7F3199);
}

int FUN_0c055634(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 5) && (t1 = *(signed char *)0xC7F302D, (int)t1 <= (int)0x1)) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c05564e(void)
{
    int t1;

    if (((*(signed char *)0xC7F302C) == 5) && (t1 = *(signed char *)0xC7F302D, t1 == 3)) {
        *(unsigned char *)0xC7F319B = 0x1;
    }
    return (*(signed char *)0xC7F319B);
}

int FUN_0c05566a(void)
{
    if ((int)(*(short *)0xC7EB298) >= 0) {
        if ((int)(*(short *)0xC7F2568) < 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c055686(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC7F2F03) == 0) {
        t0 = *(signed char *)0xC7F3196;
        if (t0 != 0) {
            if (t0 != 1) {
                return ((int (*)(void))(0xC055774))();
            }
            t0 = *(signed char *)0xC3673FC;
            t1 = FUN_0c095472();
            if (t0 != (signed char)t1) {
                *(unsigned char *)0xC7F3196 = 0x0;
                FUN_0c095472();
                return ((int (*)(void))(0xC05574C))();
            }
            return ((int (*)(void))(0xC055774))();
        }
        t0 = FUN_0c095472();
        *(unsigned char *)0xC3673FC = t0;
        if ((signed char)t0 != 0) {
            *(unsigned char *)0xC7F3196 = 0x1;
            bgm_set_volume(0x0, 0x0);
            if ((int)(*(signed char *)(((unsigned short)((unsigned short)((*(signed char *)0xC3673FC) + 0xFFFF) * (unsigned short)0x72D0) + 0xC7E40C8))) >= (int)0x9) {
                return bgm_play_hen_01();
            }
            return bgm_play_hen_00();
        }
        return ((int (*)(void))(0xC055774))();
    }
    return ((int (*)(void))(0xC055774))();
}

int FUN_0c055782(int a4)
{
    register int t0;
    register int t5;

    t0 = *(signed char *)0xC7F4750;
    if (((int)t0 < (int)0x4) && ((int)a4 >= (int)0x4)) {
        *(unsigned char *)0xC7F4750 = 0x4;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x3) && ((int)a4 >= (int)0x3)) {
        *(unsigned char *)0xC7F4750 = 0x3;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x2) && ((int)a4 >= (int)0x2)) {
        *(unsigned char *)0xC7F4750 = 0x2;
    }
    if (((int)(*(signed char *)0xC7F4750) < (int)0x1) && ((int)a4 >= (int)0x1)) {
        *(unsigned char *)0xC7F4750 = 0x1;
    }
    t5 = 0x0;
    if (t0 != (*(signed char *)0xC7F4750)) {
        t5 = 0x1;
    }
    return t5;
}

int FUN_0c0557d6(int a4)
{
    register int t0;
    register int t10;

    t0 = *(signed char *)0xC7F4752;
    if (((int)t0 < (int)0x3) && ((int)a4 >= (int)0x7)) {
        *(unsigned char *)0xC7F4752 = 0x3;
    }
    if (((int)(*(signed char *)0xC7F4752) < (int)0x2) && ((int)a4 >= (int)0x6)) {
        *(unsigned char *)0xC7F4752 = 0x2;
    }
    if (((int)(*(signed char *)0xC7F4752) < (int)0x1) && ((int)a4 >= (int)0x5)) {
        *(unsigned char *)0xC7F4752 = 0x1;
    }
    t10 = 0x0;
    if (t0 != (*(signed char *)0xC7F4752)) {
        t10 = 0x1;
    }
    return t10;
}

int FUN_0c055838(int value_arg, unsigned int row_arg)
{
    level_rec *rec = (level_rec *)0xC7F4750;
    unsigned char *tbl = (unsigned char *)0xC7F2E3C;
    int old_level = rec->level;
    int changed = 0;
    if (old_level < 1) {
        if (value_arg >= 8)
            rec->level = 1;
    }
    if (rec->level < 2) {
        if (rec->buttons & 0x100)
            rec->level = 2;
    }
    if (rec->level < 3) {
        if (rec->buttons & 0x200) {
            if (tbl[(unsigned char)((unsigned short)row_arg * 120)] == 0)
                rec->level = 3;
        }
    }
    if (old_level != rec->level)
        changed = 1;
    return changed;
}

int FUN_0c0558ac(void)
{
    level_rec *rec = (level_rec *)0xC7F4750;
    int old3 = rec->flag_3;
    int old4 = rec->flag_4;
    int changed = 0;
    if (old3 < 1) {
        if (rec->buttons & 0x100)
            rec->flag_3 = 1;
    }
    if (rec->flag_4 < 1) {
        if (rec->buttons & 0x200)
            rec->flag_4 = 1;
    }
    if (old3 != rec->flag_3)
        changed = 1;
    if (old4 != rec->flag_4)
        changed = 1;
    return changed;
}
