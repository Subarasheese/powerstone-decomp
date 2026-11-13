/* Mode-selection screen state machine for player pl (the state byte is G1[7], its step G1[8]): state 0 resets the screen (a chain of init calls, the 12-byte position from 0xC1525A8 to 0xC7F31BC, timer G2.s10 = 65) and runs as state 1; state 1 counts the timer down and then advances; state 2 steps through its sub-states (wait/animate with FUN_0c0aa69a, FUN_0c0a9d12, FUN_0c0ab5de); state 3 advances and tail-calls FUN_0c0aba84 once the record flag (+116) is 0; any other state bumps G1[6]. */
void FUN_0c058f3a(void);
void FUN_0c058f44(void);
void FUN_0c058fa2(void);
void FUN_0c05f2d4(int a, int b);
int FUN_0c060c88(int a);
void FUN_0c0a32dc(void);
void FUN_0c0a34a4(void);
void FUN_0c0a6c9a(void);
void FUN_0c0a6f5e(int a);
void FUN_0c0a73ca(void);
void FUN_0c0a7478(void);
void FUN_0c0aa3aa(void);
int FUN_0c0a5056(void);
void FUN_0c0db0ca(int a);
void FUN_0c0aa69a(void);
void FUN_0c0a9d12(int a, int b, int c);
void FUN_0c0ab5de(int a);
void FUN_0c0aba84(void);
void FUN_0c0a56d8(signed char pl)
{
    unsigned char *G1 = (unsigned char *)0xC7F2EE0;
    char *G2 = (char *)0xC7F302C;
    char *G3 = (char *)0xC7F2DF0;
    unsigned char *S = G1 + 7;
    unsigned char off = (unsigned short)(pl * 120);
    int *src;
    int *dst;
    unsigned char *sub;
    switch (*S) {
    case 0:
        goto s0;
    case 1:
        goto s1;
    case 2:
        goto s2;
    case 3:
        goto s3;
    default:
        goto sd;
    }
s0:
    *S = *S + 1;
    G1[8] = 0;
    *(char *)(0xC7E40C4 + 0x72D1) = 0;
    *(char *)(0xC7E40C4 + 1) = 0;
    FUN_0c058f3a();
    FUN_0c058f44();
    FUN_0c058fa2();
    FUN_0c05f2d4(1, 0);
    src = (int *)0xC1525A8;
    dst = (int *)0xC7F31BC;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    FUN_0c060c88(6);
    FUN_0c0a32dc();
    FUN_0c0a34a4();
    G2[86] = 0;
    FUN_0c0a6c9a();
    FUN_0c0a6f5e(0);
    FUN_0c0a6f5e(1);
    FUN_0c0a73ca();
    FUN_0c0a7478();
    FUN_0c0aa3aa();
    FUN_0c0a5056();
    FUN_0c0db0ca(3);
    *(short *)(G2 + 10) = 65;
s1:
    *(short *)(G2 + 10) = *(short *)(G2 + 10) - 1;
    if (*(short *)(G2 + 10) >= 0)
        return;
    goto adv;
s2:
    sub = G1 + 8;
    if (*sub == 0) {
        if ((unsigned char)G2[71] == 3) {
            *sub = 99;
            goto s2t;
        }
        *sub = *sub + 1;
        FUN_0c0aa69a();
        *(short *)(G2 + 10) = 70;
        if (G3[off + 86] > 0) {
            FUN_0c0a9d12(pl, G3[off + 86] - 1, 7);
            FUN_0c0ab5de(G3[off + 86]);
        }
        goto s2t;
    }
    if (*sub == 1)
        goto s2t;
    if (G3[off + 86] >= 7)
        goto adv;
    *S = *S + 2;
    return;
s2t:
    *(short *)(G2 + 10) = *(short *)(G2 + 10) - 1;
    if (*(short *)(G2 + 10) > 0)
        return;
    G1[8] = G1[8] + 1;
    return;
adv:
    G1[7] = G1[7] + 1;
    G1[8] = 0;
    return;
s3:
    *S = *S + 1;
    if (G3[off + 116] != 0)
        return;
    FUN_0c0aba84();
    return;
sd:
    G1[6] = G1[6] + 1;
    G1[7] = 0;
}
