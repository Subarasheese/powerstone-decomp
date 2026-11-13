/* player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8 (0c0a066c-0c0a07e4) */

struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
int math_angle_between_points_xz(int, int);
extern int pl_set_item_carry_motion();
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int, int);
int obj_touched_by_slot(int, int);

int pl_enter_state_35_pickup_item(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o71BA_uchar *)(a4))->v) = 0x23;
    (((struct o71BC_uchar *)(a4))->v) = 0x0;
    t0 = (((struct o71C8_int *)(a4))->v);
    if (t0 != 0) {
        if ((*(signed char *)((((((struct o71C8_int *)(a4))->v)) + 0x4))) == 6) {
            snd_play_char_voice(a4, 0x12);
            snd_play_side_se((*(signed char *)((a4 + 0x3))), 0xE);
        }
        t1 = math_angle_between_points_xz((a4 + 0x20), (t0 + 0x20));
        t2 = *(int *)((a4 + 0x30));
        t3 = (unsigned short)(t1 - t2);
        if ((0x8000 & (unsigned short)(t1 - t2)) != 0) {
            t3 = ((unsigned short)(t1 - t2) | 0xFFFF0000);
        }
        if (((int)t3 < (int)0x4000) && ((int)t3 > (int)0xFFFFC000)) {
            t1 = obj_touched_by_slot(t0, (*(signed char *)((a4 + 0x3))));
            if ((signed char)t1 != 0) {
                obj_set_mode_owner(t0, 0x5, (*(signed char *)((a4 + 0x3))));
                (((struct o71CC_uint *)(a4))->v) = t0;
            }
            return ((int (*)(int, int))(pl_set_item_carry_motion))(a4, 0x0);
        }
        (((struct oEC_ushort *)(a4))->v) = 0x5;
        *(unsigned char *)((a4 + 0xA)) = 0x1;
        return 0x1;
    }
    return ((int (*)(int, int, int))(pl_set_item_carry_motion))(a4, 0x0, a6);
}
