/* Walks a chain of records starting at a4+24 while their flag word is negative: replaces bits 16-17 of the word with the low bits of a global (shifted by 16) and steps to the next record at p + 80 + (word at p+76)/4*4. */
void FUN_0c02cb4a(int *a4)
{
    int *p;
    int v;

    if (*(signed char *)0xC7F319E != 0) {
        p = (int *)((char *)a4 + 24);
        while (*p < 0) {
            v = *p & 0xFFFCFFFF;
            *p = v;
            *p = v | (*(int *)0xC321190 << 16);
            p = (int *)((char *)p + *(int *)((char *)p + 76) / 4 * 4 + 80);
        }
    }
}
