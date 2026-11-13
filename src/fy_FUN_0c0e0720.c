/* Debug print: formats its stack arguments (format string is the fifth argument) with vsprintf into the buffer at 0xC7F89F0, then hands the buffer to FUN_0c0e05b0. */
int vsprintf(char *buf, const char *fmt, char *ap);
void FUN_0c0e05b0(char *buf);
int FUN_0c0e0720(int a, int b, int c, int d, const char *fmt, int arg1)
{
    vsprintf((char *)0xC7F89F0, fmt, (char *)&arg1);
    FUN_0c0e05b0((char *)0xC7F89F0);
    return 0;
}
