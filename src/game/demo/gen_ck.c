/* Straight-line functions with calls and guards (batch gen_ck): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
int bgm_stop_streams(void);
int FUN_0c015884(void);

int FUN_0c015884(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4_short *)0xC361BF8)->v);
    if (((unsigned short)t0 & 0x8) != 0) {
        t1 = (((struct o0_short *)0xC361BF8)->v);
        if (((unsigned short)t1 & 2) == 0) {
            if ((0x2 & (unsigned short)t0) != 0) {
                t2 = (((struct o0_short *)0xC361BF8)->v);
                if (((unsigned short)t2 & 0x8) != 0) {
                    *(unsigned char *)0xC7F2EE9 = 0x1;
                    (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
                    (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
                    return bgm_stop_streams();
                }
                return (unsigned short)t2;
            }
            return (unsigned short)t1;
        }
        *(unsigned char *)0xC7F2EE9 = 0x1;
        (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
        (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
        return bgm_stop_streams();
    }
    if ((0x2 & (unsigned short)t0) != 0) {
        t1 = (((struct o0_short *)0xC361BF8)->v);
        if (((unsigned short)t1 & 0x8) != 0) {
            *(unsigned char *)0xC7F2EE9 = 0x1;
            (((struct o0_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o1_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o2_uchar *)0xC7F302C)->v) = 0x0;
            (((struct o3_uchar *)0xC7F302C)->v) = 0x0;
            return bgm_stop_streams();
        }
        return (unsigned short)t1;
    }
    return t0;
}
