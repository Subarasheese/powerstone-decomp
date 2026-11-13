/* INLINE-ASM: display-list helper with its inputs in r0, r5, r6, the T flag and fr3, using fschg and clobbering r10; no C form exists. */
/* Reads four floats from the table at 0xC0EA180 (entry r0&3, 32 bytes each), scales two by fr3 and writes the four backwards below r6+32, with a link word. */
#pragma inline_asm(nl_objasm_send_saved_vtx_spd_ofst)
void nl_objasm_send_saved_vtx_spd_ofst(void)
{
    and #3,r0
    mov #5,r2
    mov.l #H'0C0EA180,r10
    shld r2,r0
    fschg
    add r0,r10
    fmov.s @r10+,fr0
    fmov.s @r10+,fr2
    add #32,r6
    fmov.s @r10+,fr4
    fmul fr3,fr2
    fmov.s @r10+,fr6
    fmul fr3,fr1
    fmov.s fr6,@-r6
    mov #-1,r2
    fmov.s fr4,@-r6
    add #32,r5
    fmov.s fr2,@-r6
    bt/s L1
    fmov.s fr0,@-r6
    mov r6,r2
L1:
    mov.l r2,@r6
    fschg
    pref @r6
    rts
    add #32,r6
}
