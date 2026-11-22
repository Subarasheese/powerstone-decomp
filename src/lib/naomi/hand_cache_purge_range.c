/* INLINE-ASM: cache_purge_range, the original machine code: a cache routine whose paths jump into its own code and into a helper that pops its frame */
extern void cache_run_uncached_purge(void);
extern void cache_scan_pop_frame_purge(void);
#pragma inline_asm(cache_purge_range)
void cache_purge_range(void)
{
    .IMPORT _cache_run_uncached_purge
    .IMPORT _cache_scan_pop_frame_purge
    mov.l r14,@-r15
    mov.l r13,@-r15
    mov.l r12,@-r15
    add #-8,r15
    mov r5,r13
    tst r13,r13
    bf/s L0c0febbc
    mov r4,r12
    mov.l PA_cache_scan_pop_frame_purge,r3
    jmp @r3
    nop
L0c0febbc:
    mov.l PN_00010000,r2
    mov.l PN_1fffffe0,r14
    cmp/hs r2,r13
    bf/s L0c0febcc
    and r12,r14
    mov.l PL_0c0fec02,r3
    jmp @r3
    nop
L0c0febcc:
    mov #31,r5
    mov r14,r4
    and r12,r5
    add r13,r5
    bra L0c0febec
    nop
L0c0febec:
    add #31,r5
    shlr2 r5
    shlr2 r5
    shlr r5
L0c0febf4:
    ocbp @r4
    dt r5
    bf/s L0c0febf4
    add #32,r4
    mov.l PA_cache_scan_pop_frame_purge,r2
    jmp @r2
    nop
L0c0fec02:
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
    bra _cache_run_uncached_purge
    nop
    .ALIGN 4
PA_cache_scan_pop_frame_purge:
    .DATA.L _cache_scan_pop_frame_purge
PN_00010000:
    .DATA.L H'00010000
PN_1fffffe0:
    .DATA.L H'1FFFFFE0
PL_0c0fec02:
    .DATA.L L0c0fec02
PW_ff0f:
    .DATA.W H'FF0F
}
