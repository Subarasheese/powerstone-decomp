/* Random-looking gate: scales FUN_0c0df940(a) by 255, takes the unsigned result mod 32 and returns 1 when it is below the byte at index ((byte at 0xC7F305C) - 20) % 12 of the object, else 0. */
float FUN_0c0df940(int a);
int FUN_0c08cc90(int a, unsigned char *obj)
{
    unsigned int u = (unsigned int)(FUN_0c0df940(a) * 255.0f);
    unsigned char r = u % 32;
    int k = (*(unsigned char *)0xC7F305C - 20) % 12;
    if (r < obj[k])
        return 1;
    return 0;
}
