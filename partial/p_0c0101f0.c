/* @unit 0c0101f0-0c0105a2 -extra=a=400 */
extern int vmu_tbl[];
extern char vmu_data[];
extern int pdVmsLcdIsReady(int);
extern int FUN_0c0f2ccc(int);
extern void FUN_0c0f2d38(int, void *, int);
#pragma inline(lcd_dir)
static short lcd_dir(unsigned short i) { return FUN_0c0f2ccc(vmu_tbl[i]); }
void FUN_0c0101f0(int i)
{
    if (pdVmsLcdIsReady(vmu_tbl[i]))
        FUN_0c0f2d38(vmu_tbl[i], vmu_data, lcd_dir(i) == 1 ? 3 : 0);
}
