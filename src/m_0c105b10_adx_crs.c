/* @unit 0c105b10-0c105b70 -cpu=sh3 */
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
typedef char *va_list;
#define va_start(ap,pn) ((ap)=(char*)&(pn)+4)
#define va_end(ap)
extern int adxcrs_lvl;
extern int adxcrs_msk;
extern void (*adxerr_func)(void *, char *);
extern void *adxerr_obj;
extern char adxerr_msg[256];
extern void *memset(void *, int, unsigned);
extern int vsprintf(char *, const char *, va_list);

void FUN_0c105b10(void)
{
    adxcrs_lvl = 0;
}
void ADXCRS_Lock(void)
{
    if (adxcrs_lvl == 0) {
        adxcrs_msk = _builtin_get_imask();
        _builtin_set_imask(15);
    }
    adxcrs_lvl++;
}
void ADXCRS_Unlock(void)
{
    adxcrs_lvl--;
    if (adxcrs_lvl == 0) {
        _builtin_set_imask(adxcrs_msk);
    }
}
