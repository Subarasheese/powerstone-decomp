/* Copies a 12-byte struct into the object the global pointer at 0xC439DD0 names, then sets bit 0 of that object's first word; returns 0. */
typedef struct { int a, b, c; } S12;

int FUN_0c062abe(S12 *src)
{
    S12 **pp = (S12 **)0xC439DD0;
    **pp = *src;
    *(unsigned int *)*pp |= 1;
    return 0;
}
