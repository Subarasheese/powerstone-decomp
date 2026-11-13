/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

struct fld0_uchar { unsigned char value; };
struct fld1_uchar { char pad[0x1]; unsigned char value; };
struct fld2_uchar { char pad[0x2]; unsigned char value; };
struct fld3_uchar { char pad[0x3]; unsigned char value; };
struct fldE_short { char pad[0xE]; short value; };
struct fldE_ushort { char pad[0xE]; unsigned short value; };
int FUN_0c031030(void);
int ui_fade_start(int, int, int, int);
extern int game_frame_update();
int bgm_stop_streams(void);
int bgm_play_rank(void);
int rank_screen_time_ranking(void);
int rank_screen_vs_ranking(void);
int FUN_0c0d4692(void);
int FUN_0c0d5292(void);
int cam_reset_shake(int, int, int);

int attract_ranking_step(int obj, int arg1, int arg2, float f4)
{
    register int tmp0;
    register int tmp1;

    tmp0 = *(signed char *)0xC7F2EE7;
    if ((unsigned char)tmp0 != 0) {
        if ((unsigned char)tmp0 != 1) {
            if ((unsigned char)tmp0 != 2) {
                tmp0 = (((struct fldE_short *)0xC7F2EE6)->value);
                (((struct fldE_ushort *)0xC7F2EE6)->value) = (tmp0 - 1);
                if ((short)(tmp0 - 1) == 0) {
                    (((struct fld0_uchar *)0xC7F2EE6)->value) = ((*(signed char *)0xC7F2EE6) + 0x1);
                    (((struct fld1_uchar *)0xC7F2EE6)->value) = 0x0;
                    (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x0;
                }
                tmp0 = ((int (*)(int, int, int))(game_frame_update))(0xC7F2EE7, arg1, arg2);
                tmp0 = (FUN_0c031030());
            } else {
                tmp1 = *(signed char *)0xC7F2EE8;
                if ((unsigned char)tmp1 != 0) {
                    if ((unsigned char)tmp1 != 1) {
                        if ((unsigned char)tmp1 != 2) {
                            (((struct fld1_uchar *)0xC7F2EE6)->value) = ((*(signed char *)0xC7F2EE7) + 0x1);
                            (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x0;
                            (((struct fldE_ushort *)0xC7F2EE6)->value) = 0x10;
                            ui_fade_start(0xFF000000, 0x0, 0x1, 0xF);
                        } else {
                            tmp1 = rank_screen_vs_ranking();
                            if (tmp1 != 0) {
                                (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x3;
                            }
                        }
                    } else {
                        tmp1 = rank_screen_time_ranking();
                        if (tmp1 == 0) {
                        } else {
                            (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x3;
                        }
                    }
                } else {
                    (((struct fld3_uchar *)0xC7F2EE6)->value) = 0x0;
                    (((struct fld2_uchar *)0xC7F2EE6)->value) = ((*(signed char *)0xC7F3018) + 0x1);
                }
                FUN_0c031030();
                tmp0 = (((int (*)(void))(game_frame_update))());
            }
            return tmp0;
        }
    } else {
        (((struct fld1_uchar *)0xC7F2EE6)->value) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x0;
        (((struct fldE_ushort *)0xC7F2EE6)->value) = 0x708;
        FUN_0c0d5292();
    }
    if (((*(int *)0xC7F3014) & 16) != 0) {
        FUN_0c0d4692();
    }
    FUN_0c031030();
    tmp0 = ((int (*)(void))(game_frame_update))();
    tmp0 = (((struct fldE_short *)0xC7F2EE6)->value);
    (((struct fldE_ushort *)0xC7F2EE6)->value) = (tmp0 - 1);
    if ((short)(tmp0 - 1) == 0) {
        (((struct fld1_uchar *)0xC7F2EE6)->value) = ((*(signed char *)0xC7F2EE7) + 0x1);
        (((struct fld2_uchar *)0xC7F2EE6)->value) = 0x0;
        bgm_stop_streams();
        bgm_play_rank();
        return cam_reset_shake(0x0, 0x0, 0x63);
    }
    return (short)(tmp0 - 1);
}
