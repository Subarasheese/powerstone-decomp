/* @unit 0c0d2dd8-0c0d2dec */
extern int g_attract_step3_flag;
void attract_set_step3_flag(int v)
{
    g_attract_step3_flag = v;
}
int attract_take_step3_flag(void)
{
    int t = g_attract_step3_flag;
    g_attract_step3_flag = 0;
    return t;
}
