/* INLINE-ASM: hand-written renderer loop: state in registers (r4-r6, r10-r13, fr12-fr14), pushes fpu regs, fschg double moves, jumps by command word to the display fragments; no C form */
/* nl_objasm: display-list loop: scales the colour and vertex setup, then per command word at r4 emits the vertex header and calls the strip/triangle (clipped or not) fragments. */
#pragma inline_asm(nl_objasm_draw_obj_bump)
void nl_objasm_draw_obj_bump(void)
{
    .DATA.W H'E043
    .DATA.W H'4018
    .DATA.W H'CB7F
    .DATA.W H'4028
    .DATA.W H'405A
    .DATA.W H'F70D
    .DATA.W H'F072
    .DATA.W H'74EC
    .DATA.W H'F172
    .DATA.W H'F449
    .DATA.W H'F272
    .DATA.W H'F549
    .DATA.W H'F372
    .DATA.W H'F649
    .DATA.W H'F03D
    .DATA.W H'005A
    .DATA.W H'7408
    .DATA.W H'F09D
    .DATA.W H'F13D
    .DATA.W H'015A
    .DATA.W H'F23D
    .DATA.W H'025A
    .DATA.W H'F33D
    .DATA.W H'085A
    .DATA.W H'F063
    .DATA.W H'4018
    .DATA.W H'210B
    .DATA.W H'4128
    .DATA.W H'4218
    .DATA.W H'282B
    .DATA.W H'281B
    .DATA.W H'FFFB
    .DATA.W H'FFAB
    .DATA.W H'FF9B
    .DATA.W H'FC62
    .DATA.W H'FF8B
    .DATA.W H'FD62
    .DATA.W H'2FD6
    mov.l P0,r0
    .DATA.W H'FE62
    .DATA.W H'4F22
    .DATA.W H'F00A
    .DATA.W H'F572
    .DATA.W H'F472
    .DATA.W H'F53D
    .DATA.W H'005A
    .DATA.W H'F43D
    .DATA.W H'4028
    .DATA.W H'0D5A
    .DATA.W H'4018
    .DATA.W H'2D0B
    .DATA.W H'6046
AC0ECD48:
    .DATA.W H'4015
    mov.l P1,r9
    bt/s AC0ECD74
    .DATA.W H'4011
    .DATA.W H'6803
    .DATA.W H'60B3
    .DATA.W H'0A56
    mov.l P0,r0
    .DATA.W H'4F26
    .DATA.W H'F008
    .DATA.W H'6DF6
    .DATA.W H'FC02
    .DATA.W H'F8F9
    .DATA.W H'FD02
    .DATA.W H'F9F9
    .DATA.W H'FE02
    .DATA.W H'FAF9
    .DATA.W H'000B
    .DATA.W H'FFF9
    .DATA.W H'0009
    .DATA.W H'0000
    .DATA.W H'0000
AC0ECD74:
    .DATA.W H'6103
    .DATA.W H'6396
    .DATA.W H'7420
    .DATA.W H'E2CF
    .DATA.W H'2329
    .DATA.W H'62F3
    .DATA.W H'7218
    .DATA.W H'522A
    .DATA.W H'4211
    bt/s AC0ECD8E
    .DATA.W H'E21B
    .DATA.W H'C903
    .DATA.W H'CA01
AC0ECD8E:
    .DATA.W H'435A
    .DATA.W H'402D
    .DATA.W H'E303
    .DATA.W H'F3FD
    .DATA.W H'432D
    .DATA.W H'0483
    .DATA.W H'6337
    .DATA.W H'6296
    .DATA.W H'2239
    .DATA.W H'F00D
    .DATA.W H'220B
    .DATA.W H'425A
    .DATA.W H'74E0
    .DATA.W H'F10D
    .DATA.W H'7610
    .DATA.W H'F299
    .DATA.W H'F62B
    .DATA.W H'7520
    .DATA.W H'F60B
    .DATA.W H'F3FD
    .DATA.W H'0683
    .DATA.W H'7620
    .DATA.W H'4C25
    .DATA.W H'6013
    bt/s AC0ECDD8
    .DATA.W H'4C00
    .DATA.W H'C808
    bt AC0ECDCE
    mov.l P2,r14
    jsr @r14
    .DATA.W H'0009
    bra AC0ECD48
    .DATA.W H'6046
AC0ECDCE:
    mov.l P3,r14
    jsr @r14
    .DATA.W H'0009
    bra AC0ECD48
    .DATA.W H'6046
    .DATA.W H'0009
AC0ECDD8:
    .DATA.W H'E100
    .DATA.W H'C840
    .DATA.W H'3C1E
    .DATA.W H'C810
    bt/s AC0ECDEC
    .DATA.W H'C808
    mov.l P4,r14
    jsr @r14
    .DATA.W H'0009
    bra AC0ECD48
    .DATA.W H'6046
AC0ECDEC:
    bt AC0ECDF8
    mov.l P5,r14
    jsr @r14
    .DATA.W H'0009
    bra AC0ECD48
    .DATA.W H'6046
    .DATA.W H'0009
AC0ECDF8:
    bra AC0ECDF8
    .DATA.W H'0009
    .ALIGN 4
P0: .DATA.L H'0C0ECD70
P1: .DATA.L H'0C7FD240
P2: .DATA.L H'0C0ED080
P3: .DATA.L H'0C0ECF20
P4: .DATA.L H'0C0ED1E0
P5: .DATA.L H'0C0ED5C0
}
