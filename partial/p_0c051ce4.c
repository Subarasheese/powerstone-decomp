/* @unit 0c051ce4-0c051e2c -macsave=1 */
typedef struct E { unsigned char c0; char p1[11]; short *q; char pad1[60]; union { int i; short h; } u76; char pad2[512]; } E;
typedef struct A { char p[3]; char c3; char p4[728]; unsigned int m732; } A;
extern short g_ai_run_flag;
extern unsigned char g_ai_cur_slot;
extern E g_ai_slots[];
extern short *g_ai_pc;
extern int ai_calc_angle_to_goal_point(A *);
extern int ai_angle_to_pad_dir(int);
extern int ai_calc_dist_to_goal_point(A *);
extern void ai_clear_op_state(void);
#define EN ((E *)((char *)tb + (short)(*pb * 596)))
void ai_op54(A *a0)
{
    register E *tb;
    register int x;
    unsigned char *pb;
    A *a = a0;
    E *e;
    short s0, s4, v;
    int r, rr, vi;
    short *ps;
    x = ai_calc_angle_to_goal_point(a);
    pb = &g_ai_cur_slot;
    tb = g_ai_slots;
    e = EN;
    if ((unsigned short)(x - e->u76.h + 4096) < 8192)
        x = e->u76.i;
    else
        e->u76.i = x;
    s0 = ai_angle_to_pad_dir(x);
    s4 = ai_angle_to_pad_dir(x + 0x8000);
    v = *g_ai_pc++;
    r = ai_calc_dist_to_goal_point(a);
    ps = &g_ai_run_flag;
    switch (EN->c0) {
    case 0:
        *ps = 0;
        EN->c0++;
    case 1:
        *ps = 0;
        rr = (short)r;
        vi = v;
        if (vi < rr - 20) {
            a->m732 |= (unsigned short)s0;
        } else if (vi > rr + 20) {
            a->m732 |= (unsigned short)s4;
        } else {
            EN->c0++;
        }
        break;
    case 2:
        *ps = 1;
        ai_clear_op_state();
        EN->q = g_ai_pc;
        break;
    }
}
