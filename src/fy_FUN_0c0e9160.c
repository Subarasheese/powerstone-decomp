/* INLINE-ASM: hand-written display-list strip transformer with three entry variants chosen by r8 (inputs r4, r5, r6, r8, r13, fr12-fr15, XMTRX; state in r9, r14, r2, r3); no C form exists. */
/* Transforms a strip of vertices at r4 (ftrv, perspective divide, lighting dot products with fv12 and a table lookup through r8) and writes the display-list entries backwards below r6+32. */
#pragma inline_asm(FUN_0c0e9160)
void FUN_0c0e9160(void)
{
    tst r8,r8
    mov r8,r0
    bf Lc0e9168
    bra Lc0e9276
Lc0e9168:
    tst #1,r0
    bf Lc0e9170
    bra Lc0e93d8
    nop
Lc0e9170:
    mov.l @r4+,r9
    fldi1 fr2
    fschg
    fldi0 fr3
    mov #3,r3
    fmov.s fr2,@-r6
    add #32,r6
    fmov.s fr2,@r6
    mov.l @r4,r0
    mov r4,r14
    tst #1,r0
    add #32,r4
    bf Lc0e9190
    mov.l @(4,r14),r14
    add #-24,r4
    add r4,r14
Lc0e9190:
    fmov.s @r14+,fr4
    fmov.s @r14,fr6
    add #16,r14
    fldi1 fr7
    fmov.s @r14,fr0
    ftrv xmtrx,fv4
Lc0e919c:
    fldi1 fr7
    fdiv fr4,fr7
    dt r3
    mov.l @r4+,r0
    bt/s Lc0e9240
    mov.l @r4+,r14
    tst #1,r0
    mov r6,r2
    bt/s Lc0e91b6
    add r4,r14
    mov r4,r14
    add #24,r4
    add #-8,r14
Lc0e91b6:
    fmov.s @r14+,fr8
    add #32,r4
    pref @r4
    fmov.s @r14,fr10
    add #16,r14
    fldi1 fr11
    fmul fr7,fr6
    fmov.s fr0,@-r6
    fmul fr7,fr5
    fmov.s fr6,@-r6
    ftrv xmtrx,fv8
    fmov.s fr4,@-r6
    add #-32,r4
    mov.l r2,@r6
    fmov.s @r14,fr0
    dt r3
    pref @r6
    add #56,r6
    mov r6,r2
    fldi1 fr11
    fdiv fr8,fr11
    mov.l @r4+,r0
    bt/s Lc0e9218
    mov.l @r4+,r14
    tst #1,r0
    bt/s Lc0e91f2
    add r4,r14
    mov r4,r14
    add #24,r4
    add #-8,r14
Lc0e91f2:
    add #32,r4
    fmov.s @r14+,fr4
    pref @r4
    fmov.s @r14,fr6
    add #16,r14
    fldi1 fr7
    fmul fr11,fr10
    add #-32,r4
    fmul fr11,fr9
    fmov.s fr0,@-r6
    fmov.s fr10,@-r6
    ftrv xmtrx,fv4
    fmov.s fr8,@-r6
    add #64,r5
    mov.l r2,@r6
    fmov.s @r14,fr0
    pref @r6
    bra Lc0e919c
    add #56,r6
Lc0e9218:
    dt r9
    mov #-1,r2
    bt Lc0e9230
    tst #1,r0
    mov #3,r3
    bt/s Lc0e91f2
    add r4,r14
    mov r4,r14
    add #24,r4
    bra Lc0e91f2
    add #-8,r14
    nop
Lc0e9230:
    add #48,r4
    pref @r4
    add #-48,r4
    fmov fr8,fr4
    add #32,r5
    bra Lc0e925e
    fmov fr10,fr6
    nop
Lc0e9240:
    dt r9
    mov #-1,r2
    bt Lc0e9258
    tst #1,r0
    mov #3,r3
    bt/s Lc0e91b6
    add r4,r14
    mov r4,r14
    add #24,r4
    bra Lc0e91b6
    add #-8,r14
    nop
Lc0e9258:
    add #48,r4
    pref @r4
    add #-48,r4
Lc0e925e:
    fmul fr7,fr6
    fmov.s fr0,@-r6
    fmul fr7,fr5
    fmov.s fr6,@-r6
    add #32,r5
    fmov.s fr4,@-r6
    add #-8,r4
    mov.l r2,@r6
    fschg
    pref @r6
    rts
    add #32,r6
Lc0e9276:
    mov.l @r4+,r9
    add #32,r6
    fschg
    mov #3,r3
    mov.l @r4,r0
    mov r4,r14
    fldi0 fr2
    tst #1,r0
    add #32,r4
    bf Lc0e9290
    mov.l @(4,r14),r14
    add #-24,r4
    add r4,r14
Lc0e9290:
    fmov.s @r14+,fr4
    mov r6,r2
    fmov.s @r14+,fr6
    fadd fr7,fr2
    fldi1 fr7
    fldi0 fr3
    fmov.s @r14+,fr0
    ftrv xmtrx,fv4
Lc0e92a0:
    mov.l @r4+,r0
    flds fr15,fpul
    dt r3
    mov.l @r4+,r1
    fipr fv12,fv0
    fldi1 fr7
    bt/s Lc0e9388
    fdiv fr4,fr7
    tst #1,r0
    add r4,r1
    bt/s Lc0e92be
    fsts fpul,fr2
    mov r4,r1
    add #24,r4
    add #-8,r1
Lc0e92be:
    fldi0 fr10
    fcmp/gt fr10,fr3
    fmov.s @r1+,fr8
    add #32,r4
    fmov.s @r13,fr0
    bf Lc0e92cc
    fadd fr3,fr2
Lc0e92cc:
    pref @r4
    cmp/pz r8
    fadd fr2,fr1
    fldi0 fr3
    bf Lc0e92d8
    fmac fr0,fr1,fr3
Lc0e92d8:
    fmov.s @r14,fr0
    fmov.s @r1+,fr10
    add #-32,r4
    fmov.s fr2,@-r6
    fsub fr2,fr2
    fmov.s fr0,@-r6
    fmul fr7,fr6
    fmov.s @r1+,fr0
    fadd fr11,fr2
    fldi1 fr11
    fmul fr7,fr5
    add #32,r5
    fmov.s fr6,@-r6
    dt r3
    fmov.s fr4,@-r6
    ftrv xmtrx,fv8
    mov.l r2,@r6
    fsub fr3,fr3
    mov.l @r4+,r0
    mov r6,r2
    pref @r6
    add #64,r6
    mov.l @r4+,r14
    flds fr15,fpul
    fipr fv12,fv0
    fldi1 fr11
    bt/s Lc0e9362
    fdiv fr8,fr11
    tst #1,r0
    add r4,r14
    bt/s Lc0e931e
    fsts fpul,fr2
    mov r4,r14
    add #24,r4
    add #-8,r14
Lc0e931e:
    fldi0 fr0
    fcmp/gt fr0,fr3
    fmov.s @r14+,fr4
    add #32,r4
    fmov.s @r13,fr0
    bf Lc0e932c
    fadd fr3,fr2
Lc0e932c:
    pref @r4
    cmp/pz r8
    fadd fr2,fr1
    fldi0 fr3
    bf Lc0e9338
    fmac fr0,fr1,fr3
Lc0e9338:
    fmov.s @r1,fr0
    fmov.s @r14+,fr6
    add #-32,r4
    fmov.s fr2,@-r6
    fsub fr2,fr2
    fmov.s fr0,@-r6
    fmul fr11,fr10
    fmov.s @r14+,fr0
    fadd fr7,fr2
    fldi1 fr7
    fmul fr11,fr9
    add #32,r5
    fmov.s fr10,@-r6
    fsub fr3,fr3
    fmov.s fr8,@-r6
    ftrv xmtrx,fv4
    mov.l r2,@r6
    mov r6,r2
    pref @r6
    bra Lc0e92a0
    add #64,r6
Lc0e9362:
    dt r9
    fsts fpul,fr2
    bt/s Lc0e937c
    mov #-1,r2
    tst #1,r0
    mov #3,r3
    bt/s Lc0e931e
    add r4,r14
    mov r4,r14
    add #24,r4
    bra Lc0e931e
    add #-8,r14
    nop
Lc0e937c:
    add #48,r4
    pref @r4
    add #-48,r4
    fmov fr8,fr4
    bra Lc0e93a8
    fmov fr10,fr6
Lc0e9388:
    dt r9
    fsts fpul,fr2
    bt/s Lc0e93a0
    mov #-1,r2
    tst #1,r0
    mov #3,r3
    bt/s Lc0e92be
    add r4,r1
    mov r4,r1
    add #24,r4
    bra Lc0e92be
    add #-8,r1
Lc0e93a0:
    add #48,r4
    mov r14,r1
    pref @r4
    add #-48,r4
Lc0e93a8:
    fldi0 fr0
    fcmp/gt fr0,fr3
    fmov.s @r13,fr0
    bf Lc0e93b2
    fadd fr3,fr2
Lc0e93b2:
    cmp/pz r8
    fmov.s @r1,fr10
    fadd fr2,fr1
    fldi0 fr3
    bf Lc0e93be
    fmac fr0,fr1,fr3
Lc0e93be:
    fmul fr7,fr6
    fmov.s fr2,@-r6
    fmul fr7,fr5
    fmov.s fr10,@-r6
    fmov.s fr6,@-r6
    add #32,r5
    fmov.s fr4,@-r6
    add #-8,r4
    mov.l r2,@r6
    fschg
    pref @r6
    rts
    add #32,r6
Lc0e93d8:
    mov #127,r2
    mov #3,r3
    mov.l @r4+,r9
    add #-32,r6
    mov.l @r4,r0
    add #127,r2
    fschg
    add #55,r2
    tst #1,r0
    mov r4,r14
    bf/s Lc0e93f6
    add #32,r4
    mov.l @(4,r14),r14
    add #-24,r4
Lc0e93f4:
    add r4,r14
Lc0e93f6:
    fmov.s @r14+,fr4
Lc0e93f8:
    fmov.s @r14+,fr6
Lc0e93fa:
    fldi0 fr2
    fadd fr7,fr2
    fldi1 fr7
    add #64,r6
    fldi0 fr3
    add #32,r5
    fmov.s @r14+,fr0
    ftrv xmtrx,fv4
    fldi0 fr11
    dt r3
    mov r14,r1
    bt Lc0e943c
    mov.l @r4,r0
    fipr fv12,fv0
    mov.l @(4,r4),r14
    tst #1,r0
    add #32,r4
    fldi1 fr7
    bf/s Lc0e9444
    fdiv fr4,fr7
    add #-24,r4
    pref @r4
    fcmp/gt fr11,fr3
    add r4,r14
    flds fr15,fpul
    fipr fv0,fv8
    fmov.s @r13,fr0
    pref @r14
    bf/s Lc0e9474
    fsts fpul,fr2
    bra Lc0e9458
    fadd fr3,fr2
    nop
Lc0e943c:
    fipr fv12,fv0
    add #32,r4
    fldi1 fr7
    fdiv fr4,fr7
Lc0e9444:
    pref @r4
    mov r4,r14
    fcmp/gt fr11,fr3
    flds fr15,fpul
    fipr fv0,fv8
    fmov.s @r13,fr0
    add #-32,r14
    bf/s Lc0e9474
    fsts fpul,fr2
    fadd fr3,fr2
Lc0e9458:
    ftrc fr11,fpul
    fldi0 fr3
    sts fpul,r0
    fadd fr2,fr1
    cmp/gt r2,r0
    shll2 r0
    bf Lc0e9478
    mov.l @(r0,r8),r0
    fcmp/gt fr3,fr1
    lds r0,fpul
    bf/s Lc0e947a
    fsts fpul,fr3
    bra Lc0e947a
    fmac fr0,fr1,fr3
Lc0e9474:
    fadd fr2,fr1
    fldi0 fr3
Lc0e9478:
    fmac fr0,fr1,fr3
Lc0e947a:
    fmov.s @r1,fr0
    fmul fr7,fr6
    fmov.s fr2,@-r6
    fmul fr7,fr5
    fmov.s fr0,@-r6
    tst r3,r3
    fmov.s fr6,@-r6
    bt/s Lc0e9494
    fmov.s fr4,@-r6
    mov.l r6,@r6
    fmov.s @r14+,fr4
    bra Lc0e93f8
    pref @r6
Lc0e9494:
    mov #-1,r1
    mov.l r1,@r6
    dt r9
    pref @r6
    bt Lc0e94b2
    mov.l @r14,r0
    mov #3,r3
    tst #1,r0
    fmov.s @r14+,fr4
    bf/s Lc0e93fa
    fmov.s @r14+,fr6
    add #-24,r4
    flds fr5,fpul
    bra Lc0e93f4
    sts fpul,r14
Lc0e94b2:
    add #-32,r4
    fschg
    rts
    add #32,r6
}
