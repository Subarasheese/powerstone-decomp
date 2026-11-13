/* Resets the match screen: runs the four setup calls, clears the 3-word block at 0xC7F31BC, runs FUN_0c0a2f7a when the byte at 0xC7F2F03 is zero, and when the mode byte (0xC7F302C+69) is 1 or 2 and that player's record holds 8, marks both state bytes with 10; then calls FUN_0c060c88(7), FUN_0c0a334a and clears +86. */
extern void FUN_0c058fa2(void);
extern void FUN_0c02d774(void);
extern void FUN_0c02d82c(void);
extern void FUN_0c02d83c(void);
extern void FUN_0c0a2f7a(void);
extern void FUN_0c060c88(int a);
extern void FUN_0c0a334a(int a, int b, int c);
void FUN_0c052aac(void)
{
    int *blk = (int *)0xC7F31BC;
    char *g = (char *)0xC7F302C;
    char *e = (char *)0xC7E40C4;
    unsigned char m;
    int k;

    FUN_0c058fa2();
    FUN_0c02d774();
    FUN_0c02d82c();
    FUN_0c02d83c();
    blk[2] = 0;
    blk[1] = 0;
    blk[0] = 0;
    if (*(char *)0xC7F2F03 == 0)
        FUN_0c0a2f7a();
    m = g[69];
    if (m == 1 || m == 2) {
        k = m - 1;
        if (*(signed char *)(0xC7F2E46 + (unsigned char)(k * 120)) == 8) {
            g[37] = 10;
            e[(unsigned short)((1 - k) * 29392) + 4] = 10;
        }
    }
    FUN_0c060c88(7);
    FUN_0c0a334a(g[37], e[4], e[29396]);
    g[86] = 0;
}
