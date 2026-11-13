/* OPTION group screen 3 (0c01ae48-0c01b66c) */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
extern int FUN_0c01b4f2();
int snd_play_side_se(int, int);

int FUN_0c01b570(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = ((int (*)(int, int, int, int))(FUN_0c01b4f2))(0x2, 0x80, a6, a7);
    if ((signed char)t2 != 0) {
        if (((unsigned char)(*(signed char *)0xC362352) == 3) && (t0 = *(signed char *)0xC362351, (unsigned char)t0 == 3)) {
            (((struct o1_uchar *)0xC362350)->v) = 0x0;
        }
        (((struct o1_uchar *)0xC362350)->v) = ((*(signed char *)0xC362351) + 0x1);
        snd_play_side_se(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x40);
    if ((signed char)t0 != 0) {
        if (((unsigned char)(*(signed char *)0xC362352) == 3) && (t1 = *(signed char *)0xC362351, (unsigned char)t1 == 4)) {
            (((struct o1_uchar *)0xC362350)->v) = 0x3;
        }
        (((struct o1_uchar *)0xC362350)->v) = ((*(signed char *)0xC362351) - 1);
        snd_play_side_se(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x20);
    if ((signed char)t0 != 0) {
        (((struct o2_uchar *)0xC362350)->v) = ((*(signed char *)0xC362352) + 0x1);
        snd_play_side_se(0x0, 0x4B);
    }
    t0 = ((int (*)(int, int))(FUN_0c01b4f2))(0x2, 0x10);
    if ((signed char)t0 != 0) {
        (((struct o2_uchar *)0xC362350)->v) = ((*(signed char *)0xC362352) - 1);
        snd_play_side_se(0x0, 0x4B);
    }
    t0 = *(signed char *)0xC362352;
    (((struct o2_uchar *)0xC362350)->v) = (*(signed char *)((((signed char)(((t0 << 1) + t0) << 2) + 0xC11C128) + ((unsigned char)(*(signed char *)0xC362351) << 1))));
    t0 = *(signed char *)0xC362352;
    (((struct o1_uchar *)0xC362350)->v) = (*(signed char *)(((((unsigned char)(*(signed char *)0xC362351) << 1) + ((signed char)(((t0 << 1) + t0) << 2) + 0xC11C128)) + 0x1)));
    t0 = *(signed char *)(((0xC11C164 + (((unsigned char)(*(signed char *)0xC362352) - 1) << 2)) + ((unsigned char)(*(signed char *)0xC362351) - 1)));
    (((struct o0_uchar *)0xC362350)->v) = t0;
    return t0;
}
