/* @unit 0c0497fc-0c0498c4 -extra=a=400 -macsave=1 */
struct E { char p0[9]; char b9; char p1[29070]; short s7198; char p2[32]; char c71ba; char p3[277]; };
struct P { char p0; char b1; char p2; char idx; char pad[234]; short se; short sf0; };
extern struct E g_players[];
#define E(p) (*(struct E*)(q + (unsigned short)((p)->idx * 29392)))

extern void obj_destroy(struct P *p);
extern void fx_tick_model_effect(struct P *p);
void FUN_0c0497fc(struct P *p)
{
    char *q = (char*)g_players;
    if (E(p).b9 == 0 || E(p).b9 == 2) {
        if (E(p).b9 != 2) {
            int c = E(p).c71ba;
            if (c != 10 && c != 11 && c != 12 && c != 22 && c != 21) {
                p->b1 = 0;
                obj_destroy(p);
                return;
            }
        }
    } else {
        p->b1 = 0;
        obj_destroy(p);
        return;
    }
    if (p->sf0 != E(p).s7198) {
        if (p->se > 8) {
            p->se = 8;
            p->sf0 = E(p).s7198;
        }
    }
    fx_tick_model_effect(p);
}
