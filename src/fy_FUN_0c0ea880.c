/* INLINE-ASM: hand-written assembly fragment of the renderer (arguments in r2, r3, r5, r6, fr4-fr7, FPSCR.SZ toggled by fschg) with no C form */
/* nl_objasm: writes one 32-byte vertex (fr4, fr6, fr0 from @r2, fr2) through r6 with fschg double moves, scaling fr5, fr6 by fr7, then advances the pointers. */
#pragma inline_asm(nl_objasm_send_vtx_spd_ofst)
void nl_objasm_send_vtx_spd_ofst(void)
{
    .DATA.W H'F3FD
    .DATA.W H'7620
    .DATA.W H'F028
    .DATA.W H'F672
    .DATA.W H'F62B
    .DATA.W H'F572
    .DATA.W H'F60B
    .DATA.W H'E2FF
    .DATA.W H'F66B
    .DATA.W H'4310
    .DATA.W H'F64B
    .DATA.W H'8D05
    .DATA.W H'F3FD
    .DATA.W H'2662
    .DATA.W H'7520
    .DATA.W H'0683
    .DATA.W H'000B
    .DATA.W H'7620
    .DATA.W H'2622
    .DATA.W H'7520
    .DATA.W H'0683
    .DATA.W H'000B
    .DATA.W H'7620
}
