/* @unit 0c114ab8-0c114aec -cpu=sh3 */
extern void (*mwg_rna_err_func)(void *, char *);
extern void *mwg_rna_err_obj;
void FUN_0c114ab8(void (*f)(void *, char *), void *o)
{
    mwg_rna_err_func = f;
    mwg_rna_err_obj = o;
}
void mwRnaErrCallFunc(char *ecode)
{
    if (mwg_rna_err_func != (void *)0) {
        mwg_rna_err_func(mwg_rna_err_obj, ecode);
    }
}
