/* @unit 0c067944-0c067a68 */
struct O {
    char pad240[240];
    short s240;
    char pad29096[28854];
    char b71a8;
    char b71a9;
    char pad29215[117];
    char b721f;
    char pad29240[24];
    char b7238;
};
extern void (*g_pl_falcon_start_action_tbl[])(struct O *);
void pl_mode01_03_enter(struct O *);
void pl_mode04_enter(struct O *);
void pl_mode05_enter(struct O *);
void pl_mode06_enter(struct O *);
void pl_mode07_enter(struct O *);
void pl_mode08_enter(struct O *);
void pl_mode09_enter(struct O *);
void pl_mode10_enter(struct O *);
void pl_mode11_enter(struct O *);
void pl_mode12_enter(struct O *);
void pl_mode13_enter(struct O *);
void pl_mode14_enter(struct O *);
void pl_mode15_enter(struct O *);
void pl_falcon_state_enter(struct O *o);
void pl_falcon_state_enter(struct O *o)
{
    switch (o->b721f) {
    case 0:
    case 2:
        o->s240 = 0;
        g_pl_falcon_start_action_tbl[o->b7238](o);
        break;
    case 1:
    case 3:
        pl_mode01_03_enter(o);
        break;
    case 4:
        pl_mode04_enter(o);
        break;
    case 5:
        pl_mode05_enter(o);
        break;
    case 6:
        pl_mode06_enter(o);
        break;
    case 7:
        pl_mode07_enter(o);
        break;
    case 8:
        pl_mode08_enter(o);
        break;
    case 9:
        pl_mode09_enter(o);
        break;
    case 10:
        pl_mode10_enter(o);
        break;
    case 11:
        pl_mode11_enter(o);
        break;
    case 12:
        pl_mode12_enter(o);
        break;
    case 13:
        pl_mode13_enter(o);
        break;
    case 14:
        pl_mode14_enter(o);
        break;
    case 15:
        pl_mode15_enter(o);
        break;
    }
    o->b71a8 = o->b71a9 = 1;
}
