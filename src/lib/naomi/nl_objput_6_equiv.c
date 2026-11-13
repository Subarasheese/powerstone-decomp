/* same module (model projection matrices) (0c0dd2d0-0c0dd310) */

int nlMultiMatrix(int);
int FUN_0c0e16c0(void);
int nlPushMatrix(int);

int nlMakeModelViewProjectMatrix_objput(void)
{
    nlPushMatrix(0xC7FCF80);
    nlMultiMatrix((*(int *)0xC7FCCD4));
    return FUN_0c0e16c0();
}
