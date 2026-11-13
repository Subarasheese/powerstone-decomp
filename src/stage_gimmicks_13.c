/* @unit 0c0b0600-0c0b0710 */
/* _modls */
struct R { char b[16]; };
extern struct R g_gimmick_frame_tbl[];
extern char g_res_stage_b[];
extern void FUN_0c0624c4(char *, char *, int);
extern void obj_set_record(struct O *, int);
extern void snd_play_side_se(int, int);
extern void obj_destroy(struct O *);
struct B { char p[28]; float f1c; float f20; };
struct O { char p0[8]; char st; char p1[0xe2]; short c; short d; char p2[0x15]; char flag; char p3[0x1d9]; struct B *b; char p4[0x2a]; char idx; };
void FUN_0c0b0600(struct O *p)
{
    struct B *b = p->b;
    FUN_0c0624c4((char *)b + 156, g_res_stage_b, g_gimmick_frame_tbl[p->idx].b[p->d % 16]);
    p->d += 1;
    switch (p->st) {
    case 0:
        p->c += 1;
        if (p->c % 10 == 0)
            obj_set_record(p, 55);
        if (p->c == 5)
            snd_play_side_se(2, 31);
        if (p->c >= 180) {
            p->st++;
            p->c = 0;
            p->flag = 1;
        }
        break;
    case 1: {
        float f;
        p->c += 1;
        if (p->idx == 2) f = 0.39999998f; else f = 0.19999999f;
        b->f1c -= f;
        b->f20 -= f;
        if (p->c > 8)
            p->st++;
        break;
    }
    default:
        obj_destroy(p);
    }
}
