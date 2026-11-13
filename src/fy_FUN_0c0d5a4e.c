/* Debug dump of the flag bits of entry n of the table at g361bf0 (20 bytes each, flags ushort at +8): positions each flag on screen (FUN_0c0e06e0, column 30 and 31) and prints it as "%d\n" through FUN_0c0e0720. */
extern char g361bf0[];
extern void FUN_0c0e06e0(int, int);
extern void FUN_0c0e0720(char *, ...);

void FUN_0c0d5a4e(char n)
{
    unsigned short *e;
    int row;
    int a, b, c, d;

    row = n * 20;
    a = row + 10;
    FUN_0c0e06e0(a, 30);
    e = (unsigned short *)(g361bf0 + (signed char)(n * 20) + 8);
    FUN_0c0e0720((char *)0xC154F90, (*e & 4) ? 1 : 0);
    b = row + 11;
    FUN_0c0e06e0(b, 30);
    FUN_0c0e0720((char *)0xC154F90, (*e & 2) ? 1 : 0);
    c = row + 12;
    FUN_0c0e06e0(c, 30);
    FUN_0c0e0720((char *)0xC154F90, (*e & 1) ? 1 : 0);
    d = row + 13;
    FUN_0c0e06e0(d, 30);
    FUN_0c0e0720((char *)0xC154F90, 0);
    FUN_0c0e06e0(a, 31);
    FUN_0c0e0720((char *)0xC154F90, (*e & 0x400) ? 1 : 0);
    FUN_0c0e06e0(b, 31);
    FUN_0c0e0720((char *)0xC154F90, (*e & 0x200) ? 1 : 0);
    FUN_0c0e06e0(c, 31);
    FUN_0c0e0720((char *)0xC154F90, (*e & 0x10000) ? 1 : 0);
    FUN_0c0e06e0(d, 31);
    FUN_0c0e0720((char *)0xC154F90, (*e & 0x20000) ? 1 : 0);
}
