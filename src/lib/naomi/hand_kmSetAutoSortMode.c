/* Hand-written: the auto-sort mode switch. When the stored mode (0C817184) equals the argument (cmp/eq, bf past the body), the pending flag (0C817180) is
   set to 3 and the stored mode becomes 0 for the argument 1, else 1. The original leaves the stack pointer in r0 (rts; mov r15,r0):
   nothing reads it, so the function is void. */
void kmSetAutoSortMode(int mode)
{
    if (*(volatile int *)0xC817184 == mode) {
        *(volatile int *)0xC817180 = 3;
        if (mode == 1) {
            *(volatile int *)0xC817184 = 0;
        } else {
            *(volatile int *)0xC817184 = 1;
        }
    }
}
