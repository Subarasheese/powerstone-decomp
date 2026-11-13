/* INLINE-ASM: hand-written renderer fragment (index in r11, FPSCR.SZ toggled by fschg, pc-relative table pointer) has no C form */
/* nl_objasm: copies the 8-byte pair at entry (r11&3) of the table at 0xC0EC2B8 to the next two entries (offsets +0x40 wrapping within 256 bytes). */
#pragma inline_asm(nl_objasm_shift_vtx_vtxcol)
void nl_objasm_shift_vtx_vtxcol(void)
{
    .DATA.W H'E106
    mov.l L0,r10
    .DATA.W H'60B3
    .DATA.W H'C903
    .DATA.W H'401D
    .DATA.W H'F3FD
    .DATA.W H'F8A6
    .DATA.W H'7008
    .DATA.W H'FAA6
    .DATA.W H'70B8
    .DATA.W H'600C
    .DATA.W H'FA87
    .DATA.W H'7008
    .DATA.W H'FAA7
    .DATA.W H'70B8
    .DATA.W H'600C
    .DATA.W H'FA87
    .DATA.W H'7008
    .DATA.W H'FAA7
    .DATA.W H'000B
    .DATA.W H'F3FD
    .ALIGN 4
L0: .DATA.L H'0C0EC2B8
}
