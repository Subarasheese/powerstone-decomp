/* @unit 0c0101f0-0c0105a2 -extra=a=400 */
extern int g_vmu_port_handles[];
extern char g_vmu_lcd_buf[];
extern int pdVmsLcdIsReady(int);
extern int FUN_0c0f2ccc(int);
extern void FUN_0c0f2d38(int, void *, int);
#pragma inline(lcd_dir)
static short lcd_dir(unsigned short i) { return FUN_0c0f2ccc(g_vmu_port_handles[i]); }
void vmu_lcd_refresh(int i)
{
    if (pdVmsLcdIsReady(g_vmu_port_handles[i]))
        FUN_0c0f2d38(g_vmu_port_handles[i], g_vmu_lcd_buf, lcd_dir(i) == 1 ? 3 : 0);
}
