/* @unit 0c06dff0-0c06e18c */
extern int FUN_0c071edc(void);
int FUN_0c06dff0(void)
{
    FUN_0c071edc();
    return 0;
}
extern void (*g336e50[])(void *);
extern void FUN_0c063812(void*), FUN_0c06384a(void*), FUN_0c063cb2(void*), FUN_0c063eac(void*), FUN_0c064152(void*), FUN_0c064d74(void*), FUN_0c0652c4(void*);
extern void FUN_0c064744(void*), FUN_0c0645ee(void*), FUN_0c065310(void*), FUN_0c065468(void*), FUN_0c065694(void*), FUN_0c06585e(void*), FUN_0c0658b8(void*);
typedef struct { char pad0[0xf0]; short s; char pad1[0x71a8-0xf2]; char a8; char a9; char pad5[0x71f1-0x71aa]; char c71f1; char pad2[0x721f-0x71f2]; char c721f; char pad3[0x7238-0x7220]; char c7238; } O;
void FUN_0c06e004(O *p)
{
    switch (p->c721f) {
    case 0: case 2:
        p->s = 0;
        g336e50[p->c7238](p);
        break;
    case 1: case 3: FUN_0c063812(p); break;
    case 4: FUN_0c06384a(p); break;
    case 5: FUN_0c063cb2(p); break;
    case 6: FUN_0c063eac(p); break;
    case 7: FUN_0c064152(p); break;
    case 8: FUN_0c064d74(p); break;
    case 9: FUN_0c0652c4(p); break;
    case 10:
        if (!p->c71f1) { FUN_0c064744(p); } else { FUN_0c0645ee(p); }
        break;
    case 11: FUN_0c065310(p); break;
    case 12: FUN_0c065468(p); break;
    case 13: FUN_0c065694(p); break;
    case 14: FUN_0c06585e(p); break;
    case 15: FUN_0c0658b8(p); break;
    }
    p->a8 = p->a9 = 1;
}

extern void FUN_0c09a808(void *, int, int);
void FUN_0c06e0fc(void *p) { FUN_0c09a808(p, 1, 16); }
void FUN_0c06e104(void *p) { FUN_0c09a808(p, 1, 24); }
void FUN_0c06e10c(void *p) { FUN_0c09a808(p, 1, 17); }
void FUN_0c06e114(void *p) { FUN_0c09a808(p, 1, 25); }
void FUN_0c06e11c(void *p) { FUN_0c09a808(p, 1, 18); }
void FUN_0c06e124(void *p) { FUN_0c09a808(p, 1, 29); }
void FUN_0c06e12c(void *p) { FUN_0c09a808(p, 1, 20); }
void FUN_0c06e134(void *p) { FUN_0c09a808(p, 1, 26); }
void FUN_0c06e13c(void *p) { FUN_0c09a808(p, 1, 19); }
