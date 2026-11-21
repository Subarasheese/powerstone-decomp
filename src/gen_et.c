/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_uint { char p[0x10E8]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFBC_int { char p[0xFBC]; int v; };
int FUN_0c0ffdba(void);
int FUN_0c100196(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_gunmode(void);
int thunk_FUN_0c111b54(int);
int FUN_0c100260(int a4, int a5, int a6, int a7);

int FUN_0c100260(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    (((struct o4_uint *)0xC80570C)->v) = 0x1;
    t1 = mpdrv_frame_recv_pre();
    if (t1 == -2) {
        (((struct o10E8_uint *)((*(int *)0xC843924)))->v) = 0x1;
    } else {
        if ((int)t1 < 0) {
            t2 = (((struct o34_int *)0xC80548C)->v);
            if (t2 != 0) {
                t3 = ((int (*)(int, int, int, int))(t2))(0x2, 0xFFFFFFF8, ((((struct o4_int *)0xC80548C)->v)), t1);
            }
        } else {
            mpdrv_frame_recv_main();
            t2 = (((struct o0_int *)0xC80570C)->v);
            t3 = *(volatile int *)0xA05F810C;
            t4 = *(volatile int *)0xA05F80DC;
            *(unsigned short *)(((0xC8054B8 + (t2 << 1)) + 0x0)) = ((t3 & 0x3FF) + ((unsigned short)(*(short *)(((0xC8054BC + (t2 << 1)) + 0x0))) * (unsigned short)(t4 & 0x3FF)));
            FUN_0c0ffdba();
            mpdrv_frame_recv_post();
            t2 = mpdrv_gunmode();
            t3 = t2;
            if (t2 != 0) {
                t2 = (((struct o38_int *)0xC80548C)->v);
                if (t2 != 0) {
                    t4 = ((int (*)(void))(t2))();
                    if (t4 != 0) {
                        (((struct o10_uint *)0xC80570C)->v) = (FUN_0c100196());
                        t2 = 0xC80571C;
                    }
                    t4 = t2;
                } else {
                    (((struct o10_uint *)0xC80570C)->v) = (FUN_0c100196());
                    t4 = 0xC80571C;
                }
                t2 = (((struct oFBC_int *)((*(int *)0xC843924)))->v);
                t5 = 0xFBC;
                t6 = t4;
                t4 = t2;
                if ((t2 != 0) && (t0 = (((struct o10_int *)0xC80570C)->v), t0 != 0)) {
                    t0 = *(volatile int *)0xA05F8040;
                    (((struct o8_uint *)0xC80570C)->v) = t0;
                    *(volatile unsigned int *)0xA05F8040 = ((((struct oFBC_int *)((*(int *)0xC843924)))->v));
                    t0 = *(volatile int *)0xA05F80E8;
                    *(volatile unsigned int *)0xA05F80E8 = (t0 | 0x8);
                    (((struct oC_uint *)0xC80570C)->v) = 0x1;
                    (((struct o2C_uint *)0xC80570C)->v) = (((((struct o2C_int *)0xC80570C)->v)) + 0x1);
                    t5 = (t0 | 0x8);
                    t6 = 0xC805718;
                    t4 = 0xC805714;
                    t0 = 0xC805738;
                }
                t3 = t5;
                t2 = t6;
                t5 = t4;
                t4 = t0;
            }
            t0 = t3;
            t3 = t2;
            t2 = t5;
            t5 = t4;
            t4 = 0x0;
            t6 = 0xC8054C8;
            for (;;) {
                if ((int)t4 >= (int)0x30) {
                    break;
                }
                if ((*(int *)((t6 + 0x8))) != 0) {
                    t5 = (*(int *)((t6 + 0x0)));
                    t0 = (thunk_FUN_0c111b54(t5));
                    if (t0 != 0) {
                        t7 = *(int *)((t6 + 0x8));
                        *(unsigned int *)((t6 + 0x8)) = 0x0;
                        t5 = (*(int *)((t6 + 0x0)));
                        t0 = (kdGetDeviceInfo(t5));
                        t8 = t0;
                        t5 = (*(int *)((t6 + 0x0)));
                        t0 = (kdGetDevice(t5));
                        t3 = (t7);
                        t5 = (*(int *)((t6 + 0x0)));
                        t0 = (((int (*)(int, int, int, int))(t3))(t5, (*(int *)((t6 + 0x4))), t0, t8));
                    }
                } else {
                    t7 = t3;
                    t8 = t2;
                    t9 = t5;
                }
                t3 = t7;
                t6 = (t6 + 0xC);
                t2 = t8;
                t5 = t9;
                t4 = (t4 + 0x1);
            }
            (((struct o10E8_uint *)((*(int *)0xC843924)))->v) = 0x0;
            (((struct o0_uint *)0xC80570C)->v) = (((((struct o0_int *)0xC80570C)->v)) ^ 0x1);
            (((struct o0_uint *)0xC80548C)->v) = (((((struct o0_int *)0xC80548C)->v)) + 0x1);
        }
        (((struct o4_uint *)0xC80570C)->v) = 0x0;
    }
    return t1;
}
