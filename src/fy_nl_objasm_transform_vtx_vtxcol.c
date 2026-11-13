/* INLINE-ASM: hand-written display-list vertex transform (inputs r4, r12, XMTRX, fr12-fr15 and stack words read through r15; results in fr1, fr4-fr11, r0 and T); no C form exists. */
/* Transforms one vertex (ftrv), unpacks its colour bytes to floats and applies the light/fade factor; the result registers of the original are not observable except r0, the bits of the vertex w, which is returned. */
#pragma inline_asm(nl_objasm_transform_vtx_vtxcol)
int nl_objasm_transform_vtx_vtxcol(void)
{
    mov.l @r4,r0
    tst #1,r0
    mov r4,r14
    bf/s Lc0ec870
    add #32,r4
    mov.l @(4,r14),r14
    add #-24,r4
    add r4,r14
Lc0ec870:
    fmov.s @r14+,fr4
    fmov.s @r14+,fr5
    fmov.s @r14,fr6
    mov r14,r1
    fldi1 fr7
    mov.b @(7,r14),r0
    add #16,r1
    mov.l @(8,r14),r8
    cmp/pl r0
    extu.b r8,r0
    bf/s Lc0ec8d0
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
    add #36,r2
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
    or #4,r0
    lds r0,fpul
    extu.b r8,r0
    fcmp/gt fr0,fr3
    fsts fpul,fr11
    bf Lc0ec8ce
    fmul fr11,fr3
    fadd fr3,fr2
Lc0ec8ce:
    sett
Lc0ec8d0:
    fldi1 fr1
    lds r0,fpul
    shlr8 r8
    extu.b r8,r0
    shlr8 r8
    fdiv fr4,fr1
    float fpul,fr11
    lds r0,fpul
    float fpul,fr10
    extu.b r8,r0
    lds r0,fpul
    shlr8 r8
    float fpul,fr9
    lds r8,fpul
    float fpul,fr8
    flds fr7,fpul
    fmul fr15,fr11
    sts fpul,r0
    fmul fr14,fr10
    fsts fpul,fr4
    bf/s Lc0ec902
    fmul fr13,fr9
    fmul fr2,fr9
    fmul fr2,fr10
    fmul fr2,fr11
Lc0ec902:
    cmp/hi r0,r12
    fmul fr12,fr8
    rts
    fmov fr1,fr7
}
