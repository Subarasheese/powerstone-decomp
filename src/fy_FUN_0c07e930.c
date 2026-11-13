/* Per-frame dispatch on the mode byte at +0x721F of the game object: modes 0 and 2 call the handler picked by byte +0x7238 from the table at 0xC337374, the others one handler each (mode 13 also calls FUN_0c039ed8(o, 26) when byte +0x721E is 0), anything out of 0..15 calls FUN_0c0a2080; afterwards sets the flag bytes +0x71A8/+0x71A9. */
struct Obj {
    char pad0[0x71A8];
    char f0;
    char f1;
    char pad1[0x721E - 0x71AA];
    char b721e;
    signed char mode;
    char pad2[0x7238 - 0x7220];
    signed char sel;
};
void FUN_0c063812(struct Obj *o);
void FUN_0c06384a(struct Obj *o);
void FUN_0c063cb2(struct Obj *o);
void FUN_0c063eac(struct Obj *o);
void FUN_0c064152(struct Obj *o);
void FUN_0c064d74(struct Obj *o);
void FUN_0c0652c4(struct Obj *o);
void FUN_0c064744(struct Obj *o);
void FUN_0c065310(struct Obj *o);
void FUN_0c065468(struct Obj *o);
void FUN_0c065694(struct Obj *o);
void FUN_0c039ed8(struct Obj *o, int n);
void FUN_0c06585e(struct Obj *o);
void FUN_0c0658b8(struct Obj *o);
void FUN_0c0a2080(struct Obj *o);
void FUN_0c07e930(struct Obj *o)
{
    switch (o->mode) {
    case 0:
    case 2:
        (*(void (**)(struct Obj *))(0xC337374 + (o->sel << 2)))(o);
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
        if (o->b721e == 0)
            FUN_0c039ed8(o, 26);
        break;
    case 14:
        FUN_0c06585e(o);
        break;
    case 15:
        FUN_0c0658b8(o);
        break;
    default:
        FUN_0c0a2080(o);
        break;
    }
    o->f1 = 1;
    o->f0 = 1;
}
