/* same module (objput sub) (0c0dd1f0-0c0dd260) */

int FUN_0c0e7240(void);
int nlPopMatrix(int a4);

int nlobjput_sub(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        FUN_0c0e7240();
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        FUN_0c0e7240();
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}
