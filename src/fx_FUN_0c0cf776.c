/* Attract/mode screen step: clears the screen, on first entry resets the demo state, then updates both players and ends with FUN_0c05f952. */
struct v3 { int a, b, c; };
extern void FUN_0c0de280(int, int, int);
extern void FUN_0c0cf5ec(void);
extern void FUN_0c05f2d4(int, int);
extern void FUN_0c05fff4(void);
extern void FUN_0c0cf95c(int);
extern void FUN_0c09b0f8(char *);
extern void FUN_0c099c60(char *);
extern void FUN_0c062f10(char *);
extern void FUN_0c02d1cc(char *);
extern void FUN_0c05f952(void);

void FUN_0c0cf776(void)
{
    char *A;
    char *p;
    int i;
    unsigned char st;

    FUN_0c0de280(0xFF404040, 0xFF404040, 0xFF404040);
    FUN_0c0cf5ec();
    FUN_0c05f2d4(0, 0);
    A = (char *)0xC7E40C4;
    st = *(unsigned char *)0xC7F2EE9;
    if (st == 0) {
        FUN_0c05fff4();
        A[8] = 0;
        A[0x72D8] = 0;
        *(char *)0xC494928 = 0;
        *(char *)(0xC494928 + 24) = 0;
        *(struct v3 *)0xC494958 = *(struct v3 *)0xC33F57C;
        *(struct v3 *)(0xC494958 + 12) = *(struct v3 *)(0xC33F57C + 12);
        *(struct v3 *)0xC494970 = *(struct v3 *)0xC33F594;
        *(struct v3 *)(0xC494970 + 12) = *(struct v3 *)(0xC33F594 + 12);
        *(unsigned char *)0xC7F2EE9 = *(unsigned char *)0xC7F2EE9 + 1;
    } else if (st != 1) {
        FUN_0c05f952();
        return;
    }
    for (i = 0; i < 2; i++) {
        FUN_0c0cf95c(i);
        p = A + (unsigned short)((signed char)i * 0x72D0);
        FUN_0c09b0f8(p);
        FUN_0c099c60(p);
        FUN_0c062f10(p);
        FUN_0c02d1cc(p);
    }
    FUN_0c05f952();
}
