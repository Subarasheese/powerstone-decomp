/* INLINE-ASM: hand-written display-list clipper (inputs r4, r9, r11 state, XMTRX and the T flag returned by its sibling helpers; jump targets and bsr calls between helpers); no C form exists. The bsr calls became mov.l/jsr through r14 (saved and restored) because the C is linked far from them. */
/* Clips one strip of vertices at r4 against the view volume: tests each vertex with FUN_0c0e7be0 (outcode in T and r9), and by the accumulated outcode sends, clips or skips it through FUN_0c0e7c80 / 7cc0 / 7ce0 / 7d20 / 7d60. */
extern void FUN_0c0e7be0(void);
extern void FUN_0c0e7c80(void);
extern void FUN_0c0e7cc0(void);
extern void FUN_0c0e7d60(void);
extern void FUN_0c0e7d20(void);
extern void FUN_0c0e7ce0(void);
#pragma inline_asm(FUN_0c0e7960)
void FUN_0c0e7960(void)
{
    .IMPORT _FUN_0c0e7be0
    .IMPORT _FUN_0c0e7c80
    .IMPORT _FUN_0c0e7cc0
    .IMPORT _FUN_0c0e7d60
    .IMPORT _FUN_0c0e7d20
    .IMPORT _FUN_0c0e7ce0
    mov.l r14,@-r15
    mov.l r10,@-r15
    mov.l r11,@-r15
    sts.l pr,@-r15
    mov.l @r4+,r3
Lc0e7968:
    mov #0,r11
    mov.l PA_FUN_0c0e7be0,r14
    jsr @r14
    mov #0,r9
    bt/s Lc0e7992
    rotcl r9
    mov.l PA_FUN_0c0e7c80,r14
    jsr @r14
    add #1,r11
    mov.l PA_FUN_0c0e7be0,r14
    jsr @r14
    nop
    bf/s LX1
    rotcl r9
    bra Lc0e7a06
    nop
LX1:
    mov.l PA_FUN_0c0e7c80,r14
    jsr @r14
    add #1,r11
Lc0e7982:
    mov.l PA_FUN_0c0e7be0,r14
    jsr @r14
    nop
    bf/s LX2
    rotcl r9
    bra Lc0e7a86
    nop
LX2:
    mov.l PA_FUN_0c0e7c80,r14
    jsr @r14
    add #1,r11
    bf Lc0e7982
    bf LX3
    bra Lc0e79ea
    nop
LX3:
Lc0e7992:
    dt r3
    add #1,r11
    mov.l PA_FUN_0c0e7be0,r14
    jsr @r14
    dt r3
    bt/s LX4
    rotcl r9
    bra Lc0e7a3c
    nop
LX4:
Lc0e799e:
    mov.l @r4,r0
    mov r4,r14
    tst #1,r0
    add #32,r4
    bf/s Lc0e79b0
    fldi1 fr7
    add #-24,r4
    mov.l @(4,r14),r14
    add r4,r14
Lc0e79b0:
    fmov.s @r14+,fr4
    fmov.s @r14+,fr5
Lc0e79b4:
    fmov.s @r14+,fr6
    mov #32,r1
    mov.l @r4,r0
    add #32,r4
    pref @r4
    ftrv xmtrx,fv4
    tst #1,r0
    add #-32,r4
    bf/s Lc0e79d0
    mov r4,r14
    mov #8,r1
    mov.l @(4,r14),r14
    add #8,r14
    add r4,r14
Lc0e79d0:
    flds fr7,fpul
    sts fpul,r0
    cmp/hi r0,r12
    add #1,r11
    bt/s LX5
    rotcl r9
    bra Lc0e7a78
    nop
LX5:
    dt r3
    fldi1 fr7
    bt Lc0e79ea
    add r1,r4
    fmov.s @r14+,fr4
    bra Lc0e79b4
    fmov.s @r14+,fr5
Lc0e79ea:
    mov.l @r4+,r0
    cmp/pl r0
    bf/s Lc0e79f8
    tst #128,r0
    bt/s LX6
    mov.l @r4+,r3
    bra Lc0e7968
    nop
LX6:
    add #-4,r4
Lc0e79f8:
    lds.l @r15+,pr
    mov #1,r0
    mov.l @r15+,r11
    add #-4,r4
    mov.l @r15+,r10
    or r0,r12
    rts
    mov.l @r15+,r14
    .ALIGN 4
PA_FUN_0c0e7be0:
    .DATA.L _FUN_0c0e7be0
PA_FUN_0c0e7c80:
    .DATA.L _FUN_0c0e7c80
PA_FUN_0c0e7cc0:
    .DATA.L _FUN_0c0e7cc0
PA_FUN_0c0e7d60:
    .DATA.L _FUN_0c0e7d60
PA_FUN_0c0e7d20:
    .DATA.L _FUN_0c0e7d20
PA_FUN_0c0e7ce0:
    .DATA.L _FUN_0c0e7ce0
Lc0e7a06:
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    dt r3
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a14
    add #-24,r4
Lc0e7a14:
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a1e
    add #-24,r4
Lc0e7a1e:
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    nop
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    mov #0,r11
    mov #1,r11
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    mov #0,r0
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0e7a38
    add #24,r4
Lc0e7a38:
    bra Lc0e7ad4
    nop
Lc0e7a3c:
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    mov #1,r11
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a4a
    add #-24,r4
Lc0e7a4a:
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a54
    add #-24,r4
Lc0e7a54:
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    nop
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    mov #0,r11
    mov #1,r11
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    mov #1,r0
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0e7a74
    add #24,r4
Lc0e7a74:
    bra Lc0e7ad4
    nop
Lc0e7a78:
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a82
    add #-24,r4
Lc0e7a82:
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    nop
Lc0e7a86:
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    nop
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a94
    add #-24,r4
Lc0e7a94:
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7a9e
    add #-24,r4
Lc0e7a9e:
    add #-8,r4
    mov.l @(4,r4),r0
    tst #1,r0
    bt Lc0e7aa8
    add #-24,r4
Lc0e7aa8:
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    nop
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    add #-2,r11
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    nop
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    add #1,r11
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0e7ac2
    add #24,r4
Lc0e7ac2:
    add #1,r11
    mov r12,r0
    tst #1,r0
    bt/s Lc0e7aea
    mov r9,r0
    mov.l PB_FUN_0c0e7ce0,r14
    jsr @r14
    nop
    bra Lc0e7aea
    mov r9,r0
Lc0e7ad4:
    mov.l PB_FUN_0c0e7be0,r14
    jsr @r14
    add #1,r11
    mov.l PB_FUN_0c0e7cc0,r14
    jsr @r14
    rotcl r9
    mov r12,r0
    tst #1,r0
    bt/s Lc0e7aea
    mov r9,r0
    mov.l PB_FUN_0c0e7ce0,r14
    jsr @r14
    nop
    mov r9,r0
Lc0e7aea:
    and #7,r0
    shll2 r0
    braf r0
    nop
    nop
    nop
    bra Lc0e7b12
    nop
    bra Lc0e7b30
    nop
    bra Lc0e7b4a
    nop
    bra Lc0e7b5a
    nop
    bra Lc0e7b7a
    nop
    bra Lc0e7b88
    nop
    nop
    nop
Lc0e7b12:
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-2,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    add #-1,r0
    mov r11,r0
    dt r3
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
    bt LX7
    bra Lc0e7ad4
    nop
LX7:
    bra Lc0e79ea
    nop
Lc0e7b30:
    clrt
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    mov r11,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
    dt r3
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    mov r11,r0
    bt LX8
    bra Lc0e7ad4
    nop
LX8:
    bra Lc0e79ea
    nop
Lc0e7b4a:
    mov r11,r0
    sett
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-2,r0
    dt r3
    bt Lc0e7b76
    bra Lc0e799e
    nop
Lc0e7b5a:
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-2,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    add #-1,r0
    dt r3
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    mov r11,r0
    bt Lc0e7b76
    bra Lc0e7982
    add #1,r11
Lc0e7b76:
    bra Lc0e79ea
    nop
Lc0e7b7a:
    mov r11,r0
    dt r3
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
    bt LX9
    bra Lc0e7ad4
    nop
LX9:
    bra Lc0e79ea
    nop
Lc0e7b88:
    mov r11,r0
    tst #1,r0
    bt Lc0e7baa
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-2,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
    bra Lc0e7bba
    nop
Lc0e7baa:
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-2,r0
    mov r11,r0
    clrt
    mov.l PB_FUN_0c0e7d60,r14
    jsr @r14
    add #-1,r0
Lc0e7bba:
    dt r3
    mov.l PB_FUN_0c0e7d20,r14
    jsr @r14
    mov r11,r0
    bt LX10
    bra Lc0e7ad4
    nop
LX10:
    bra Lc0e79ea
    nop

    .ALIGN 4
PB_FUN_0c0e7be0:
    .DATA.L _FUN_0c0e7be0
PB_FUN_0c0e7c80:
    .DATA.L _FUN_0c0e7c80
PB_FUN_0c0e7cc0:
    .DATA.L _FUN_0c0e7cc0
PB_FUN_0c0e7d60:
    .DATA.L _FUN_0c0e7d60
PB_FUN_0c0e7d20:
    .DATA.L _FUN_0c0e7d20
PB_FUN_0c0e7ce0:
    .DATA.L _FUN_0c0e7ce0
}
