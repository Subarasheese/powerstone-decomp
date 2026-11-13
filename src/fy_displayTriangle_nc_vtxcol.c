/* INLINE-ASM: hand-written display-list assembly (registers r3, r9, r11, r12, T and XMTRX are its inputs and state, calls and jump table between sibling helpers); no C form exists. The bsr calls to the sibling helpers became mov.l/jsr through r14 (saved and restored) because the C is linked far from them. */
/* Draws one or more non-clipped vertex-colour triangles: transforms the triangle (FUN_0c0ecc40), then by its clip code sends, saves or clips each vertex. */
extern void FUN_0c0ecc40(void);
extern void nl_objasm_transform_vtx_vtxcol(void);
extern void nl_objasm_save_vtx_vtxcol(void);
extern void nl_objasm_shift_vtx_vtxcol(void);
extern void nl_objasm_send_vtx_vtxcol(void);
extern void nl_objasm_send_saved_vtx_vtxcol(void);
extern void nl_objasm_clip_send_vtx_vtxcol(void);
#pragma inline_asm(displayTriangle_nc_vtxcol)
void displayTriangle_nc_vtxcol(void)
{
    .IMPORT _FUN_0c0ecc40
    .IMPORT _nl_objasm_transform_vtx_vtxcol
    .IMPORT _nl_objasm_save_vtx_vtxcol
    .IMPORT _nl_objasm_shift_vtx_vtxcol
    .IMPORT _nl_objasm_send_vtx_vtxcol
    .IMPORT _nl_objasm_send_saved_vtx_vtxcol
    .IMPORT _nl_objasm_clip_send_vtx_vtxcol
    mov.l r14,@-r15
    mov.l r10,@-r15
    mov.l r11,@-r15
    sts.l pr,@-r15
    mov.l @r4+,r3
Lc0ecae8:
    mov.l PA_FUN_0c0ecc40,r14
    jsr @r14
    mov #0,r9
    mov r9,r0
    cmp/eq #0,r0
    bt Lc0ecb4e
    cmp/eq #7,r0
    bt Lc0ecb6c
    mov.l PA_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    mov #0,r11
    mov.l PA_nl_objasm_save_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PA_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    mov #1,r11
    mov.l PA_nl_objasm_save_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PA_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    mov #2,r11
    mov.l PA_nl_objasm_save_vtx_vtxcol,r14
    jsr @r14
    nop
    mov r12,r0
    tst #1,r0
    bt/s Lc0ecb1a
    shll2 r9
    mov.l PA_nl_objasm_shift_vtx_vtxcol,r14
    jsr @r14
    nop
Lc0ecb1a:
    braf r9
    nop
    nop
    nop
    bra Lc0ecb8e
    nop
    bra Lc0ecbac
    nop
    bra Lc0ecbcc
    nop
    bra Lc0ecbe6
    nop
    bra Lc0ecc06
    nop
    bra Lc0ecc20
    nop
    nop
    nop
Lc0ecb3e:
    dt r3
    bf Lc0ecae8
    mov #1,r0
    lds.l @r15+,pr
    or r0,r12
    mov.l @r15+,r11
    mov.l @r15+,r10
    rts
    mov.l @r15+,r14
    .ALIGN 4
PA_FUN_0c0ecc40:
    .DATA.L _FUN_0c0ecc40
PA_nl_objasm_transform_vtx_vtxcol:
    .DATA.L _nl_objasm_transform_vtx_vtxcol
PA_nl_objasm_save_vtx_vtxcol:
    .DATA.L _nl_objasm_save_vtx_vtxcol
PA_nl_objasm_shift_vtx_vtxcol:
    .DATA.L _nl_objasm_shift_vtx_vtxcol
PA_nl_objasm_send_vtx_vtxcol:
    .DATA.L _nl_objasm_send_vtx_vtxcol
PA_nl_objasm_send_saved_vtx_vtxcol:
    .DATA.L _nl_objasm_send_saved_vtx_vtxcol
PA_nl_objasm_clip_send_vtx_vtxcol:
    .DATA.L _nl_objasm_clip_send_vtx_vtxcol
Lc0ecb4e:
    mov r3,r9
    mov.l PB_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    mov #3,r3
    mov.l PB_nl_objasm_send_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_send_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_transform_vtx_vtxcol,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_send_vtx_vtxcol,r14
    jsr @r14
    nop
    bra Lc0ecb3e
    mov r9,r3
Lc0ecb6c:
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0ecb76
    add #24,r4
Lc0ecb76:
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0ecb80
    add #24,r4
Lc0ecb80:
    mov.l @r4,r0
    tst #1,r0
    add #8,r4
    bt Lc0ecb8a
    add #24,r4
Lc0ecb8a:
    bra Lc0ecb3e
    nop
Lc0ecb8e:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    sett
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    bra Lc0ecb3e
    nop
Lc0ecbac:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #2,r0
    sett
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    bra Lc0ecb3e
    nop
Lc0ecbcc:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    sett
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    bra Lc0ecb3e
    nop
Lc0ecbe6:
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    sett
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #2,r0
    bra Lc0ecb3e
    nop
Lc0ecc06:
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    sett
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    bra Lc0ecb3e
    nop
Lc0ecc20:
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_clip_send_vtx_vtxcol,r14
    jsr @r14
    mov #1,r0
    sett
    mov.l PB_nl_objasm_send_saved_vtx_vtxcol,r14
    jsr @r14
    mov #2,r0
    bra Lc0ecb3e
    nop

    .ALIGN 4
PB_FUN_0c0ecc40:
    .DATA.L _FUN_0c0ecc40
PB_nl_objasm_transform_vtx_vtxcol:
    .DATA.L _nl_objasm_transform_vtx_vtxcol
PB_nl_objasm_save_vtx_vtxcol:
    .DATA.L _nl_objasm_save_vtx_vtxcol
PB_nl_objasm_shift_vtx_vtxcol:
    .DATA.L _nl_objasm_shift_vtx_vtxcol
PB_nl_objasm_send_vtx_vtxcol:
    .DATA.L _nl_objasm_send_vtx_vtxcol
PB_nl_objasm_send_saved_vtx_vtxcol:
    .DATA.L _nl_objasm_send_saved_vtx_vtxcol
PB_nl_objasm_clip_send_vtx_vtxcol:
    .DATA.L _nl_objasm_clip_send_vtx_vtxcol
}
