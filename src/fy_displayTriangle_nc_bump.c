/* INLINE-ASM: hand-written display-list assembly (registers r3, r9, r11, r12, T and XMTRX are its inputs and state, calls and jump table between sibling helpers); no C form exists. The bsr calls to the sibling helpers became mov.l/jsr through r14 (saved and restored) because the C is linked far from them. */
/* Draws one or more non-clipped bump-mapped triangles: transforms the triangle (nl_objasm_transform_tri_bump), then by its clip code sends, saves or clips each vertex. */
extern void nl_objasm_transform_tri_bump(void);
extern void nl_objasm_transform_vtx_bump(void);
extern void nl_objasm_save_vtx_bump(void);
extern void nl_objasm_send_vtx_bump(void);
extern void nl_objasm_send_saved_vtx_bump(void);
extern void nl_objasm_clip_send_vtx_bump(void);
#pragma inline_asm(displayTriangle_nc_bump)
void displayTriangle_nc_bump(void)
{
    .IMPORT _nl_objasm_transform_tri_bump
    .IMPORT _nl_objasm_transform_vtx_bump
    .IMPORT _nl_objasm_save_vtx_bump
    .IMPORT _nl_objasm_send_vtx_bump
    .IMPORT _nl_objasm_send_saved_vtx_bump
    .IMPORT _nl_objasm_clip_send_vtx_bump
    mov.l r14,@-r15
    mov.l r10,@-r15
    mov.l r11,@-r15
    sts.l pr,@-r15
    mov.l @r4+,r3
Lc0ed5c8:
    mov.l PA_nl_objasm_transform_tri_bump,r14
    jsr @r14
    mov #0,r9
    mov r9,r0
    cmp/eq #0,r0
    bt Lc0ed624
    cmp/eq #7,r0
    bt Lc0ed642
    mov.l PA_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    mov #0,r11
    mov.l PA_nl_objasm_save_vtx_bump,r14
    jsr @r14
    nop
    mov.l PA_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    mov #1,r11
    mov.l PA_nl_objasm_save_vtx_bump,r14
    jsr @r14
    nop
    mov.l PA_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    mov #2,r11
    mov.l PA_nl_objasm_save_vtx_bump,r14
    jsr @r14
    nop
    shll2 r9
    braf r9
    nop
    nop
    nop
    bra Lc0ed648
    nop
    bra Lc0ed666
    nop
    bra Lc0ed686
    nop
    bra Lc0ed6a0
    nop
    bra Lc0ed6c0
    nop
    bra Lc0ed6da
    nop
    nop
    nop
Lc0ed614:
    dt r3
    bf Lc0ed5c8
    mov #1,r0
    lds.l @r15+,pr
    or r0,r12
    mov.l @r15+,r11
    mov.l @r15+,r10
    rts
    mov.l @r15+,r14
    .ALIGN 4
PA_nl_objasm_transform_tri_bump:
    .DATA.L _nl_objasm_transform_tri_bump
PA_nl_objasm_transform_vtx_bump:
    .DATA.L _nl_objasm_transform_vtx_bump
PA_nl_objasm_save_vtx_bump:
    .DATA.L _nl_objasm_save_vtx_bump
PA_nl_objasm_send_vtx_bump:
    .DATA.L _nl_objasm_send_vtx_bump
PA_nl_objasm_send_saved_vtx_bump:
    .DATA.L _nl_objasm_send_saved_vtx_bump
PA_nl_objasm_clip_send_vtx_bump:
    .DATA.L _nl_objasm_clip_send_vtx_bump
Lc0ed624:
    mov r3,r9
    mov.l PB_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    mov #3,r3
    mov.l PB_nl_objasm_send_vtx_bump,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_send_vtx_bump,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_transform_vtx_bump,r14
    jsr @r14
    nop
    mov.l PB_nl_objasm_send_vtx_bump,r14
    jsr @r14
    nop
    bra Lc0ed614
    mov r9,r3
Lc0ed642:
    add #56,r4
    bra Lc0ed614
    add #112,r4
Lc0ed648:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #1,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    sett
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #1,r0
    bra Lc0ed614
    nop
Lc0ed666:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #2,r0
    sett
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #1,r0
    bra Lc0ed614
    nop
Lc0ed686:
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    sett
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    bra Lc0ed614
    nop
Lc0ed6a0:
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #1,r0
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    sett
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #2,r0
    bra Lc0ed614
    nop
Lc0ed6c0:
    clrt
    mov #1,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #1,r0
    sett
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #1,r0
    bra Lc0ed614
    nop
Lc0ed6da:
    clrt
    mov #2,r11
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #0,r0
    clrt
    mov.l PB_nl_objasm_clip_send_vtx_bump,r14
    jsr @r14
    mov #1,r0
    sett
    mov.l PB_nl_objasm_send_saved_vtx_bump,r14
    jsr @r14
    mov #2,r0
    bra Lc0ed614
    nop
    .ALIGN 4
PB_nl_objasm_transform_tri_bump:
    .DATA.L _nl_objasm_transform_tri_bump
PB_nl_objasm_transform_vtx_bump:
    .DATA.L _nl_objasm_transform_vtx_bump
PB_nl_objasm_save_vtx_bump:
    .DATA.L _nl_objasm_save_vtx_bump
PB_nl_objasm_send_vtx_bump:
    .DATA.L _nl_objasm_send_vtx_bump
PB_nl_objasm_send_saved_vtx_bump:
    .DATA.L _nl_objasm_send_saved_vtx_bump
PB_nl_objasm_clip_send_vtx_bump:
    .DATA.L _nl_objasm_clip_send_vtx_bump
}
