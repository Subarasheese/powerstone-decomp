/* The SDK's operand-cache range operations by address-array scan (invalidate, purge, write back). Each routine (FUN_0c0feab4 and
   its two copies) is hand assembly in blocks chained by bra/jmp; these three are the blocks that run the scan itself. They are
   entered from the block before with the range in r14 (low), r12 (high) and r13 (the flag that stops at half the array) and the
   caller's interrupt mask in the word at the stack pointer, so the arguments below are those registers.

   The operand cache's address array is at 0xF4000000: 512 entries, 32 bytes apart (offset 0x2000..0x3FE0 is the half this code
   scans). An entry holds the tag of the line in it; tag | offset is the line's address, and every line in [lo, hi] gets the
   operation. The console has no such array on the host, so under NATIVE_PORT the scan does nothing (the port has no cache). */

extern void cache_scan_pop_frame_invalidate(void), cache_scan_pop_frame_purge(void), cache_scan_pop_frame_writeback(void);

#ifdef NATIVE_PORT
#define OC_SCAN(op, lo, hi, half)
#else
#define OC_ARRAY 0xF4000000u
#define OC_TAG   0x1FFFFC00u
extern void sh4_ocbi(unsigned), sh4_ocbp(unsigned), sh4_ocbwb(unsigned);
#define OC_SCAN(op, lo, hi, half) \
    do { \
        unsigned e; \
        for (e = 0x2000; 0x4000 > e; e += 32) { \
            unsigned line = (*(unsigned *)(OC_ARRAY | e) & OC_TAG) | e; \
            if (!(lo > line) && !(line > hi)) op(line); \
            if (half && e == 0x2FE0) break; \
        } \
    } while (0)
#endif

/* invalidate (ocbi), then restore the interrupt mask and pop r12-r14 */
void cache_oc_invalidate_scan(unsigned lo, unsigned hi, unsigned half, unsigned imask)
{
    OC_SCAN(sh4_ocbi, lo, hi, half);
    _builtin_set_imask(imask & 15);
    cache_scan_pop_frame_invalidate();
}

/* purge (ocbp): writes the dirty lines back, then invalidates them */
void cache_oc_purge_scan(unsigned lo, unsigned hi, unsigned half, unsigned imask)
{
    OC_SCAN(sh4_ocbp, lo, hi, half);
    _builtin_set_imask(imask & 15);
    cache_scan_pop_frame_purge();
}

/* write back (ocbwb): writes the dirty lines back and keeps them */
void cache_oc_writeback_scan(unsigned lo, unsigned hi, unsigned half, unsigned imask)
{
    OC_SCAN(sh4_ocbwb, lo, hi, half);
    _builtin_set_imask(imask & 15);
    cache_scan_pop_frame_writeback();
}
