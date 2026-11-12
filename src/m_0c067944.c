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
extern void (*tbl_336928[])(struct O *);
void FUN_0c063812(struct O *);
void FUN_0c06384a(struct O *);
void FUN_0c063cb2(struct O *);
void FUN_0c063eac(struct O *);
void FUN_0c064152(struct O *);
void FUN_0c064d74(struct O *);
void FUN_0c0652c4(struct O *);
void FUN_0c064744(struct O *);
void FUN_0c065310(struct O *);
void FUN_0c065468(struct O *);
void FUN_0c065694(struct O *);
void FUN_0c06585e(struct O *);
void FUN_0c0658b8(struct O *);
void FUN_0c067944(struct O *o);
void FUN_0c067944(struct O *o)
{
    switch (o->b721f) {
    case 0:
    case 2:
        o->s240 = 0;
        tbl_336928[o->b7238](o);
        break;
    case 1:
    case 3:
        FUN_0c063812(o);
        break;
    case 4:
        FUN_0c06384a(o);
        break;
    case 5:
        FUN_0c063cb2(o);
        break;
    case 6:
        FUN_0c063eac(o);
        break;
    case 7:
        FUN_0c064152(o);
        break;
    case 8:
        FUN_0c064d74(o);
        break;
    case 9:
        FUN_0c0652c4(o);
        break;
    case 10:
        FUN_0c064744(o);
        break;
    case 11:
        FUN_0c065310(o);
        break;
    case 12:
        FUN_0c065468(o);
        break;
    case 13:
        FUN_0c065694(o);
        break;
    case 14:
        FUN_0c06585e(o);
        break;
    case 15:
        FUN_0c0658b8(o);
        break;
    }
    o->b71a8 = o->b71a9 = 1;
}
