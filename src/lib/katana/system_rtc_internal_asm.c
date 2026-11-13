/* INLINE-ASM: ia_getsr, ia_setsr */
/* AICA RTC internals used by syRtc* (0c0eb0f0-0c0eb238) */

extern void FUN_0c0ed92c(void);
extern void FUN_0c0ed970(void);
extern void FUN_0c0ed8b0(void);

#pragma inline_asm(ia_getsr)
static int ia_getsr(void)
{
    STC SR,R0
}

#pragma inline_asm(ia_setsr)
static void ia_setsr(int v)
{
    LDC R4,SR
}

int sys_strided_copy_masked(unsigned char *src, unsigned char *dst, int elem_size, int count, int src_mode, int dst_mode)
{
    int src_step = 0;
    int dst_step = 0;
    int saved_imask;
    int idx;

    if (src_mode == 1)
        src_step = 1;
    else if (src_mode == 2)
        src_step = -1;
    if (dst_mode == 1)
        dst_step = 1;
    else if (dst_mode == 2)
        dst_step = -1;
    if (*(int *)(*(int *)0xC346B74 + 212) == 1) {
        saved_imask = (ia_getsr() >> 4) & 15;
        ia_setsr((ia_getsr() & ~0xF0) | 0xF0);
    }
    FUN_0c0ed92c();
    FUN_0c0ed970();
    switch (elem_size) {
    case 1:
        if (count > 0) {
            idx = 0;
            do {
                *dst = *src;
                idx++;
                src += src_step;
                dst += dst_step;
            } while (idx < count);
        }
        break;
    case 2:
        if (count > 0) {
            idx = 0;
            do {
                *(short *)dst = *(short *)src;
                idx++;
                src += src_step * 2;
                dst += dst_step * 2;
            } while (idx < count);
        }
        break;
    case 4:
        if (count > 0) {
            idx = 0;
            do {
                *(int *)dst = *(int *)src;
                idx++;
                src += src_step * 4;
                dst += dst_step * 4;
            } while (idx < count);
        }
        break;
    }
    FUN_0c0ed8b0();
    if (*(int *)(*(int *)0xC346B74 + 212) == 1)
        ia_setsr((ia_getsr() & ~0xF0) | ((saved_imask & 15) << 4));
    return 0;
}
