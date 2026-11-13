/* @unit 0c067870-0c067944 */
/* runtime: _quick_odd_mvn */
typedef struct { int a, b, c; } S12;
extern S12 g14ee48;
extern void _quick_odd_mvn(void);
extern void pl_falcon_motion_sfx(char *);
extern char FUN_0c09c3f8(char *, int);
extern void pl_start_motion(char *, int, int);

typedef struct { char pad0[10]; char b10; char pad1[0x71ba-11]; char a71ba; char pad2[0x7223-0x71bb]; volatile char a7223; } O;
int pl_falcon_frame_hook(O *p)
{
    S12 loc;
    loc = g14ee48;
    pl_falcon_motion_sfx((char *)p);
    if (p->a71ba == 11) {
        if (p->a7223 == 2 || p->a7223 == 4) {
            if (p->b10 >= 1) {
                if (FUN_0c09c3f8((char *)p, 512)) {
                    (*(short *)((char *)p + 236))++;
                }
            }
        }
    }
    return 0;
}
void pl_falcon_start_motion_16(char *p){ pl_start_motion(p,1,16); }
void pl_falcon_start_motion_17(char *p){ pl_start_motion(p,1,17); }
void pl_falcon_start_motion_18(char *p){ pl_start_motion(p,1,18); }
void pl_falcon_start_motion_19(char *p){ pl_start_motion(p,1,19); }
void pl_falcon_start_motion_24(char *p){ pl_start_motion(p,1,24); }
void pl_falcon_start_motion_25(char *p){ pl_start_motion(p,1,25); }
void pl_falcon_start_motion_27(char *p){ pl_start_motion(p,1,27); }
void pl_falcon_start_motion_26(char *p){ pl_start_motion(p,1,26); }
void pl_falcon_start_motion_23(char *p){ pl_start_motion(p,1,23); }
void pl_falcon_start_motion_21(char *p){ pl_start_motion(p,1,21); }
void pl_falcon_start_motion_20(char *p){ pl_start_motion(p,1,20); }
void pl_falcon_start_motion_30(char *p){ pl_start_motion(p,1,30); }
