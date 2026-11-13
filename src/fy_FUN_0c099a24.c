/* Runs the object's five update steps, then copies the 12-byte record of the other side (index 1 - side, 3520 bytes apart) onto the one at the object's current side (byte at +0x71F1). */
typedef struct { int a, b, c; } S12;
extern void FUN_0c062de8(char *);
extern void FUN_0c01013c(char *);
extern void FUN_0c099a88(char *);
extern void FUN_0c099966(char *);
extern void FUN_0c099930(char *);
extern void FUN_0c05ef8c(int);

void FUN_0c099a24(char *o)
{
    int side;

    FUN_0c062de8(o);
    FUN_0c01013c(o);
    FUN_0c099a88(o);
    FUN_0c099966(o);
    FUN_0c099930(o);
    FUN_0c05ef8c(o[3]);
    side = *(signed char *)(o + 0x71F1);
    *(S12 *)(o + 0x614 + (short)(side * 3520)) = *(S12 *)(o + 0x614 + (short)((1 - side) * 3520));
}
