/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o18_int { char p[0x18]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o58_int { char p[0x58]; int v; };
int FUN_0c0f7b60(int, int, int, int, int);
int FUN_0c0f94a0(int, int, int, int, int);
int FUN_0c0f9a20(int, int);
int FUN_0c0fddce(int);
int kmActivateFrameBuffer(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int FUN_0c0fac00(int a4);
int FUN_0c10ab6c(int a4, int a5, int a6);

int FUN_0c0fac00(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    v0_1 = (0x2);
    v0_0 = (0xC803D78);
    if ((v0_5 != 1)) goto L_C0FAC36;
    v0_2 = (*(int *)((v0_0 + 0x10)));
    *(int *)((int)stk + 0) = v0_2;
    v0_2 = FUN_0c0f94a0((*(int *)((v0_0 + 0x0))), (*(int *)((v0_0 + 0x4))), (*(int *)((v0_0 + 0x8))), (*(int *)((v0_0 + 0xC))), v0_2);
    v0_5 = (v0_2);
    if ((v0_2 != 0)) goto L_C0FAC84;
    L_C0FAC36:;
    if (((*(int *)(((int)stk + 4))) != 2)) goto L_C0FAC4C;
    v0_2 = FUN_0c0f9a20((*(int *)((v0_0 + 0x0))), ((((struct o58_int *)(v0_0))->v)));
    v0_5 = (v0_2);
    if ((v0_2 != 0)) goto L_C0FAC84;
    L_C0FAC4C:;
    v0_5 = ((v0_0 + 0x1C));
    v0_2 = (0x1);
    if (((*(int *)(((v0_0 + 0x1C) + 0x0))) != (*(int *)(((v0_0 + 0x1C) + 0x10))))) goto L_C0FAC5C;
    v0_1 = (v0_2);
    L_C0FAC5C:;
    v0_3 = (0x0);
    v0_4 = (0x0);
    if (((unsigned int)0x0 >= (unsigned int)v0_1)) goto L_C0FACC8;
    v0_5 = (0xC0F7B60);
    L_C0FAC68:;
    v0_5 = (*(int *)((((v0_0 + 0x1C) + v0_4) + 0xC)));
    *(int *)((int)stk + 0) = v0_5;
    v0_6 = FUN_0c0f7b60((*(int *)((((v0_0 + 0x1C) + v0_4) + 0x0))), (*(int *)((((v0_0 + 0x1C) + v0_4) + 0x4))), (*(int *)((((v0_0 + 0x1C) + v0_4) + 0x8))), (*(int *)((v0_0 + 0x18))), v0_5);
    v0_5 = (v0_6);
    if (!((v0_6 == 0))) goto L_C0FAC84;
    v0_5 = (unsigned int)(v0_3 + 0x1) < (unsigned int)v0_1;
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((v0_4 + 0x10));
    if (v0_5) goto L_C0FAC68;
    goto L_C0FACC8;
    L_C0FAC84:;
    v0_0 = (v0_5);
    L_C0FAD6C:;
    return v0_0;
    L_C0FACC8:;
    v0_0 = kmActivateFrameBuffer((*(int *)((v0_0 + 0x3C))), ((((struct o40_int *)(v0_0))->v)), (*(int *)((v0_0 + 0x18))), ((((struct o44_int *)(v0_0))->v)));
    v0_1 = (v0_0);
    if ((v0_0 != 0)) goto L_C0FAD6A;
    if ((((((struct o0_int *)0xC8172FC)->v)) == 1)) goto L_C0FACEE;
    if (((*(int *)0xC3471D4) != 1)) goto L_C0FAD6A;
    L_C0FACEE:;
    (((struct o20_uint *)0xC8172FC)->v) = ((((struct o18_int *)0xC8172FC)->v));
    *(unsigned int *)(((((((struct o18_int *)0xC8172FC)->v)) << 2) + 0xC817304)) = 0x0;
    (((struct o30_uint *)0xC8172FC)->v) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (v0_2 & ((((struct o18_int *)0xC8172FC)->v)));
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    v0_0 = *(int *)(((int)stk + 4));
    kmiWriteRegister(0x124, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817430))));
    kmiWriteRegister(0x12C, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817434))));
    kmiWriteRegister(0x128, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC81743C))));
    kmiWriteRegister(0x130, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817440))));
    kmiWriteRegister(0x164, (*(int *)(((((v0_0 << 2) << 2) << 1) + 0xC817438))));
    kmiWriteRegister(0x144, 0x80000000);
    kmiReadRegister(0x144);
    (((struct o28_uint *)0xC8172FC)->v) = 0x0;
    (((struct o24_uint *)0xC8172FC)->v) = (*(int *)0xC817420);
    v0_0 = (0xC10E184);
    L_C0FAD6A:;
    v0_0 = (v0_1);
    goto L_C0FAD6C;
}

int FUN_0c10ab6c(int a4, int a5, int a6)
{
    int stk[514];
    register int t11;
    register int t18;
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t20;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t11 = a6;
    t18 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        t0 = a4;
        t1 = a6;
        for (;;) {
            kmiCopyFromFrameBuffer((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))), 0x800);
            t4 = 0x40;
            t5 = (((int)stk + 0) + 0x8);
            for (;;) {
                FUN_0c0fddce(t5);
                t5 = (t5 + 0x20);
                FUN_0c0fddce(t5);
                t4 = (t4 - 2);
                t5 = (t5 + 0x20);
                if (t4 == 0) {
                    break;
                }
            }
            kmiCopyToFrameBuffer(t0, (((int)stk + 0) + 0x8), 0x800);
            t1 = (t1 - 0x800);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x800);
            t0 = (t0 + 0x800);
            if ((unsigned int)t1 <= (unsigned int)0x800) {
                break;
            }
        }
        t11 = t1;
        t18 = t0;
    }
    t20 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x8);
    kmiCopyFromFrameBuffer((((int)stk + 0) + 0x8), t20, t11);
    t23 = 0x40;
    t24 = (*(int *)(((int)stk + 4)));
    for (;;) {
        FUN_0c0fddce(t24);
        t24 = (t24 + 0x20);
        FUN_0c0fddce(t24);
        t23 = (t23 - 2);
        t24 = (t24 + 0x20);
        if (t23 == 0) {
            break;
        }
    }
    return (kmiCopyToFrameBuffer(t18, (*(int *)(((int)stk + 4))), t11));
}
