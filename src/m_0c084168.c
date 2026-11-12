/* @unit 0c084168-0c084304 */
struct P { char pad[29096]; char s1, s2; char pad2[29215 - 29098]; char sel; char pad3[29240 - 29216]; char sel2; };
extern void (*tbl_0c337b18[])(struct P *);
void FUN_0c087604(void);
void FUN_0c063812(struct P *); void FUN_0c06384a(struct P *); void FUN_0c063cb2(struct P *);
void FUN_0c063eac(struct P *); void FUN_0c064152(struct P *); void FUN_0c064d74(struct P *);
void FUN_0c0652c4(struct P *); void FUN_0c064744(struct P *); void FUN_0c065310(struct P *);
void FUN_0c065468(struct P *); void FUN_0c065694(struct P *); void FUN_0c06585e(struct P *);
void FUN_0c0658b8(struct P *);
void FUN_0c09a808(int a, int b, int c);

int FUN_0c084168(void) { FUN_0c087604(); return 0; }

void FUN_0c08417c(struct P *p)
{
    switch (p->sel) {
    case 0: case 2:
    default: tbl_0c337b18[p->sel2](p); break;
    case 1: case 3: FUN_0c063812(p); break;
    case 4: FUN_0c06384a(p); break;
    case 5: FUN_0c063cb2(p); break;
    case 6: FUN_0c063eac(p); break;
    case 7: FUN_0c064152(p); break;
    case 8: FUN_0c064d74(p); break;
    case 9: FUN_0c0652c4(p); break;
    case 10: FUN_0c064744(p); break;
    case 11: FUN_0c065310(p); break;
    case 12: FUN_0c065468(p); break;
    case 13: FUN_0c065694(p); break;
    case 14: FUN_0c06585e(p); break;
    case 15: FUN_0c0658b8(p); break;
    }
    p->s1 = p->s2 = 1;
}
void FUN_0c08425c(int a) { FUN_0c09a808(a, 1, 16); }
void FUN_0c084264(int a) { FUN_0c09a808(a, 1, 19); }
void FUN_0c08426c(int a) { FUN_0c09a808(a, 1, 18); }
void FUN_0c084274(int a) { FUN_0c09a808(a, 1, 21); }
void FUN_0c08427c(int a) { FUN_0c09a808(a, 1, 13); }
void FUN_0c084284(int a) { FUN_0c09a808(a, 1, 2); }
void FUN_0c08428c(int a) { FUN_0c09a808(a, 1, 23); }
void FUN_0c084294(int a) { FUN_0c09a808(a, 1, 24); }
void FUN_0c08429c(int a) { FUN_0c09a808(a, 1, 31); }
void FUN_0c0842a4(int a) { FUN_0c09a808(a, 1, 28); }
void FUN_0c0842ac(int a) { FUN_0c09a808(a, 1, 30); }
void FUN_0c0842b4(int a) { FUN_0c09a808(a, 1, 25); }
void FUN_0c0842bc(int a) { FUN_0c09a808(a, 1, 27); }
