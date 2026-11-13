/* Scene step on the state byte at 0xC7F2EE0+6: step 0 advances it, clears +7, resets the scene (FUN_0c05f2d4, the block at 0xC7F31BC set to -1, FUN_0c0a2f7a, seven FUN_0c0a2f66 calls, FUN_0c060c88(2), FUN_0c0d8e6e) and falls into step 1 (FUN_0c02b828, FUN_0c05948c(5), FUN_0c0593e0(5)); every step then checks flag 16 at +308 and the fade state. */
extern void FUN_0c05f2d4(int a, int b);
extern void FUN_0c0a2f7a(void);
extern void FUN_0c0a2f66(int a);
extern void FUN_0c060c88(int a);
extern int FUN_0c0d8e6e(int a, int b, int c);
extern void FUN_0c02b828(void);
extern void FUN_0c05948c(int a);
extern void FUN_0c0593e0(int a);
extern void FUN_0c0d4696(void);
extern int thunk_FUN_0c0d45fe(void);
extern void FUN_0c0a2f52(void);
extern void FUN_0c0a3796(int a, int b);
void FUN_0c0d452e(void)
{
    char *g = (char *)0xC7F2EE0;
    int *blk;

    switch ((unsigned char)g[6]) {
    case 0:
        g[6] = g[6] + 1;
        g[7] = 0;
        FUN_0c05f2d4(3, 0);
        blk = (int *)0xC7F31BC;
        blk[2] = -1;
        blk[1] = -1;
        blk[0] = -1;
        FUN_0c0a2f7a();
        FUN_0c0a2f66(0);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(3);
        FUN_0c0a2f66(4);
        FUN_0c060c88(2);
        FUN_0c0d8e6e(28, 0, 240);
    case 1:
        FUN_0c02b828();
        FUN_0c05948c(5);
        FUN_0c0593e0(5);
    default:
        break;
    }
    if (*(int *)(g + 308) & 16)
        FUN_0c0d4696();
    if (thunk_FUN_0c0d45fe()) {
        FUN_0c0a2f52();
        FUN_0c0a3796(0, 67);
    }
    /* the original ends by branching to a bare rts at 0x0C0D46E0 (a shared return in the literal pool); the checker sees that branch as a call */
    ((void (*)(void))0x0C0D46E0)();
}
