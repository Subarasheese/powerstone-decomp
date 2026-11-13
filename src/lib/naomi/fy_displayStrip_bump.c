/* INLINE-ASM: hand-written renderer strip routine: arguments in registers (r4-r6, r13, fr12-fr15, XMTRX), fipr/ftrv, fschg double moves, tables via mova; no C form */
/* nl_objasm: emits a bump-mapped triangle strip: per vertex reads position/uv/colour from r4, transforms by XMTRX, computes light angle tables and writes 32-byte vertices at r6 until the strip count r3 runs out. */
#pragma inline_asm(displayStrip_bump)
void displayStrip_bump(void)
{
    .DATA.W H'6346
    .DATA.W H'7620
AC0ECF24:
    .DATA.W H'F449
    .DATA.W H'F549
    .DATA.W H'F649
    .DATA.W H'F79D
    .DATA.W H'F249
    .DATA.W H'F049
    .DATA.W H'F149
    .DATA.W H'F5FD
    .DATA.W H'F38D
    .DATA.W H'FA49
    .DATA.W H'60D3
    .DATA.W H'F849
    .DATA.W H'4029
    .DATA.W H'F949
    .DATA.W H'F3ED
    .DATA.W H'F249
    .DATA.W H'FFF1
    .DATA.W H'F79D
    .DATA.W H'F743
    .DATA.W H'F049
    .DATA.W H'4028
    .DATA.W H'FB8D
    .DATA.W H'F3B5
    .DATA.W H'F149
    .DATA.W H'7420
    .DATA.W H'FBED
    .DATA.W H'0483
    bt AC0ECF5E
    .DATA.W H'F38D
AC0ECF5E:
    .DATA.W H'F83C
    .DATA.W H'F882
    .DATA.W H'F99D
    .DATA.W H'FCED
    .DATA.W H'FA8D
    .DATA.W H'FAB5
    .DATA.W H'62D3
    .DATA.W H'F981
    .DATA.W H'622C
    bf AC0ECF74
    .DATA.W H'FB4D
AC0ECF74:
    .DATA.W H'0029
    .DATA.W H'FAF5
    .DATA.W H'425A
    .DATA.W H'F96D
    bf AC0ECF80
    .DATA.W H'FF4D
AC0ECF80:
    .DATA.W H'0129
    .DATA.W H'FFB5
    .DATA.W H'FAFC
    .DATA.W H'4108
    bf AC0ECF90
    .DATA.W H'FFBC
    .DATA.W H'CB02
    .DATA.W H'FBAC
AC0ECF90:
    .DATA.W H'210B
    .DATA.W H'FA2D
    .DATA.W H'4100
    mov.l P0,r0
    .DATA.W H'011D
    mov.l P1,r0
    .DATA.W H'F009
    .DATA.W H'FFB3
    .DATA.W H'4101
    .DATA.W H'FB09
    .DATA.W H'F3A2
    .DATA.W H'6202
    .DATA.W H'60D3
    .DATA.W H'4029
    .DATA.W H'F9A2
    .DATA.W H'4028
    .DATA.W H'F33D
    .DATA.W H'210B
    .DATA.W H'005A
    .DATA.W H'7420
    .DATA.W H'F93D
    .DATA.W H'0483
    .DATA.W H'4028
    .DATA.W H'310C
    .DATA.W H'005A
    .DATA.W H'74C0
    .DATA.W H'FBFE
    .DATA.W H'4018
    .DATA.W H'FB3D
    .DATA.W H'FF8D
    .DATA.W H'310C
    .DATA.W H'005A
    .DATA.W H'C9FF
    .DATA.W H'002C
    bf AC0ECFD8
    .DATA.W H'600B
AC0ECFD8:
    .DATA.W H'301C
    .DATA.W H'2606
    .DATA.W H'F3FD
    .DATA.W H'6146
    .DATA.W H'F672
    .DATA.W H'6246
    .DATA.W H'F572
    .DATA.W H'2686
    .DATA.W H'6E03
    .DATA.W H'2626
    .DATA.W H'6063
    .DATA.W H'2616
    .DATA.W H'4021
    .DATA.W H'F66B
    .DATA.W H'4310
    .DATA.W H'F64B
    bt/s AC0ED006
    .DATA.W H'F3FD
    .DATA.W H'2662
    .DATA.W H'7520
    .DATA.W H'0683
    bra AC0ECF24
    .DATA.W H'7640
AC0ED006:
    .DATA.W H'2602
    .DATA.W H'7520
    .DATA.W H'6046
    .DATA.W H'0683
    .DATA.W H'7640
    .DATA.W H'4015
    bf/s AC0ED01C
    .DATA.W H'C880
    bf/s AC0ECF24
    .DATA.W H'6346
    .DATA.W H'74FC
AC0ED01C:
    .DATA.W H'74FC
    .DATA.W H'000B
    .DATA.W H'76E0
    .ALIGN 4
P0: .DATA.L H'0C0ED070
P1: .DATA.L H'0C0ED060
}
