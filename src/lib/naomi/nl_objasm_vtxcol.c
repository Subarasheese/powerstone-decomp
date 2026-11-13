/* INLINE-ASM: hand-written display-list assembly (r4 the command list, r5 the light/scale block; T, the stack and XMTRX are its state), no C form. 0c0ec180: through the hook at 0x0C3468D8 when one is set, else the vertex-colour kernel: per command, the non-clipped strip or triangle (displayStrip_nc_vtxcol, displayTriangle_nc_vtxcol) or the clipped ones (FUN_0c0ec3c0, FUN_0c0ec4e0). The bsr calls became mov.l/jsr through r13 (saved around the call) because the C is linked far from them. */
extern void FUN_0c0ec4e0(void);
extern void FUN_0c0ec3c0(void);
extern void displayStrip_nc_vtxcol(void);
extern void displayTriangle_nc_vtxcol(void);
#pragma inline_asm(nl_objasm_draw_obj_vtxcol)
int nl_objasm_draw_obj_vtxcol(void)
{
    .IMPORT _FUN_0c0ec4e0
    .IMPORT _FUN_0c0ec3c0
    .IMPORT _displayStrip_nc_vtxcol
    .IMPORT _displayTriangle_nc_vtxcol
    mov.l C0c0ec284,r2
    mova C0c0ec280,r0
    mov.l @r2,r2
    mov r15,r1
    fmov.s @r0,fr0
    mov r2,r0
    fmov.s fr15,@-r15
    cmp/eq #0,r0
    fmov.s fr14,@-r15
    bt/s L0c0ec198
    fmov.s fr13,@-r15
    jmp @r0
L0c0ec198:
    fmov.s fr12,@-r15
    mov #0,r0
    fmov.s @(r0,r1),fr12
    mov #24,r0
    fmov.s @(r0,r1),fr13
    mov #28,r0
    fmov.s @(r0,r1),fr14
    mov #32,r0
    fmov.s @(r0,r1),fr15
    fmov.s fr11,@-r15
    fmul fr0,fr12
    fmov.s fr10,@-r15
    fmul fr0,fr13
    fmov.s fr9,@-r15
    fmul fr0,fr14
    fmov.s fr8,@-r15
    fmul fr0,fr15
    sts.l pr,@-r15
    mov.l C0c0ec3a0,r0
    mov.l r0,@-r15
    mov.l @r4+,r0
L0c0ec1c2:
    cmp/pl r0
    mov.l @r15,r9
    bt/s L0c0ec1e8
    cmp/pz r0
    mov r0,r8
    mov r11,r0
    mov.l r5,@(r0,r10)
    add #4,r15
    lds.l @r15+,pr
    fmov.s @r15+,fr8
    fmov.s @r15+,fr9
    fmov.s @r15+,fr10
    fmov.s @r15+,fr11
    fmov.s @r15+,fr12
    fmov.s @r15+,fr13
    fmov.s @r15+,fr14
    rts
    fmov.s @r15+,fr15
    nop
L0c0ec1e8:
    mov r0,r1
    mov #-5,r2
    mov.l @r9+,r3
    and #64,r0
    shld r2,r0
    mov #-3,r2
    and r2,r3
    or r0,r3
    add #32,r4
    mov #-33,r2
    and r2,r3
    mov #16,r2
    or r2,r3
    mov r1,r0
    mov r15,r2
    add #40,r2
    lds r3,fpul
    mov.l @(40,r2),r2
    cmp/pz r2
    mov #27,r2
    bt/s L0c0ec216
    and #3,r0
    xor #1,r0
L0c0ec216:
    shld r2,r0
    mov #3,r3
    fschg
    shld r2,r3
    pref @r4
    not r3,r3
    mov.l @r9+,r2
    and r3,r2
    fsts fpul,fr0
    or r0,r2
    lds r2,fpul
    add #-32,r4
    fsts fpul,fr1
    add #16,r6
    fmov.s @r9+,fr2
    fmov.s fr2,@-r6
    add #32,r5
    fmov.s fr0,@-r6
    fschg
    pref @r6
    add #32,r6
    rotcr r12
    mov r1,r0
    bt/s L0c0ec25c
    shll r12
    tst #8,r0
    bt L0c0ec254
    nop
    mov.l r13,@-r15
    mov.l PA_FUN_0c0ec4e0,r13
    jsr @r13
    mov.l @r15+,r13
    bra L0c0ec1c2
    mov.l @r4+,r0
L0c0ec254:
    nop
    mov.l r13,@-r15
    mov.l PA_FUN_0c0ec3c0,r13
    jsr @r13
    mov.l @r15+,r13
    bra L0c0ec1c2
    mov.l @r4+,r0
L0c0ec25c:
    mov #0,r1
    tst #64,r0
    addc r1,r12
    tst #16,r0
    bt/s L0c0ec270
    tst #8,r0
    nop
    mov.l r13,@-r15
    mov.l PA_displayStrip_nc_vtxcol,r13
    jsr @r13
    mov.l @r15+,r13
    bra L0c0ec1c2
    mov.l @r4+,r0
L0c0ec270:
    bt L0c0ec27c
    nop
    mov.l r13,@-r15
    mov.l PA_displayTriangle_nc_vtxcol,r13
    jsr @r13
    mov.l @r15+,r13
    bra L0c0ec1c2
    mov.l @r4+,r0
    nop
L0c0ec27c:
    bra L0c0ec27c
    nop
    .ALIGN 4
C0c0ec280:
    .DATA.L H'3B808080
C0c0ec284:
    .DATA.L H'0C3468D8
C0c0ec3a0:
    .DATA.L H'0C7FD240
PA_FUN_0c0ec4e0:
    .DATA.L _FUN_0c0ec4e0
PA_FUN_0c0ec3c0:
    .DATA.L _FUN_0c0ec3c0
PA_displayStrip_nc_vtxcol:
    .DATA.L _displayStrip_nc_vtxcol
PA_displayTriangle_nc_vtxcol:
    .DATA.L _displayTriangle_nc_vtxcol
}
