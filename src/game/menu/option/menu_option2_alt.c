/* OPTION group screen 2 (0c01a42c-0c01ae48) */

int FUN_0c01a5cc(int a4, int a5, int a6, int a7);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c01ab4c(int);
int FUN_0c01ac74(int);
int FUN_0c01ad40(int);
int opt_page2_pad_pressed(int);
int bgm_stop_slot(int);
int FUN_0c0a3426(int);
int bgm_play_by_index(int);
int snd_play_side_se(int, int);
int FUN_0c0a4070(int, int);
int obj_tick_class(int, int, int, int);

int opt_page2_run_objects_in_mask(int a4, int a5, int a6, int a7);


int opt_page2_run_objects_in_mask(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned short *)0xC36233C = a4;
    t0 = obj_tick_class(0x5, a5, a6, a7);
    *(unsigned short *)0xC36233C = 0x0;
    return t0;
}
