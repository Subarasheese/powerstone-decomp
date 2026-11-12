/* @unit 0c0a0b78-0c0a0ccc */
struct O { char p0[32]; float f32; float f36; float f40; };
struct S {
    char c0[3]; char c3; char p4[28]; float f32, f36, f40; char p44[12];
    float f56, f60, f64, f68, f72, f76;
    char pad[0x2dc - 80]; int i2dc; char pad2[0x2e4 - 0x2e0]; int i2e4;
    char pad3[0x710a - 0x2e8]; char pad4[0x71a8 - 0x710a]; char b71a8, b71a9; char pad5[0x71ba - 0x71aa];
    char b71ba, b71bb, b71bc; char pad6[0x71c8 - 0x71bd]; struct O *o71c8; char pad7[0x721a - 0x71cc];
};
struct S2 { char pad[0x71ba]; char b71ba; char pad0[0x71cc - 0x71bb]; int i71cc; char pad1[0x7225 - 0x71d0]; char b7225; char pad2[0x7236 - 0x7226]; char b7236; };
extern void FUN_0c09a7ba(struct S *p);
extern void FUN_0c09a808(struct S *p, int a, int b);
extern void FUN_0c0a3914(struct S *p, int a);
extern void FUN_0c0a3796(int a, int b);
extern int FUN_0c0ac780(struct O *o, int a, int b);
extern float FUN_0c02651e(struct S *p);
extern void FUN_0c0abe44(struct O *o, int a, int b);
extern char FUN_0c09c6b8(struct S *p);
extern char FUN_0c09cd32(struct S *p);
void FUN_0c0a0b78(struct S *p)
{
    p->b71ba = 41;
    p->b71bc = 2;
    FUN_0c09a7ba(p);
    p->f60 = 0;
    p->f64 = 0;
    p->f56 = 0;
    p->f72 = 0;
    p->f76 = 0;
    p->f68 = 0;
    FUN_0c09a808(p, 2, 207);
    p->b71a8 = p->b71a9 = 1;
    FUN_0c0a3914(p, 15);
    FUN_0c0a3796(p->c3, 14);
    if (p->o71c8) {
        if (FUN_0c0ac780(p->o71c8, 11, p->c3)) {
            p->f32 = p->o71c8->f32;
            p->f40 = p->o71c8->f40;
            p->f36 = p->o71c8->f36 - FUN_0c02651e(p);
            FUN_0c0abe44(p->o71c8, 19, p->c3);
        }
    }
    *(short *)((char *)p + 236) = 20;
    *(short *)((char *)p + 238) = 0;
}
void FUN_0c0a0c36(struct S2 *p)
{
    p->b71ba = 42;
    p->b7225 = 0;
    p->b7236 = 0;
    p->i71cc = 0;
}
char FUN_0c0a0c4c(struct S *p)
{
    volatile char r;
    if (FUN_0c09c6b8(p)) return 0;
    if (*((char *)p + 0x721a)) return 0;
    if (!(p->i2e4 & 4)) return 0;
    if (!(p->i2dc & 0xf0)) return 0;
    if ((r = FUN_0c09cd32(p)) != 0) return r;
    return 0;
}
