/* @unit 0c0dca60-0c0dcae0 -align16 */
extern int *g8_ptr_9c;
extern int g8_obj_98;
extern void FUN_0c0efc6a(int *, int, int, int, int, int);
void FUN_0c0dca60(int a, int b, int c, int d, int e)
{
    int i;
    register int m = e;
    *g8_ptr_9c |= 0x800000;
    for (i = 0; i < 5; i++) {
        if (m & 1)
            FUN_0c0efc6a(&g8_obj_98, i, a, b, c, d);
        m >>= 1;
    }
}
void FUN_0c0dcac0(int a, int b)
{
    *g8_ptr_9c = (b << 16) | 0x800000;
}
