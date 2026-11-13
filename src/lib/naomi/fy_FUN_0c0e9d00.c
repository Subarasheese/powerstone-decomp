/* INLINE-ASM: hand-written renderer fragment (r11 index, FPSCR.SZ toggled by fschg, pc-relative table pointer) has no C form */
/* nl_objasm: stores fr2 loaded from table at 0xC0E95C0 (entry r11&3) into three table slots selected by r11-1, r11-2. */
#pragma inline_asm(nl_objasm_shift_vtx_spd)
void nl_objasm_shift_vtx_spd(void)
{
    .DATA.W H'E105
    mov.l L0,r10
    .DATA.W H'60B3
    .DATA.W H'C903
    .DATA.W H'62A3
    .DATA.W H'401D
    .DATA.W H'F3FD
    .DATA.W H'3A0C
    .DATA.W H'7AF8
    .DATA.W H'60B3
    .DATA.W H'F2A8
    .DATA.W H'70FF
    .DATA.W H'6A23
    .DATA.W H'C903
    .DATA.W H'401D
    .DATA.W H'320C
    .DATA.W H'60B3
    .DATA.W H'F22B
    .DATA.W H'70FE
    .DATA.W H'C903
    .DATA.W H'401D
    .DATA.W H'3A0C
    .DATA.W H'FA2B
    .DATA.W H'000B
    .DATA.W H'F3FD
    .ALIGN 4
L0: .DATA.L H'0C0E95C0
}
