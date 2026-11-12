/* @unit 0c0122c6-0c0122e6 */
struct S1 { char pad[12]; int m; char pad2[8]; int r; };
void FUN_0c0122c6(struct S1 *p)
{
    int i;
    p->r = 0;
    for (i = 0; i < 8; i++) {
        if (p->m & (1 << i)) {
            p->r = i;
            break;
        }
    }
}
