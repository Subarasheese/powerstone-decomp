/* motion engine: start/step motion, key tables, attack record load (0c09a808-0c09b068) */

/* named globals (symbols.txt) */
int pl_step_motion_impl(int a4, int a5, int a6, int a7);
extern char g_attack_record_tab[];
struct o7198_short { char p[0x7198]; short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_short { char p[0x71A0]; short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A3_uchar { char p[0x71A3]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71AA_uchar { char p[0x71AA]; unsigned char v; };
int pl_load_motion_key(int, int);
int pl_load_motion_prev_key(int, int);
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };


int pl_load_motion_attack_record(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o102_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x0)));
    (((struct o101_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x1)));
    (((struct o71A3_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x3)));
    t0 = *(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2));
    t1 = t0;
    if (t0 != 0) {
        t0 = 0x100;
        if ((unsigned char)(*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (((*(signed char *)((a5 + 0x3))) * 0xB5EC8) + 0xC664B50))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2))) == 0xFF) {
        } else {
            (((struct o100_uchar *)(a4))->v) = (*(signed char *)(((((((unsigned short)((((struct o71A0_short *)(a4))->v)) << 2) << 1) + (0xAC288 + (0xC664B50 + ((*(signed char *)((a5 + 0x3))) * 0xB5EC8)))) + (((unsigned char)(*(signed char *)((a4 + 0x71A2))) << 2) << 1)) + 0x2)));
            t2 = *(signed char *)(((0x100 + a4) + 0x0));
            (((struct oF4_uint *)(a4))->v) = ((((t2 << 2) + t2) << 2) + (*(int *)((((int)g_attack_record_tab) + ((*(signed char *)((a4 + 0x4))) << 2)))));
            (((struct o108_uchar *)(a4))->v) = 0x0;
            t2 = (0x11C + a4);
            t3 = 0x0;
            for (;;) {
                t3 = (t3 + 0x1);
                *(unsigned int *)((t2 + 0x0)) = 0x0;
                t2 = (t2 + 0x4);
                if ((int)t3 >= (int)0xA) {
                    break;
                }
            }
            t0 = 0x144;
        }
        *(unsigned char *)((a4 + t0)) = 0x0;
        t1 = t0;
    }
    return t1;
}
