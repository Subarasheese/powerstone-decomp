/* @unit 0c05a80c-0c05a96c */
typedef struct { float x, y, z; } V;
typedef struct Q { char pad[32]; V pos; char pad2[0x7298-44]; float f7298; } Q;
typedef struct P {
    char p0[28]; Q *o; V pos; char p1[0xf2-44]; short sf2; char p2[0x30c-0xf4]; char b30c;
} P;
extern char g_save_options[];
typedef struct { char pad[0xbc]; V a; char pad2[0xec-0xc8]; V b; } G;
extern G g_cam_records[];
extern V t335f70[], t336048[];
extern void FUN_0c0e24f0(V *);
extern float FUN_0c0e2220(V *, V *);
extern void ui_draw_world_number(V *, int, int, int);
extern char _quick_odd_mvn;
void item_draw_marker(P *p)
{
    V c, b, a;
    if (g_save_options[24] == 0 && g_save_options[25] == 0) {
        b.x = g_cam_records[0].b.x - g_cam_records[0].a.x;
        b.y = g_cam_records[0].b.y - g_cam_records[0].a.y;
        b.z = g_cam_records[0].b.z - g_cam_records[0].a.z;
        FUN_0c0e24f0(&b);
        a.x = p->pos.x - g_cam_records[0].a.x;
        a.y = p->pos.y - g_cam_records[0].a.y;
        a.z = p->pos.z - g_cam_records[0].a.z;
        FUN_0c0e24f0(&a);
        if (FUN_0c0e2220(&b, &a) < 0.0f) return;
        if (p->o) {
            c = p->o->pos;
            c.y += 200.0f * p->o->f7298;
        } else {
            c = p->pos;
            c.y += 100.0f;
        }
        ui_draw_world_number(&c, p->b30c, p->sf2, 0);
    }
}
void item_init_hold_pose(P *p)
{
    p->pos = *(V *)((char *)t335f70 + (unsigned char)(p->b30c * 12));
    *(V *)((char *)p + 44) = *(V *)((char *)t336048 + (unsigned char)(p->b30c * 12));
}
