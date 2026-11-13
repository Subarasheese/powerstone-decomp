/* INLINE-ASM: hand-written renderer loop: register-passed state (r3, r4, r9, r12), bsr into sibling fragments and a braf jump table of bra entries; no C form */
/* nl_objasm: polygon loop: per command at r4 calls the clip test fragment, then the transform/send fragments per vertex, and dispatches on the returned code r9 (braf table) to the clip variants. */
#pragma inline_asm(FUN_0c0e9ea0)
void FUN_0c0e9ea0(void)
{
    .DATA.W H'2FA6
    .DATA.W H'2FB6
    .DATA.W H'4F22
    .DATA.W H'6346
AC0E9EA8:
    mov.l P0,r13
    jsr @r13
    .DATA.W H'E900
    .DATA.W H'6093
    .DATA.W H'8800
    bt AC0E9F0E
    .DATA.W H'8807
    bt AC0E9F2C
    mov.l P1,r13
    jsr @r13
    .DATA.W H'EB00
    mov.l P2,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1,r13
    jsr @r13
    .DATA.W H'EB01
    mov.l P2,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1,r13
    jsr @r13
    .DATA.W H'EB02
    mov.l P2,r13
    jsr @r13
    .DATA.W H'0009
    .DATA.W H'60C3
    .DATA.W H'C801
    bt/s AC0E9EDA
    .DATA.W H'4908
    mov.l P3,r13
    jsr @r13
    .DATA.W H'0009
AC0E9EDA:
    .DATA.W H'0923
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
    bra AC0E9F4E
    .DATA.W H'0009
    bra AC0E9F6C
    .DATA.W H'0009
    bra AC0E9F8C
    .DATA.W H'0009
    bra AC0E9FA6
    .DATA.W H'0009
    bra AC0E9FC6
    .DATA.W H'0009
    bra AC0E9FE0
    .DATA.W H'0009
    .DATA.W H'0009
    .DATA.W H'0009
AC0E9EFE:
    .DATA.W H'4310
    bf AC0E9EA8
    .DATA.W H'E001
    .DATA.W H'4F26
    .DATA.W H'2C0B
    .DATA.W H'6BF6
    .DATA.W H'000B
    .DATA.W H'6AF6
AC0E9F0E:
    .DATA.W H'6933
    mov.l P1,r13
    jsr @r13
    .DATA.W H'E303
    mov.l P4,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P4,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P1,r13
    jsr @r13
    .DATA.W H'0009
    mov.l P4,r13
    jsr @r13
    .DATA.W H'0009
    bra AC0E9EFE
    .DATA.W H'6393
AC0E9F2C:
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9F36
    .DATA.W H'7418
AC0E9F36:
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9F40
    .DATA.W H'7418
AC0E9F40:
    .DATA.W H'6042
    .DATA.W H'C801
    .DATA.W H'7408
    bt AC0E9F4A
    .DATA.W H'7418
AC0E9F4A:
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9F4E:
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E001
    .DATA.W H'0008
    .DATA.W H'EB02
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0018
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E001
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9F6C:
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    .DATA.W H'EB01
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    .DATA.W H'EB02
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E002
    .DATA.W H'0018
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E001
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9F8C:
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    .DATA.W H'EB01
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0018
    .DATA.W H'EB02
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9FA6:
    .DATA.W H'0008
    .DATA.W H'EB01
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E001
    .DATA.W H'0008
    .DATA.W H'EB02
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0018
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E002
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9FC6:
    .DATA.W H'0008
    .DATA.W H'EB01
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E001
    .DATA.W H'0018
    .DATA.W H'EB02
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E001
    bra AC0E9EFE
    .DATA.W H'0009
AC0E9FE0:
    .DATA.W H'0008
    .DATA.W H'EB02
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E000
    .DATA.W H'0008
    mov.l P6,r13
    jsr @r13
    .DATA.W H'E001
    .DATA.W H'0018
    mov.l P5,r13
    jsr @r13
    .DATA.W H'E002
    bra AC0E9EFE
    .DATA.W H'0009
    .ALIGN 4
P0: .DATA.L H'0C0EA000
P1: .DATA.L H'0C0E9C60
P2: .DATA.L H'0C0E9CE0
P3: .DATA.L H'0C0E9D00
P4: .DATA.L H'0C0E9CA0
P5: .DATA.L H'0C0E9D40
P6: .DATA.L H'0C0E9D80
}
