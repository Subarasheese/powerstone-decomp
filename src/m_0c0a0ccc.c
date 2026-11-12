/* @unit 0c0a0ccc-0c0a0dd0 */
struct S {
    char c0[3]; char c3; char p4[24]; int i28; char p32[16]; int i48; char p52[4];
    float f56, f60, f64, f68, f72, f76;
    char pad[0x71a8 - 80];
    char b71a8, b71a9; char pad2[0x71ba - 0x71aa]; char b71ba, b71bb, b71bc;
};
extern void FUN_0c09a808(struct S *p, int a, int b);
extern int FUN_0c09db78(struct S *p);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
extern void FUN_0c0a3796(int a, int b);
extern void FUN_0c09b7a4(void *p, int a);
extern void FUN_0c04a13c(struct S *p);
void FUN_0c0a0ccc(struct S *p)
{
    p->b71ba = 9;
    if (p->b71bc != 2) {
        FUN_0c09a808(p, 2, 109);
    } else {
        FUN_0c09a808(p, 2, 113);
        p->f60 /= 2.0f;
    }
    p->b71a8 = p->b71a9 = 1;
    if (p->b71bb != 9) p->i48 = FUN_0c09db78(p);
    p->f56 = FUN_0c0df4d0(0x1c000 - p->i48) * 10.0f;
    p->f64 = FUN_0c0dfa50(0x1c000 - p->i48) * 10.0f;
    p->f68 = -p->f56 / 15.0f;
    p->f76 = -p->f64 / 15.0f;
    p->f60 = p->f72 = 0;
    *(short *)((char *)p + 236) = 15;
    FUN_0c0a3796(p->c3, 51);
    FUN_0c09b7a4(p, 10);
    FUN_0c09b7a4((void *)p->i28, 6);
    FUN_0c04a13c(p);
}
