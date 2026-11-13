/* INLINE-ASM: hand-written display-list strip transformer (inputs in r4, r5, r6, r9, XMTRX and fr15, state in r8/r14, stack words read through r15, fipr/ftrv and fschg); no C form exists. */
/* Walks r9 strips of vertices at r4: each vertex is transformed by XMTRX (ftrv), perspective-divided, its colour bytes unpacked and the result written backwards below r6+32 as 32-byte display-list entries. */
#pragma inline_asm(FUN_0c0ec4e0)
void FUN_0c0ec4e0(void)
{
    mov.l @r4+,r9
    add #32,r6
    mov #3,r3
    fschg
Lc0ec4e8:
    mov.l @r4,r0
    tst #1,r0
    mov r4,r14
    bf/s Lc0ec4f8
    add #32,r4
    mov.l @(4,r14),r14
    add #-24,r4
    add r4,r14
Lc0ec4f8:
    fmov.s @r14+,fr4
    fmov.s @r14,fr6
    mov r14,r1
    fldi1 fr7
    add #16,r1
    mov.b @(7,r14),r0
    mov.l @(8,r14),r8
    cmp/pl r0
    extu.b r8,r0
    bf/s Lc0ec55a
    ftrv xmtrx,fv4
    mov.l @(4,r14),r2
    exts.b r2,r0
    shlr8 r2
    lds r0,fpul
    exts.b r2,r0
    float fpul,fr1
    shlr8 r2
    lds r0,fpul
    exts.b r2,r0
    float fpul,fr0
    lds r0,fpul
    float fpul,fr2
    fldi0 fr3
    mov r15,r2
    fschg
    add #24,r2
    fmov.s @r2+,fr8
    mov #60,r0
    fmov.s @r2+,fr9
    shll8 r0
    fmov.s @r2+,fr10
    or #1,r0
    fipr fv8,fv0
    shll8 r0
    fmov.s @r2+,fr2
    or #2,r0
    fldi0 fr0
    shll8 r0
    fschg
    or #4,r0
    lds r0,fpul
    extu.b r8,r0
    fcmp/gt fr0,fr3
    fsts fpul,fr11
    bf Lc0ec558
    fmul fr11,fr3
    fadd fr3,fr2
Lc0ec558:
    sett
Lc0ec55a:
    add #32,r4
    lds r0,fpul
    shlr8 r8
    extu.b r8,r0
    pref @r4
    shlr8 r8
    float fpul,fr11
    add #-32,r4
    fldi1 fr7
    fdiv fr4,fr7
    lds r0,fpul
    float fpul,fr10
    extu.b r8,r0
    lds r0,fpul
    shlr8 r8
    float fpul,fr9
    lds r8,fpul
    add #-8,r6
    float fpul,fr8
    fmov.s @r1,fr0
    mov #-1,r0
    fldi0 fr3
    fmul fr15,fr11
    bf/s Lc0ec592
    fmov.s fr0,@-r6
    fmul fr2,fr9
    fmul fr2,fr10
    fmul fr2,fr11
Lc0ec592:
    dt r3
    fldi0 fr2
    fmul fr7,fr6
    bt Lc0ec59c
    mov r6,r0
Lc0ec59c:
    fmul fr7,fr5
    fmov.s fr6,@-r6
    add #64,r5
    fmov.s fr4,@-r6
    fmul fr14,fr10
    mov.l r0,@r6
    pref @r6
    mov r4,r14
    mov.l @(4,r14),r14
    add #64,r6
    mov.l @r4+,r0
    fmul fr13,fr9
    fmov.s fr2,@-r6
    fmul fr12,fr8
    fmov.s fr2,@-r6
    add r4,r14
    fmov.s fr10,@-r6
    add #4,r14
    fmov.s fr8,@-r6
    bt/s Lc0ec5d6
    pref @r6
    tst #1,r0
    add #64,r6
    bt/s Lc0ec4f8
    add #4,r4
    mov r4,r14
    add #24,r4
    bra Lc0ec4f8
    add #-8,r14
Lc0ec5d6:
    add #-4,r4
    dt r9
    add #64,r6
    bf/s Lc0ec4e8
    mov #3,r3
    fschg
    rts
    add #-32,r6
}
