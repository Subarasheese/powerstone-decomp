/* Maps a percentage (clamped to 99) to a 5-step level via a byte table and passes it on to FUN_0c0599fc. */
extern int FUN_0c0599fc(int);
void FUN_0c059b6c(unsigned char pct)
{
    int c = pct;
    if (c > 99)
        c = 99;
    FUN_0c0599fc(((signed char *)0x0C32E210)[c / 20]);
}
