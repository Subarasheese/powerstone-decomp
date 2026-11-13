/* INLINE-ASM: hand-written renderer loop: state in registers (r3-r6, r9, r11, r12, T flag from the sibling fragments), bsr into sibling fragments, braf jump table of bra entries, fschg/ftrv/fdiv; no C form */
/* nl_objasm: polygon clip/transform dispatcher: walks the vertex list at r4, transforms each vertex (xmtrx), tests w against r12, accumulates a clip code in r9 and branches by it (braf table) to the clip/send fragment sequences. */
#pragma inline_asm(nl_display_strip_nc_spd)
void nl_display_strip_nc_spd(void)
{
    .DATA.W H'2FA6
    .DATA.W H'2FB6
    .DATA.W H'4F22
    .DATA.W H'6346
    .DATA.W H'F3FD
    .DATA.W H'F03C
    .DATA.W H'FC7C
    .DATA.W H'F2BC
    .DATA.W H'FEFC
    .DATA.W H'F3FD
    .DATA.W H'FC1C
    .DATA.W H'FE3C
AC0E98F8:
    .DATA.W H'EB00
    mov.l P0_0,r13
    jsr @r13
    .DATA.W H'E900
    bf AC0E9902
    bra AC0E9A1C
AC0E9902:
    .DATA.W H'4924
    mov.l P0_1,r13
    jsr @r13
    .DATA.W H'7B01
    mov.l P0_0,r13
    jsr @r13
    .DATA.W H'0009
    bf AC0E9910
    bra AC0E9A92
AC0E9910:
    .DATA.W H'4924
    mov.l P0_1,r13
    jsr @r13
    .DATA.W H'7B01
AC0E9916:
    .DATA.W H'7620
    .DATA.W H'6042
    .DATA.W H'F3FD
    .DATA.W H'6E43
    .DATA.W H'C801
    .DATA.W H'7420
    bf AC0E992A
    .DATA.W H'5EE1
    .DATA.W H'74E8
    .DATA.W H'3E4C
AC0E992A:
    .DATA.W H'F4E9
    .DATA.W H'F6E9
    .DATA.W H'F79D
    .DATA.W H'F2E9
    .DATA.W H'F0E8
    .DATA.W H'F5FD
AC0E9936:
    .DATA.W H'F38D
    .DATA.W H'F62B
    .DATA.W H'F71D
    .DATA.W H'F79D
    .DATA.W H'F743
    .DATA.W H'005A
    .DATA.W H'3C06
    bf SC0E9944
    bra AC0E99DC
    .DATA.W H'0009
SC0E9944:
    .DATA.W H'4310
    .DATA.W H'6046
    .DATA.W H'7B01
    bf/s SC0E994C
    .DATA.W H'6E46
    bra AC0E99FC
    .DATA.W H'0009
SC0E994C:
    .DATA.W H'C801
    .DATA.W H'6263
    bt/s AC0E995E
    .DATA.W H'3E4C
    .DATA.W H'6E43
    .DATA.W H'7418
    .DATA.W H'7EF8
AC0E995E:
    .DATA.W H'F8E9
    .DATA.W H'7440
    .DATA.W H'FAE9
    .DATA.W H'0483
    .DATA.W H'FB9D
    .DATA.W H'74C0
    .DATA.W H'F2E9
    .DATA.W H'F672
    .DATA.W H'F60B
    .DATA.W H'F572
    .DATA.W H'F66B
    .DATA.W H'F9FD
    .DATA.W H'F64B
    .DATA.W H'7520
    .DATA.W H'2622
    .DATA.W H'F0E8
    .DATA.W H'0683
    .DATA.W H'7640
    .DATA.W H'F38D
    .DATA.W H'F62B
    .DATA.W H'FB1D
    .DATA.W H'FB9D
    .DATA.W H'FB83
    .DATA.W H'005A
    .DATA.W H'3C06
    bf SC0E9990
    bra AC0E99D0
    .DATA.W H'0009
SC0E9990:
    .DATA.W H'4310
    .DATA.W H'6046
    .DATA.W H'7B01
    bf/s SC0E9998
    .DATA.W H'6E46
    bra AC0E99F0
    .DATA.W H'0009
SC0E9998:
    .DATA.W H'C801
    .DATA.W H'6263
    bt/s AC0E99AA
    .DATA.W H'3E4C
    .DATA.W H'6E43
    .DATA.W H'7418
    .DATA.W H'7EF8
AC0E99AA:
    .DATA.W H'F4E9
    .DATA.W H'7440
    .DATA.W H'F6E9
    .DATA.W H'0483
    .DATA.W H'F79D
    .DATA.W H'FAB2
    .DATA.W H'F2E9
    .DATA.W H'F9B2
    .DATA.W H'F60B
    .DATA.W H'F5FD
    .DATA.W H'F6AB
    .DATA.W H'74C0
    .DATA.W H'F68B
    .DATA.W H'7520
    .DATA.W H'2622
    .DATA.W H'F0E8
    .DATA.W H'0683
    bra AC0E9936
    .DATA.W H'7640
AC0E99D0:
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
    .DATA.W H'F48C
    bra AC0E99E2
    .DATA.W H'F6AC
AC0E99DC:
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
AC0E99E2:
    .DATA.W H'4924
    .DATA.W H'F3FD
    .DATA.W H'62E3
    .DATA.W H'F40D
    bra AC0E9B12
    .DATA.W H'76E8
    .DATA.W H'0009
AC0E99F0:
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
    .DATA.W H'F48C
    bra AC0E9A02
    .DATA.W H'F6AC
AC0E99FC:
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'74E0
AC0E9A02:
    .DATA.W H'F672
    .DATA.W H'E2FF
    .DATA.W H'F572
    .DATA.W H'F60B
    .DATA.W H'74F8
    .DATA.W H'F66B
    .DATA.W H'7520
    .DATA.W H'F64B
    .DATA.W H'2622
    .DATA.W H'F3FD
    .DATA.W H'0683
    bra AC0E9A74
    .DATA.W H'7620
AC0E9A1C:
    .DATA.W H'4310
    .DATA.W H'7B01
    mov.l P0_0,r13
    jsr @r13
    .DATA.W H'4310
    bt/s SC0E9A24
    .DATA.W H'4924
    bra AC0E9AC8
    .DATA.W H'0009
SC0E9A24:
AC0E9A28:
    .DATA.W H'6042
    .DATA.W H'6E43
    .DATA.W H'C801
    .DATA.W H'7420
    bf/s AC0E9A3A
    .DATA.W H'F79D
    .DATA.W H'74E8
    .DATA.W H'5EE1
    .DATA.W H'3E4C
AC0E9A3A:
    .DATA.W H'F4E9
    .DATA.W H'F5E9
AC0E9A3E:
    .DATA.W H'F6E9
    .DATA.W H'E120
    .DATA.W H'6042
    .DATA.W H'7420
    .DATA.W H'0483
    .DATA.W H'F7ED
    .DATA.W H'C801
    .DATA.W H'74E0
    bf/s AC0E9A5A
    .DATA.W H'6E43
    .DATA.W H'E108
    .DATA.W H'5EE1
    .DATA.W H'7E08
    .DATA.W H'3E4C
AC0E9A5A:
    .DATA.W H'F71D
    .DATA.W H'005A
    .DATA.W H'3C06
    .DATA.W H'7B01
    bt/s SC0E9A62
    .DATA.W H'4924
    bra AC0E9B04
    .DATA.W H'0009
SC0E9A62:
    .DATA.W H'4310
    .DATA.W H'F79D
    bt AC0E9A74
    .DATA.W H'341C
    .DATA.W H'F4E9
    bra AC0E9A3E
    .DATA.W H'F5E9
AC0E9A74:
    .DATA.W H'6046
    .DATA.W H'4015
    bf/s AC0E9A84
    .DATA.W H'C880
    bt AC0E9A80
    bra AC0E98F8
AC0E9A80:
    .DATA.W H'6346
    .DATA.W H'74FC
AC0E9A84:
    .DATA.W H'4F26
    .DATA.W H'E001
    .DATA.W H'6BF6
    .DATA.W H'74FC
    .DATA.W H'6AF6
    .DATA.W H'000B
    .DATA.W H'2C0B
    .ALIGN 4
P0_0: .DATA.L H'0C0E9C60
P0_1: .DATA.L H'0C0E9CA0
AC0E9A92:
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'4310
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9AA0
    .DATA.W H'74E8
AC0E9AA0:
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9AAA
    .DATA.W H'74E8
AC0E9AAA:
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'EB00
    .DATA.W H'EB01
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9AC4
    .DATA.W H'7418
AC0E9AC4:
    bra AC0E9B60
    .DATA.W H'0009
AC0E9AC8:
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'EB01
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9AD6
    .DATA.W H'74E8
AC0E9AD6:
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9AE0
    .DATA.W H'74E8
AC0E9AE0:
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'EB00
    .DATA.W H'EB01
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'E001
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9B00
    .DATA.W H'7418
AC0E9B00:
    bra AC0E9B60
    .DATA.W H'0009
AC0E9B04:
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9B0E
    .DATA.W H'74E8
AC0E9B0E:
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'0009
AC0E9B12:
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'0009
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9B20
    .DATA.W H'74E8
AC0E9B20:
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9B2A
    .DATA.W H'74E8
AC0E9B2A:
    .DATA.W H'74F8
    .DATA.W H'5041
    .DATA.W H'C801
    bt AC0E9B34
    .DATA.W H'74E8
AC0E9B34:
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'7BFE
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'7B01
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9B4E
    .DATA.W H'7418
AC0E9B4E:
    .DATA.W H'7B01
    .DATA.W H'60C3
    .DATA.W H'C801
    bt/s AC0E9B76
    .DATA.W H'6093
    mov.l P1_4,r13
    jsr @r13
    .DATA.W H'0009
    bra AC0E9B76
    .DATA.W H'6093
AC0E9B60:
    mov.l P1_1,r13
    jsr @r13
    .DATA.W H'7B01
    mov.l P1_0,r13
    jsr @r13
    .DATA.W H'4924
    .DATA.W H'60C3
    .DATA.W H'C801
    bt/s AC0E9B76
    .DATA.W H'6093
    mov.l P1_4,r13
    jsr @r13
    .DATA.W H'0009
    .DATA.W H'6093
AC0E9B76:
    .DATA.W H'C907
    .DATA.W H'4008
    .DATA.W H'0023
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
    bra AC0E9B9E
    .DATA.W H'0009
    bra AC0E9BBC
    .DATA.W H'0009
    bra AC0E9BD6
    .DATA.W H'0009
    bra AC0E9BE6
    .DATA.W H'0009
    bra AC0E9C06
    .DATA.W H'0009
    bra AC0E9C14
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
AC0E9B9E:
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FE
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'70FF
    .DATA.W H'60B3
    .DATA.W H'4310
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FF
    bt SC0E9BB6
    bra AC0E9B60
    .DATA.W H'0009
SC0E9BB6:
    bra AC0E9A74
    .DATA.W H'0009
AC0E9BBC:
    .DATA.W H'0008
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'60B3
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FF
    .DATA.W H'4310
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'60B3
    bt SC0E9BD0
    bra AC0E9B60
    .DATA.W H'0009
SC0E9BD0:
    bra AC0E9A74
    .DATA.W H'0009
AC0E9BD6:
    .DATA.W H'60B3
    .DATA.W H'0018
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FE
    .DATA.W H'4310
    bt AC0E9C02
    bra AC0E9A28
    .DATA.W H'0009
AC0E9BE6:
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FE
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'70FF
    .DATA.W H'4310
    mov.l P1_3,r13
    jsr @r13
    .DATA.W H'60B3
    bt AC0E9C02
    bra AC0E9916
    .DATA.W H'7B01
AC0E9C02:
    bra AC0E9A74
    .DATA.W H'0009
AC0E9C06:
    .DATA.W H'60B3
    .DATA.W H'4310
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FF
    bt SC0E9C0E
    bra AC0E9B60
    .DATA.W H'0009
SC0E9C0E:
    bra AC0E9A74
    .DATA.W H'0009
AC0E9C14:
    .DATA.W H'60B3
    .DATA.W H'C801
    bt AC0E9C36
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FF
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FE
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P1_2,r13
    jsr @r13
    .DATA.W H'70FF
    bra AC0E9C46
    .DATA.W H'0009
    .ALIGN 4
P1_0: .DATA.L H'0C0E9CE0
P1_1: .DATA.L H'0C0E9C60
P1_2: .DATA.L H'0C0E9D80
P1_3: .DATA.L H'0C0E9D40
P1_4: .DATA.L H'0C0E9D00
AC0E9C36:
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P2_0,r13
    jsr @r13
    .DATA.W H'70FE
    .DATA.W H'60B3
    .DATA.W H'0008
    mov.l P2_0,r13
    jsr @r13
    .DATA.W H'70FF
AC0E9C46:
    .DATA.W H'4310
    mov.l P2_1,r13
    jsr @r13
    .DATA.W H'60B3
    bt SC0E9C4C
    bra AC0E9B60
    .DATA.W H'0009
SC0E9C4C:
    bra AC0E9A74
    .DATA.W H'0009
    .DATA.W H'0009
    .ALIGN 4
P2_0: .DATA.L H'0C0E9D80
P2_1: .DATA.L H'0C0E9D40
}
