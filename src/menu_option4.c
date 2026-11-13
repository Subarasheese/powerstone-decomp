/* @unit 0c01b9b4-0c01b9f4 */
struct G { char pad[12]; volatile unsigned short a; char pad2[18]; volatile unsigned short b; };
extern struct G g_pad_state;
int pad_get_start_mask(void)
{
    if ((g_pad_state.a & 8) && (g_pad_state.b & 8)) return 3;
    if (g_pad_state.a & 8) return 1;
    if (g_pad_state.b & 8) return 2;
    return 0;
}
