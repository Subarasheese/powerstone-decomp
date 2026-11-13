/* @unit 0c105b70-0c105c04 -cpu=sh3 */
typedef char *va_list;
#define va_start(ap,pn) ((ap) = ((((int)&(pn)+4) & 3) ? (char*)&(pn)+8 : (char*)&(pn)+4))
#define va_end(ap)
extern void (*adxerr_func)(void *, char *);
extern void *adxerr_obj;
extern char adxerr_msg[256];
extern void *memset(void *, int, unsigned);
extern int vsprintf(char *, const char *, va_list);
void ADXERR_Init(void)
{
    memset(adxerr_msg, 0, sizeof(adxerr_msg));
    adxerr_func = (void*)0;
    adxerr_obj = (void*)0;
}
void ADXERR_Finish(void)
{
    memset(adxerr_msg, 0, sizeof(adxerr_msg));
    adxerr_func = (void*)0;
    adxerr_obj = (void*)0;
}
void ADXERR_EntryErrFunc(void (*f)(void *, char *), void *o)
{
    adxerr_func = f;
    adxerr_obj = o;
}
void ADXERR_CallErrFunc(char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    vsprintf(adxerr_msg, fmt, args);
    va_end(args);
    if (adxerr_func != 0) {
        adxerr_func(adxerr_obj, adxerr_msg);
    }
}
