/* short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc) (0c0b6f5c-0c0b7150) */

struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
int obj_create(int, int, int, int);
int obj_set_record(int, int);
int fx_calc_orbit_position(int, int);
int _quick_odd_mvn(void);

int fx_spawn_06(int a4)
{
    register int t0;
    register int t4;

    t0 = obj_create(0x2, 0x1, 0x0, 0x0);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = 0x1;
        *(unsigned char *)((t0 + 0x3)) = (*(signed char *)((a4 + 0x3)));
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        *(unsigned char *)((t0 + 0x5)) = 0x19;
        fx_calc_orbit_position(t0, a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x2C)) = *(struct mv3 *)(0xC33C2C8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC33C2BC); }
        (((struct o101_uchar *)(t0))->v) = 0x1;
        (((struct o102_uchar *)(t0))->v) = 0xA;
        (((struct o106_uchar *)(t0))->v) = 0x1;
        (((struct o107_uchar *)(t0))->v) = 0x1;
        t4 = obj_set_record(t0, 0xB);
        *(unsigned int *)((t0 + 0x10)) = 0xC0B6FD8;
        *(unsigned int *)((t0 + 0x1C)) = a4;
    }
    return t4;
}
