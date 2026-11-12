/* @unit 0c067a68-0c067bcc */
typedef struct S { char pad[0x719e]; unsigned short s719e; char pad2[0x71aa-0x71a0]; char c71aa; char pad3[0x721f-0x71ab]; char st; char pad4[0x7238-0x7220]; char idx; } S;
typedef void (*FN)(S *);
extern FN g_336958[];
extern void FUN_0c06382e(S *);
extern void FUN_0c063c78(S *);
extern void FUN_0c063d60(S *);
extern void FUN_0c064130(S *);
extern void FUN_0c0645c4(S *);
extern void FUN_0c0652a8(S *);
extern void FUN_0c0652f4(S *);
extern void FUN_0c0649a0(S *);
extern void FUN_0c06544e(S *);
extern void FUN_0c06566a(S *);
extern void FUN_0c0656c4(S *);
extern void FUN_0c06588c(S *);
extern void FUN_0c0671c0(S *);
extern int FUN_0c09a910(S *);
extern void FUN_0c09da1c(S *);
extern void FUN_0c0a2080(S *);
extern void FUN_0c09c422(S *);
void FUN_0c067a68(S *p)
{
    switch (p->st) {
    case 0: case 2:
        g_336958[p->idx](p);
        break;
    case 1: case 3:
        FUN_0c06382e(p);
        break;
    case 4:
        FUN_0c063c78(p);
        break;
    case 5:
        FUN_0c063d60(p);
        break;
    case 6:
        FUN_0c064130(p);
        break;
    case 7:
        FUN_0c0645c4(p);
        break;
    case 8:
        FUN_0c0652a8(p);
        break;
    case 9:
        FUN_0c0652f4(p);
        break;
    case 10:
        FUN_0c0649a0(p);
        break;
    case 11:
        FUN_0c06544e(p);
        break;
    case 12:
        FUN_0c06566a(p);
        break;
    case 13:
        FUN_0c0656c4(p);
        break;
    case 14:
        FUN_0c06588c(p);
        break;
    case 15:
        FUN_0c0671c0(p);
        break;
    }
}
void FUN_0c067b20(S *p)
{
    int r = FUN_0c09a910(p);
    FUN_0c09da1c(p);
    if (p->c71aa) FUN_0c0a2080(p);
}
void FUN_0c067b48(S *p)
{
    if ((char)FUN_0c09a910(p)) {
        FUN_0c0a2080(p);
        return;
    }
    if (p->s719e == 34) FUN_0c09c422(p);
    FUN_0c09da1c(p);
}
