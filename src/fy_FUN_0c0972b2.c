/* Finds the slot of type 10 in the object (FUN_0c09caea), copies the 24-byte record that slot points to and returns whether its float at +12 is not above its float at +20. */
typedef struct { int w[6]; } S24;
extern int FUN_0c09caea(char *o, int type);
int FUN_0c0972b2(char *o)
{
    S24 r;
    signed char i = FUN_0c09caea(o, 10);
    r = **(S24 **)(o + 0x2C0 + (i - 1) * 4);
    return !(*(float *)((char *)&r + 12) > *(float *)((char *)&r + 20));
}
