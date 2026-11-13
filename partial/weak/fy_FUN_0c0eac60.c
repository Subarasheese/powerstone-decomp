/* INLINE-ASM: hand-written renderer fragment: ftrv on the XMTRX bank, fpul, rotcl chains, results in r9/T for the caller; no C form */
/* nl_objasm: transforms three vertices (inline or indirect records at r4, 32 bytes each) by the matrix and collects clip-test bits of w against r12 into r9. */
#pragma inline_asm(nl_objasm_transform_tri_spd_ofst)
void nl_objasm_transform_tri_spd_ofst(void)
{
    .DATA.W H'6143
    .DATA.W H'6042
    .DATA.W H'C801
    bf/s AC0EAC78
    .DATA.W H'F449
    .DATA.W H'6046
    .DATA.W H'304C
    .DATA.W H'F409
    .DATA.W H'F509
    .DATA.W H'F609
    bra AC0EAC80
    .DATA.W H'F79D
AC0EAC78:
    .DATA.W H'F549
    .DATA.W H'F648
    .DATA.W H'F79D
    .DATA.W H'7418
AC0EAC80:
    .DATA.W H'0483
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
    .DATA.W H'F5FD
    .DATA.W H'6042
    .DATA.W H'C801
    bf/s AC0EACA0
    .DATA.W H'F049
    .DATA.W H'6046
    .DATA.W H'304C
    .DATA.W H'F009
    .DATA.W H'F109
    .DATA.W H'F209
    bra AC0EACA8
    .DATA.W H'F39D
AC0EACA0:
    .DATA.W H'F149
    .DATA.W H'F248
    .DATA.W H'F39D
    .DATA.W H'7418
AC0EACA8:
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
    .DATA.W H'F1FD
    .DATA.W H'F71D
    .DATA.W H'6042
    .DATA.W H'C801
    bf/s AC0EACC8
    .DATA.W H'F449
    .DATA.W H'6046
    .DATA.W H'304C
    .DATA.W H'F409
    .DATA.W H'F509
    .DATA.W H'F609
    bra AC0EACCE
    .DATA.W H'F79D
AC0EACC8:
    .DATA.W H'F549
    .DATA.W H'F648
    .DATA.W H'F79D
AC0EACCE:
    .DATA.W H'6413
    .DATA.W H'005A
    .DATA.W H'F5FD
    .DATA.W H'3C06
    .DATA.W H'F31D
    .DATA.W H'4924
    .DATA.W H'005A
    .DATA.W H'3C06
    .DATA.W H'F71D
    .DATA.W H'4924
    .DATA.W H'005A
    .DATA.W H'3C06
    .DATA.W H'000B
    .DATA.W H'4924
}
