/* Straight-line functions with calls and guards (batch gen_fa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c11035c(int, int, int);
int FUN_0c110462(int, int);
int kmiCopyToPVRMemory(int, int, int);
int FUN_0c1104c8(int a4, int a5, int a6, Stk2 s);

int FUN_0c1104c8(int a4, int a5, int a6, Stk2 s)
{
    int stk[48];
    int t1;
    register int t14;
    register int t15;
    register int t29;
    register int t61;
    register int t62;
    register int t63;
    register int t67;
    register int t68;
    register int t69;
    register int t197;
    int t71;
    register int t72;
    register int t83;
    register int t98;
    register int t100;
    register int t101;
    register int t103;
    register int t106;
    register int t151;
    register int t157;
    int t22;
    register int t27;
    register int t91;
    register int t92;
    register int t93;
    register int t94;
    register int t194;
    register int t190;
    register int t191;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    t1 = 0x0;
    if (((((struct o0_int *)0xC817184)->v)) == 1) {
        t1 = 0x1;
    }
    if ((*(int *)0xC8171CC) == 0) {
        FUN_0c11035c((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), s.w[0]);
    }
    t14 = *(int *)(((int)stk + 0));
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t14 * t15);
    *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 8))) * (((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1)) + (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC817428))));
    if ((((*(int *)0xC816FC8) & 32) != 0) && (t22 = (((struct o8_int *)0xC817414)->v), t22 != 0)) {
        *(unsigned int *)(((int)stk + 20)) = (FUN_0c110462(((*(int *)(((0xC817424 + (((s.w[0] << 2) << 2) << 1)) + 0x4))) + ((((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1) << 2)), (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC817424)))));
        t29 = 0x0;
        if ((((((struct o0_int *)0xC817468)->v)) == 0) && ((t27 = (((struct o8_int *)0xC817468)->v), t27 != 0) && (t1 != 0))) {
            t29 = 0x1;
        }
        *(unsigned int *)(((int)stk + 80)) = t29;
    }
    if (((((struct o0_int *)0xC817468)->v)) == 0) {
        *(unsigned int *)(((int)stk + 76)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 76)) = 0x0;
    }
    if (((((struct o4_int *)0xC817468)->v)) == 0) {
        *(unsigned int *)(((int)stk + 92)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 92)) = 0x0;
    }
    if (((((struct o8_int *)0xC817468)->v)) == 0) {
        *(unsigned int *)(((int)stk + 72)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 72)) = 0x0;
    }
    if (((((struct oC_int *)0xC817468)->v)) == 0) {
        *(unsigned int *)(((int)stk + 84)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 84)) = 0x0;
    }
    if (((((struct o10_int *)0xC817468)->v)) == 0) {
        *(unsigned int *)(((int)stk + 88)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 88)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 56)) = ((*(int *)((0xC3476D8 + (((((struct o0_int *)0xC817468)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)((0xC3476D8 + (((((struct o4_int *)0xC817468)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 60)) = ((*(int *)((0xC3476D8 + (((((struct o8_int *)0xC817468)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)((0xC3476D8 + (((((struct oC_int *)0xC817468)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 68)) = ((*(int *)((0xC3476D8 + (((((struct o10_int *)0xC817468)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC817430)));
    t61 = *(int *)(((int)stk + 4));
    t62 = *(int *)((0xC3476D8 + (((((struct o0_int *)0xC817468)->v)) << 2)));
    t63 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 24)) = (((t62 * t61) << 2) + t63);
    *(unsigned int *)(((int)stk + 36)) = ((((t62 * t61) << 2) + t63) + (((*(int *)((0xC3476D8 + (((((struct o4_int *)0xC817468)->v)) << 2)))) * t61) << 2));
    t67 = *(int *)((0xC3476D8 + (((((struct o8_int *)0xC817468)->v)) << 2)));
    t68 = *(int *)(((int)stk + 36));
    *(unsigned int *)(((int)stk + 32)) = (((t67 * t61) << 2) + t68);
    t69 = (((struct oC_int *)0xC817468)->v);
    *(unsigned int *)(((int)stk + 40)) = ((((t67 * t61) << 2) + t68) + (((*(int *)((0xC3476D8 + (t69 << 2)))) * t61) << 2));
    *(unsigned int *)(((int)stk + 44)) = (t61 - 1);
    *(unsigned int *)(((int)stk + 52)) = ((t1 & 0x1) << 29);
    t197 = (t69 << 2);
    if ((unsigned int)0x0 >= (unsigned int)t61) {
    } else {
        t71 = 0x0;
        t72 = 0x0;
        for (;;) {
            if (s.w[1] != 0) {
                if (s.w[1] != 1) {
                } else {
                    t71 = 0xC817414;
                    *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t72 % (unsigned int)(*(int *)((t71 + 0x0)))));
                    *(unsigned int *)(((int)stk + 8)) = ((int)((unsigned int)t72 / (unsigned int)(*(int *)((t71 + 0x0)))));
                }
            } else {
                t71 = 0xC0E6DB4;
                t71 = 0xC817418;
                *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t72 / (unsigned int)((((struct o4_int *)0xC817414)->v))));
                t83 = *(int *)((t71 + 0x0));
                t71 = 0xC0E6F24;
                *(unsigned int *)(((int)stk + 8)) = ((int)((unsigned int)t72 % (unsigned int)t83));
            }
            t71 = 0xC817188;
            t98 = 0x0;
            if (((*(int *)((t71 + 0x0))) == 1) && ((t91 = *(int *)(((int)stk + 16)), t92 = (((struct o8_int *)0xC817184)->v), (unsigned int)t92 < (unsigned int)t91) || (t93 = *(int *)(((int)stk + 8)), t94 = (((struct oC_int *)0xC817184)->v), (unsigned int)t94 < (unsigned int)t93))) {
                t98 = 0x80000000;
            }
            t71 = ((((struct o0_int *)0xC817414)->v));
            t100 = *(int *)(((int)stk + 8));
            t101 = *(int *)(((int)stk + 16));
            t103 = (t100 * t71);
            t71 = (*(int *)(((int)stk + 44)));
            t106 = ((((t72 == t71)) ? 1 : 0) & 0x1);
            t71 = ((int)(((unsigned int)t106 >> 1) | ((unsigned int)t106 << 31)));
            t71 = (t71 | ((t100 & 0x3F) << 8));
            t71 = (t71 | ((t101 & 0x3F) << 2));
            t71 = (t71 | (*(int *)(((int)stk + 52))));
            *(unsigned int *)(((int)stk + 168)) = t71;
            t71 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)(((int)stk + 172)) = (((((*(int *)(((int)stk + 56))) * (t103 + t101)) + t71) | (*(int *)(((int)stk + 76)))) | t98);
            *(unsigned int *)(((int)stk + 176)) = (((((*(int *)(((int)stk + 64))) * (t103 + t101)) + (*(int *)(((int)stk + 24)))) | (*(int *)(((int)stk + 92)))) | t98);
            t71 = (*(int *)(((int)stk + 60)));
            t71 = (t71 * (t103 + t101));
            t71 = (t71 + (*(int *)(((int)stk + 36))));
            t71 = (t71 | (*(int *)(((int)stk + 72))));
            t71 = (t71 | t98);
            *(unsigned int *)(((int)stk + 180)) = t71;
            t71 = (*(int *)(((int)stk + 32)));
            *(unsigned int *)(((int)stk + 184)) = (((((*(int *)(((int)stk + 48))) * (t103 + t101)) + t71) | (*(int *)(((int)stk + 84)))) | t98);
            if ((*(int *)0xC3476E8) != 0) {
                *(unsigned int *)(((int)stk + 188)) = (*(int *)(((int)stk + 180)));
            } else {
                t71 = (*(int *)(((int)stk + 40)));
                *(unsigned int *)(((int)stk + 188)) = (((((*(int *)(((int)stk + 68))) * (t103 + t101)) + t71) | (*(int *)(((int)stk + 88)))) | t98);
            }
            t71 = ((((struct o10_int *)0xC817184)->v));
            if (t71 != 0) {
                t71 = 0xC817198;
                if ((*(int *)((t71 + 0x0))) == 1) {
                    (((struct oB8_uint *)(((int)stk + 0)))->v) = (*(int *)(((int)stk + 176)));
                } else {
                    *(unsigned int *)(((int)stk + 176)) = (*(int *)(((int)stk + 184)));
                }
            }
            t71 = 0xC816FC8;
            if (((*(int *)((t71 + 0x0))) & 32) == 0) {
                t194 = (kmiCopyToPVRMemory((((((t72 << 1) + t72) << 2) << 1) + (*(int *)(((int)stk + 12)))), (0xA8 + ((int)stk + 0)), 0x18));
            } else {
                t151 = *(int *)(((int)stk + 168));
                if (((((struct o8_int *)0xC817414)->v)) == 0) {
                    *(unsigned int *)(((int)stk + 144)) = t151;
                    *(unsigned int *)(((int)stk + 168)) = ((*(int *)(((int)stk + 168))) & 0x7FFFFFFF);
                    t71 = ((*(int *)(((int)stk + 168))) & 0xBFFFFFFF);
                    t71 = (t71 | 0x10000000);
                    *(unsigned int *)(((int)stk + 168)) = t71;
                    t71 = (*(int *)(((int)stk + 144)));
                    t71 = (t71 | 0x40000000);
                    *(unsigned int *)(((int)stk + 144)) = t71;
                    t71 = 0xEFFFFFFF;
                    (((struct o90_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 144))) & t71);
                    *(unsigned int *)(((int)stk + 148)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    t157 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 0)) = (((((t72 << 1) + t72) << 2) << 2) + t157);
                    kmiCopyToPVRMemory((((((t72 << 1) + t72) << 2) << 2) + t157), (0xA8 + ((int)stk + 0)), 0x18);
                    t190 = ((*(int *)(((int)stk + 0))) + 0x18);
                    t191 = (0x90 + ((int)stk + 0));
                } else {
                    t71 = 0xA8;
                    *(unsigned int *)(((int)stk + 144)) = t151;
                    *(unsigned int *)(((int)stk + 120)) = t151;
                    *(unsigned int *)(((int)stk + 96)) = t151;
                    t71 = (t71 + ((int)stk + 0));
                    *(unsigned int *)(((int)stk + 168)) = ((*(int *)(((int)stk + 168))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 144)) = ((*(int *)(((int)stk + 144))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 120)) = ((*(int *)(((int)stk + 120))) & 0x7FFFFFFF);
                    *(unsigned int *)((t71 + 0x0)) = ((*(int *)(((int)stk + 168))) & 0xBFFFFFFF);
                    t71 = (*(int *)(((int)stk + 144)));
                    t71 = (t71 | 0x40000000);
                    *(unsigned int *)(((int)stk + 144)) = t71;
                    t71 = (*(int *)(((int)stk + 120)));
                    t71 = (t71 | 0x40000000);
                    *(unsigned int *)(((int)stk + 120)) = t71;
                    t71 = (*(int *)(((int)stk + 96)));
                    t71 = (t71 | 0x40000000);
                    *(unsigned int *)(((int)stk + 96)) = t71;
                    t71 = (*(int *)(((int)stk + 168)));
                    t71 = (t71 | 0x10000000);
                    *(unsigned int *)(((int)stk + 168)) = t71;
                    t71 = (*(int *)(((int)stk + 144)));
                    t71 = (t71 | 0x10000000);
                    *(unsigned int *)(((int)stk + 144)) = t71;
                    t71 = (*(int *)(((int)stk + 120)));
                    t71 = (t71 | 0x10000000);
                    *(unsigned int *)(((int)stk + 120)) = t71;
                    t71 = 0xEFFFFFFF;
                    (((struct o60_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 96))) & t71);
                    (((struct o90_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 144))) & 0xDFFFFFFF);
                    if ((*(int *)(((int)stk + 80))) != 0) {
                        *(unsigned int *)(((int)stk + 172)) = (*(int *)(((int)stk + 20)));
                    }
                    *(unsigned int *)(((int)stk + 148)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    t71 = (*(int *)(((int)stk + 20)));
                    *(unsigned int *)(((int)stk + 156)) = t71;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 124)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 128)) = 0x80000000;
                    t71 = (*(int *)(((int)stk + 180)));
                    *(unsigned int *)(((int)stk + 132)) = t71;
                    *(unsigned int *)(((int)stk + 136)) = (*(int *)(((int)stk + 184)));
                    *(unsigned int *)(((int)stk + 140)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 180)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 184)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 100)) = 0x80000000;
                    t71 = t72;
                    t71 = (t71 << 1);
                    *(unsigned int *)(((int)stk + 104)) = 0x80000000;
                    t71 = (t71 + t72);
                    *(unsigned int *)(((int)stk + 108)) = 0x80000000;
                    t71 = (t71 << 2);
                    t71 = (t71 << 2);
                    *(unsigned int *)(((int)stk + 112)) = 0x80000000;
                    t71 = (t71 << 1);
                    *(unsigned int *)(((int)stk + 116)) = 0x80000000;
                    t71 = (t71 + (*(int *)(((int)stk + 12))));
                    *(unsigned int *)(((int)stk + 0)) = t71;
                    kmiCopyToPVRMemory(t71, (0xA8 + ((int)stk + 0)), 0x18);
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 0))) + 0x18), (0x90 + ((int)stk + 0)), 0x18);
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 0))) + 0x30), (((int)stk + 0) + 0x78), 0x18);
                    t190 = ((*(int *)(((int)stk + 0))) + 0x48);
                    t191 = (((int)stk + 0) + 0x60);
                }
                t194 = (kmiCopyToPVRMemory(t190, t191, 0x18));
            }
            t71 = (*(int *)(((int)stk + 4)));
            t72 = (t72 + 0x1);
            if ((unsigned int)t72 < (unsigned int)t71) continue;
            break;
        }
        t197 = t194;
    }
    return t197;
}
