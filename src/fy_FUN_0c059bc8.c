/* Picks a random-looking table entry: (unsigned)(FUN_0c0df940() * 255) % 16 indexes a byte table, passed on to FUN_0c0599fc. */
extern float FUN_0c0df940(void);
extern int FUN_0c0599fc(int);
void FUN_0c059bc8(void)
{
    unsigned int v = (unsigned int)(FUN_0c0df940() * 255.0f);
    FUN_0c0599fc(((signed char *)0x0C32E221)[v % 16]);
}
