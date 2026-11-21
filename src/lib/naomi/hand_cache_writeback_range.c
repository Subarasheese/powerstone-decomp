/* INLINE-ASM: cache_writeback_range, the original machine code: a cache routine whose paths jump into its own code and into a helper that pops its frame */
extern void cache_run_uncached_writeback(void);
extern void cache_scan_pop_frame_writeback(void);
#pragma inline_asm(cache_writeback_range)
void cache_writeback_range(void)
{
    .IMPORT _cache_run_uncached_writeback
    .IMPORT _cache_scan_pop_frame_writeback
    mov.l r14,@-r15
    mov.l r13,@-r15
    mov.l r12,@-r15
    add #-8,r15
    mov r5,r13
    tst r13,r13
    bf/s L0c0fede0
    mov r4,r12
    mov.l PA_cache_scan_pop_frame_writeback,r3
    jmp @r3
    nop
L0c0fede0:
    mov.l PN_00010000,r2
    mov.l PN_1fffffe0,r14
    cmp/hs r2,r13
    bf/s L0c0fedf0
    and r12,r14
    mov.l PL_0c0fee26,r3
    jmp @r3
    nop
L0c0fedf0:
    mov #31,r5
    mov r14,r4
    and r12,r5
    add r13,r5
    bra L0c0fee10
    nop
L0c0fee10:
    add #31,r5
    shlr2 r5
    shlr2 r5
    shlr r5
L0c0fee18:
    ocbwb @r4
    dt r5
    bf/s L0c0fee18
    add #32,r4
    mov.l PA_cache_scan_pop_frame_writeback,r2
    jmp @r2
    nop
L0c0fee26:
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
    bra _cache_run_uncached_writeback
    nop
    .ALIGN 4
PA_cache_scan_pop_frame_writeback:
    .DATA.L _cache_scan_pop_frame_writeback
PN_00010000:
    .DATA.L H'00010000
PN_1fffffe0:
    .DATA.L H'1FFFFFE0
PL_0c0fee26:
    .DATA.L L0c0fee26
PW_ff0f:
    .DATA.W H'FF0F
}
