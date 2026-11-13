/* INLINE-ASM: get_sr, set_sr */
/* same module (0c0eb400-0c0eb5a4) */

extern int *g_tbl6b74;
void FUN_0c0ed92c(void);
void FUN_0c0ed970(void);
void FUN_0c0ed750(void);
void FUN_0c0ed8b0(void);

int get_sr(void);
void set_sr(int v);

#pragma inline_asm(get_sr)
int get_sr(void)
{
    STC SR,R0
}

#pragma inline_asm(set_sr)
void set_sr(int v)
{
    LDC R4,SR
}

int sys_strided_copy_blocks(char *a, char *b, int mode, int n, int s1, int s2)
{
    int sa = 0;
    int da = 0;
    int save = 0;
    int i;
    char *s;
    char *d;
    if (s1 == 0) sa = 0; else if (s1 == 1) sa = 1; else if (s1 == 2) sa = -1;
    if (s2 == 0) da = 0; else if (s2 == 1) da = 1; else if (s2 == 2) da = -1;
    if (*(int *)((char *)g_tbl6b74 + 212) == 1) {
        save = (get_sr() >> 4) & 15;
        set_sr((get_sr() & ~0xF0) | 0xF0);
    }
    FUN_0c0ed92c();
    FUN_0c0ed970();
    if (mode == 1) {
        s = a;
        d = b;
        for (i = 0; i < n; i++) {
            if ((i & 7) == 0) {
                FUN_0c0ed970();
                FUN_0c0ed750();
            }
            *d = *s;
            s += sa;
            d += da;
        }
    } else if (mode == 2) {
        s = a;
        d = b;
        for (i = 0; i < n; i++) {
            if ((i & 7) == 0) {
                FUN_0c0ed970();
                FUN_0c0ed750();
            }
            *(short *)d = *(short *)s;
            s += sa * 2;
            d += da * 2;
        }
    } else if (mode == 4) {
        s = a;
        d = b;
        for (i = 0; i < n; i++) {
            if ((i & 7) == 0) {
                FUN_0c0ed970();
                FUN_0c0ed750();
            }
            *(int *)d = *(int *)s;
            s += sa * 4;
            d += da * 4;
        }
    }
    FUN_0c0ed8b0();
    if (*(int *)((char *)g_tbl6b74 + 212) == 1)
        set_sr((get_sr() & ~0xF0) | ((save & 15) << 4));
    return 0;
}
