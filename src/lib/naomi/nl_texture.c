/* nl texture/strip slot management (0c0dd310-0c0dd600) */

struct at0_int { int value; };
struct at4c_int { char pad[0x4C]; int value; };
struct at8_int { char pad[0x8]; int value; };
int FUN_0c0dd880(int, int, int);
int FUN_0c0ddb40(void);
int FUN_0c0ddd10(int, int);
int FUN_0c0dde00(int);
int FUN_0c0ddee0(int);
int FUN_0c0eacf0(void);
int FUN_0c0eae20(int, int);
int FUN_0c0eaef0(int, int);
int FUN_0c0eb0c0(int, int, int);

int FUN_0c0dd320(int arg0, int arg1, int arg2, int arg3);

void FUN_0c0dd310(void)
{
    *(unsigned int *)0xC7FD490 = 0x0;
    *(unsigned int *)0xC7F87C0 = 0x0;
}

int FUN_0c0dd320(int arg0, int arg1, int arg2, int arg3)
{
    int stack_buf[5];

    register int r1_tmp;
    register int r2_tmp;
    register int r3_tmp;
    register int t_flag;
    register int tmp_0;
    register int tmp_1;
    register int tmp_2;
    register int tmp_3;
    register int tmp_4;
    register int tmp_5;
    register int tmp_6;
    register int tmp_7;
    register int tmp_8;
    tmp_7 = arg0;
    tmp_5 = arg1;
    tmp_6 = arg2;
    tmp_0 = arg3;
    *(unsigned int *)(((int)stack_buf + 16)) = tmp_5;
    *(unsigned int *)(((int)stack_buf + 8)) = 0x0;
    *(unsigned int *)(((int)stack_buf + 12)) = 0x0;
    *(unsigned int *)((tmp_0 + 0x0)) = 0x0;
    tmp_0 = (tmp_0);
    tmp_1 = (0x0);
    if ((tmp_6 != 0)) goto L_C0DD370;
    if (((int)(*(int *)((tmp_7 + 0x0))) < 0)) goto L_C0DD350;
    if (((*(int *)((tmp_7 + 0x18))) != 0)) goto L_C0DD360;
    L_C0DD350:;
    tmp_7 = (0x0);
    L_C0DD5AE:;
    return tmp_7;
    L_C0DD360:;
    tmp_2 = ((tmp_7 + 0x18));
    L_C0DD372:;
    tmp_6 = *(int *)((tmp_2 + 0x20));
    *(unsigned int *)(((int)stack_buf + 4)) = tmp_6;
    tmp_3 = tmp_2;
    tmp_4 = (0x1);
    tmp_2 = ((tmp_2 + 0x50));
    tmp_5 = (tmp_6);
    tmp_3 = tmp_3;
    if (((int)tmp_6 < 0)) goto L_C0DD3FA;
    tmp_8 = *(int *)0xC7FD490;
    tmp_7 = (0xC7F87C8);
    tmp_6 = ((((tmp_5 + tmp_8) << 2) << 1));
    if (((*(int *)(((((((struct at8_int *)0xC7F87C0)->value)) + (((tmp_5 + tmp_8) << 2) << 1)) + 0x0))) != 0)) goto L_C0DD3AA;
    tmp_5 = *(int *)((tmp_7 + 0x0));
    *(int *)((int)stack_buf + 0) = (0x4 + (tmp_5 + tmp_6));
    *(unsigned int *)(((0x4 + (tmp_5 + tmp_6)) + 0x0)) = (FUN_0c0ddb40());
    L_C0DD3AA:;
    tmp_5 = (((struct at8_int *)0xC7F87C0)->value);
    *(unsigned int *)(((tmp_5 + tmp_6) + 0x0)) = ((*(int *)(((tmp_5 + tmp_6) + 0x0))) + 0x1);
    tmp_7 = *(int *)(((((((struct at8_int *)0xC7F87C0)->value)) + tmp_6) + 0x4));
    tmp_8 = *(int *)0xC7FC4F0;
    tmp_6 = (((tmp_7 * 0x3C) + tmp_8));
    tmp_5 = (tmp_7);
    if (((*(int *)((((tmp_7 * 0x3C) + tmp_8) + 0x2C))) != 0)) goto L_C0DD3F4;
    tmp_7 = *(int *)(((int)stack_buf + 4));
    tmp_8 = *(int *)(((int)stack_buf + 16));
    *(unsigned int *)(((int)stack_buf + 8)) = (((tmp_7 << 2) << 2) + tmp_8);
    *(unsigned int *)(((int)stack_buf + 12)) = ((*(int *)(((int)stack_buf + 12))) | (FUN_0c0dd880((((tmp_7 << 2) << 2) + tmp_8), tmp_5, (*(int *)(((((tmp_7 << 2) << 2) + tmp_8) + 0x8))))));
    FUN_0c0dde00(tmp_5);
    *(unsigned int *)((tmp_6 + 0x38)) = tmp_5;
    *(unsigned int *)(((int)stack_buf + 8)) = tmp_4;
    L_C0DD3F4:;
    *(unsigned int *)((tmp_6 + 0x2C)) = ((*(int *)((tmp_6 + 0x2C))) + 0x1);
    L_C0DD3FA:;
    if (((int)(*(int *)(((int)stack_buf + 4))) >= 0)) goto L_C0DD40E;
    *(unsigned int *)((tmp_3 + 0x0)) = ((*(int *)((tmp_3 + 0x0))) | tmp_4);
    *(unsigned int *)((tmp_3 + 0x4)) = ((*(int *)((tmp_3 + 0x4))) | 0x400000);
    L_C0DD40E:;
    *(unsigned int *)((tmp_3 + 0x0)) = (((*(int *)((tmp_3 + 0x0))) & 0xFFFCFFFF) | (((*(int *)0xC3468EC) << 16) | 0x8C0000));
    if (((int)tmp_5 < 0)) goto L_C0DD440;
    FUN_0c0ddd10(tmp_3, tmp_5);
    L_C0DD446:;
    tmp_7 = (0x7);
    if (((*(int *)0xC346B68) != 0)) goto L_C0DD510;
    tmp_6 = (((struct at0_int *)0xC7F87C0)->value);
    tmp_7 = ((tmp_7 & ((unsigned int)(*(int *)((tmp_3 + 0xC))) >> 27)));
    tmp_5 = (tmp_6);
    if ((tmp_6 == 0)) goto L_C0DD534;
    if ((tmp_7 == 5)) goto L_C0DD46C;
    if ((tmp_7 != 6)) goto L_C0DD534;
    L_C0DD46C:;
    tmp_8 = *(int *)((tmp_3 + 0x3C));
    tmp_7 = (tmp_8);
    tmp_6 = (0xC7FD620);
    if (((int)tmp_8 >= (int)(*(short *)0xC7FD624))) goto L_C0DD534;
    tmp_8 = *(int *)((tmp_6 + 0x18));
    tmp_6 = (((((tmp_7 << 1) + tmp_7) << 2) + tmp_5));
    tmp_5 = ((tmp_8 + ((tmp_7 << 2) << 1)));
    if (((*(short *)(((tmp_8 + ((tmp_7 << 2) << 1)) + 0x4))) == 0)) goto L_C0DD4A0;
    *(unsigned short *)((tmp_5 + 0x4)) = ((*(short *)((tmp_5 + 0x4))) + 0x1);
    tmp_4 = ((*(short *)((tmp_5 + 0x0))));
    L_C0DD4F2:;
    *(unsigned int *)((tmp_3 + 0xC)) = (((*(int *)((tmp_3 + 0xC))) & 0xF81FFFFF) | (tmp_4 << 21));
    L_C0DD534:;
    FUN_0c0eacf0();
    tmp_4 = (((struct at4c_int *)(tmp_3))->value);
    tmp_3 = *(int *)(((tmp_2 + tmp_4) + 0x0));
    tmp_2 = ((tmp_2 + tmp_4));
    tmp_7 = (tmp_3);
    if ((tmp_3 != 0)) goto L_C0DD5A0;
    *(unsigned int *)((tmp_0 + 0x0)) = tmp_1;
    L_C0DD5AC:;
    tmp_7 = ((*(int *)(((int)stack_buf + 12))));
    goto L_C0DD5AE;
    L_C0DD5A0:;
    if (((*(int *)(((int)stack_buf + 8))) != 0)) goto L_C0DD5AA;
    goto L_C0DD372;
    L_C0DD5AA:;
    *(unsigned int *)((tmp_0 + 0x0)) = tmp_2;
    goto L_C0DD5AC;
    L_C0DD4A0:;
    *(unsigned char *)((tmp_5 + 0x2)) = (*(signed char *)((tmp_6 + 0x2)));
    *(unsigned char *)((tmp_5 + 0x3)) = ((int)((*(int *)((tmp_6 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((tmp_5 + 0x4)) = tmp_4;
    *(unsigned short *)((tmp_5 + 0x6)) = tmp_7;
    tmp_4 = *(int *)((tmp_6 + 0x8));
    *(unsigned int *)(((int)stack_buf + 4)) = tmp_4;
    tmp_7 = FUN_0c0eae20((*(short *)((tmp_6 + 0x2))), tmp_4);
    tmp_4 = (tmp_7);
    if (((int)tmp_7 < 0)) goto L_C0DD4F0;
    *(unsigned short *)((tmp_5 + 0x0)) = tmp_4;
    FUN_0c0eaef0(tmp_4, (*(int *)(((int)stack_buf + 4))));
    FUN_0c0eb0c0(((tmp_4 << 2) << 2), (*(int *)((tmp_6 + 0x4))), (*(int *)(((int)stack_buf + 4))));
    goto L_C0DD4F2;
    L_C0DD4F0:;
    tmp_4 = (tmp_1);
    goto L_C0DD4F2;
    L_C0DD510:;
    tmp_4 = *(int *)((tmp_3 + 0xC));
    tmp_5 = (tmp_7 & ((unsigned int)tmp_4 >> 27)) == 5;
    tmp_7 = ((tmp_7 & ((unsigned int)tmp_4 >> 27)));
    if (tmp_5) goto L_C0DD524;
    if ((tmp_7 != 6)) goto L_C0DD534;
    L_C0DD524:;
    *(unsigned int *)((tmp_3 + 0xC)) = (((*(int *)((tmp_3 + 0xC))) & 0xF81FFFFF) | ((*(int *)((tmp_3 + 0x3C))) << 21));
    goto L_C0DD534;
    L_C0DD440:;
    FUN_0c0ddee0(tmp_3);
    goto L_C0DD446;
    L_C0DD370:;
    tmp_2 = (tmp_6);
    goto L_C0DD372;
}

int FUN_0c0dd5d0(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t5 = *(int *)(((int)stk + 0));
        t0 = (t0 | (FUN_0c0dd320((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 0))), ((int)stk + 0))));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}
