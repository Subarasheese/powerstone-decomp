/* INLINE-ASM: hand-written renderer fragment (index in r11, pointer in r2, FPSCR.SZ toggled by fschg, pc-relative table pointer) has no C form */
/* nl_objasm: stores fr4, fr6, fr0 (from @r2) and fr2 as four 8-byte moves pre-decrementing from the table entry (r11&3) at 0xC0EA1A0. */
#pragma inline_asm(nl_objasm_save_vtx_spd_ofst)
void nl_objasm_save_vtx_spd_ofst(void)
{
    .DATA.W H'EA05
    .DATA.W H'60B3
    .DATA.W H'C903
    .DATA.W H'F3FD
    .DATA.W H'40AD
    mov.l L0,r10
    .DATA.W H'F028
    .DATA.W H'3A0C
    .DATA.W H'FA2B
    .DATA.W H'FA0B
    .DATA.W H'FA6B
    .DATA.W H'FA4B
    .DATA.W H'000B
    .DATA.W H'F3FD
    .ALIGN 4
L0: .DATA.L H'0C0EA1A0
}
