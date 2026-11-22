/* INLINE-ASM: FUN_0c0fe978, the original machine code: a cache routine whose paths jump into its own code and into a helper that pops its frame */
extern void FUN_0c0feab4(void);
extern void cache_oc_invalidate_scan(void);
extern void cache_scan_pop_frame_invalidate(void);
#pragma inline_asm(FUN_0c0fe978)
void FUN_0c0fe978(void)
{
    .IMPORT _FUN_0c0feab4
    .IMPORT _cache_oc_invalidate_scan
    .IMPORT _cache_scan_pop_frame_invalidate
    mov.l r14,@-r15
    mov.l r13,@-r15
    mov.l r12,@-r15
    add #-8,r15
    mov r5,r13
    tst r13,r13
    bf/s L0c0fe98e
    mov r4,r12
    mov.l PA_cache_scan_pop_frame_invalidate,r3
    jmp @r3
    nop
L0c0fe98e:
    mov.l PN_00030000,r2
    mov.l PN_1fffffe0,r14
    cmp/hs r2,r13
    bf/s L0c0fe99e
    and r12,r14
    mov.l PL_0c0fe9de,r3
    jmp @r3
    nop
L0c0fe99e:
    mov #31,r5
    mov r14,r4
    and r12,r5
    add r13,r5
    bra L0c0fe9c8
    nop
    fmov fr2,fr0
    mac.l @r0+,@r12+
    mov.b @(r0,r1),r0
    fadd fr0,fr15
L0c0fe9c8:
    add #31,r5
    shlr2 r5
    shlr2 r5
    shlr r5
L0c0fe9d0:
    ocbi @r4
    dt r5
    bf/s L0c0fe9d0
    add #32,r4
    mov.l PA_cache_scan_pop_frame_invalidate,r2
    jmp @r2
    nop
L0c0fe9de:
    stc sr,r0
    mov.w PW_ff0f,r3
    shlr2 r0
    shlr2 r0
    and #15,r0
    mov.w r0,@r15
    stc sr,r0
    and r3,r0
    or #240,r0
    ldc r0,sr
    bra L0c0fe9fc
    nop
L0c0fe9fc:
    mova L0c0fea0c,r0
    mov.l PN_a0000000,r1
    or r0,r1
    jmp @r1
    nop
    nop
    .ALIGN 4
L0c0fea0c:
    mov.l PN_ff00001c,r2
    add r13,r12
    mov #-7,r1
    mov.l PN_1fffffe0,r3
    mov.l @r2,r4
    mov #1,r5
    add #-1,r12
    mov r4,r13
    shlr2 r13
    shld r1,r4
    shlr2 r13
    and r5,r4
    shlr r13
    mov.l r4,@(4,r15)
    and r3,r12
    mov r14,r4
    and r5,r13
    mov r12,r5
    mov r13,r6
    bra L0c0fea40
    nop
L0c0fea40:
    mov.l r10,@-r15
    mov.l r9,@-r15
    mov.l r8,@-r15
    mov.l PN_00000000,r0
    mov.l PN_f4000000,r8
    mov.l PN_1ffffc00,r9
    mov.l PN_00001fff,r10
    mov.l PN_00002000,r2
    mov.l PN_00000fe0,r3
    bra L0c0fea8e
    nop
L0c0fea70:
    mov r0,r1
    or r8,r1
    mov.l @r1,r1
    and r9,r1
    or r0,r1
    cmp/hi r1,r4
    bt L0c0fea84
    cmp/hi r5,r1
    bt L0c0fea84
    ocbi @r1
L0c0fea84:
    tst r6,r6
    bt L0c0fea8c
    cmp/eq r0,r3
    bt L0c0fea92
L0c0fea8c:
    add #32,r0
L0c0fea8e:
    cmp/hi r0,r2
    bt L0c0fea70
L0c0fea92:
    mov.l @r15+,r8
    mov.l @r15+,r9
    mov.l @r15+,r10
    mov.l @(4,r15),r3
    tst r3,r3
    bf L0c0feaa4
    mov.l PA_cache_oc_invalidate_scan,r3
    jmp @r3
    nop
L0c0feaa4:
    mov r14,r4
    mov r12,r5
    mov r13,r6
    bra _FUN_0c0feab4
    nop
    .ALIGN 4
PA_cache_scan_pop_frame_invalidate:
    .DATA.L _cache_scan_pop_frame_invalidate
PN_00030000:
    .DATA.L H'00030000
PN_1fffffe0:
    .DATA.L H'1FFFFFE0
PL_0c0fe9de:
    .DATA.L L0c0fe9de
PN_a0000000:
    .DATA.L H'A0000000
PN_ff00001c:
    .DATA.L H'FF00001C
PN_00000000:
    .DATA.L H'00000000
PN_f4000000:
    .DATA.L H'F4000000
PN_1ffffc00:
    .DATA.L H'1FFFFC00
PN_00001fff:
    .DATA.L H'00001FFF
PN_00002000:
    .DATA.L H'00002000
PN_00000fe0:
    .DATA.L H'00000FE0
PA_cache_oc_invalidate_scan:
    .DATA.L _cache_oc_invalidate_scan
PW_ff0f:
    .DATA.W H'FF0F
}
