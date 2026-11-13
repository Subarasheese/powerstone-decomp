/* Lays out a cell grid in memory behind base: (a+1) rows of 60 bytes, then a table of (b+1) 8-byte entries (0, -1) and a bitmap of (b+32)/32 words cleared, recording the table and bitmap addresses and sizes in globals. */
void FUN_0c0ddd40(int, int);
void FUN_0c0dd8e0(int base, int a, int b)
{
    int rows, cols, i, j;

    rows = a + 1;
    cols = b + 1;
    FUN_0c0ddd40(base, rows);
    *(int *)0xC7F87C8 = base + rows * 60 + 8;
    *(int *)0xC7F87CC = *(int *)0xC7F87C8 + cols * 8;
    *(int *)0xC3468E4 = (cols + 31) / 32;
    *(int *)0xC3468E0 = cols - 1;
    for (i = -1; i < *(int *)0xC3468E0; i++) {
        ((int *)*(int *)0xC7F87C8)[2 * i] = 0;
        ((int *)*(int *)0xC7F87C8)[2 * i + 1] = -1;
    }
    for (j = 0; j < *(int *)0xC3468E4; j++)
        ((int *)*(int *)0xC7F87CC)[j] = 0;
    *(int *)0xC7FD490 = 0;
}
