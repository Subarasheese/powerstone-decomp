/* @unit 0c0cf408-0c0cf428 */
void dbg_set_text_color(int v);
void dbgmotion_select_text_color(int a, int b)
{
    if ((char)a == (char)b) dbg_set_text_color(0xffff7f00); else dbg_set_text_color(-1);
}
