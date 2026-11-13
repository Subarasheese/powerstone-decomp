/* INLINE-ASM: hand-written renderer fragment (index in r0, T flag from caller, FPSCR.SZ toggled by fschg, pc-relative table pointer) has no C form */
/* nl_objasm: reads four floats of the table at 0xC0E95A0 (entry r0&3), scales two by fr3/fr1 and writes the four to r6 (pre-decrement), then a -1 or r6 marker. */
#pragma inline_asm(nl_objasm_send_saved_vtx_spd)
void nl_objasm_send_saved_vtx_spd(void)
{
    .DATA.W H'C903
    .DATA.W H'E205
    mov.l L0,r10
    .DATA.W H'402D
    .DATA.W H'F3FD
    .DATA.W H'3A0C
    .DATA.W H'F0A9
    .DATA.W H'F2A9
    .DATA.W H'7620
    .DATA.W H'F4A9
    .DATA.W H'F232
    .DATA.W H'F6A9
    .DATA.W H'F132
    .DATA.W H'F66B
    .DATA.W H'E2FF
    .DATA.W H'F64B
    .DATA.W H'7520
    .DATA.W H'F62B
    .DATA.W H'8D01
    .DATA.W H'F60B
    .DATA.W H'6263
    .DATA.W H'2622
    .DATA.W H'F3FD
    .DATA.W H'0683
    .DATA.W H'000B
    .DATA.W H'7620
    .ALIGN 4
L0: .DATA.L H'0C0E95A0
}
