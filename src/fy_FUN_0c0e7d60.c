/* INLINE-ASM: display-list vertex interpolation helper with its inputs in r0, r5, r6, r7, r11, r12, fr3, fr5 and the T flag, using fschg and clobbering r10; no C form exists. */
/* Interpolates between two 24-byte vertices of the table at 0xC7FD280 (selected by r0&3 and r11&3) at the ratio (r12-v0.x)/(v1.x-v0.x) and writes the result backwards below r6+32. */
#pragma inline_asm(nl_objasm_clip_send_vtx)
void nl_objasm_clip_send_vtx(void)
{
    and #3,r0
    shll2 r0
    mov.l #H'0C7FD280,r10
    shll2 r0
    add r0,r0
    mov r10,r2
    add r0,r10
    mov r11,r0
    and #3,r0
    fmov.s @r10,fr2
    shll2 r0
    shll2 r0
    add r0,r0
    add r0,r2
    fmov.s @r2,fr1
    lds r12,fpul
    fsts fpul,fr0
    fsub fr2,fr0
    add #24,r10
    fsub fr2,fr1
    add #24,r2
    fdiv fr1,fr0
    lds r7,fpul
    fsts fpul,fr1
    fschg
    fmov.s @r2,fr4
    add #-8,r2
    fmov.s @r10,fr2
    add #-8,r10
    fsub fr2,fr4
    fsub fr3,fr5
    add #32,r6
    fmac fr0,fr4,fr2
    fmac fr0,fr5,fr3
    fmov.s fr2,@-r6
    fmov.s @r2,fr4
    add #-8,r2
    fmov.s @r10,fr2
    add #-8,r10
    fsub fr2,fr4
    fsub fr3,fr5
    fmac fr0,fr4,fr2
    fmac fr0,fr5,fr3
    fmov.s fr2,@-r6
    fschg
    fmov.s fr1,@-r6
    fmov.s @r2,fr5
    add #-4,r2
    fmov.s @r10,fr3
    add #-4,r10
    fmov.s @r2,fr4
    fmov.s @r10,fr2
    fsub fr3,fr5
    fsub fr2,fr4
    mov #-16,r2
    fmac fr0,fr5,fr3
    shll16 r2
    fmac fr0,fr4,fr2
    shll8 r2
    fmul fr1,fr3
    add #32,r5
    fmul fr1,fr2
    fmov.s fr3,@-r6
    fmov.s fr2,@-r6
    bt L1
    mov r6,r2
L1:
    mov.l r2,@-r6
    pref @r6
    rts
    add #32,r6
}
