/* @unit 0c01b9b4-0c01b9f4 */
struct G { char pad[12]; volatile unsigned short a; char pad2[18]; volatile unsigned short b; };
extern struct G g361bf0;
int FUN_0c01b9b4(void)
{
    if ((g361bf0.a & 8) && (g361bf0.b & 8)) return 3;
    if (g361bf0.a & 8) return 1;
    if (g361bf0.b & 8) return 2;
    return 0;
}
