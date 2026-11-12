/* @unit 0c0dd2d0-0c0dd310 */
typedef struct { int a, b, c; } S;
extern S g_cccc[];
extern char g_cf80[];
extern void FUN_0c0e19b0(void *);
extern void nlMultiMatrixRevOrder8(void *);
extern void nlMultiMatrix(int);
extern void FUN_0c0e16c0(void);
void nlMakeModelProjectMatrix_objput(void){ FUN_0c0e19b0(0); nlMultiMatrixRevOrder8(g_cf80); }
void nlMakeModelViewProjectMatrix_objput(void){ FUN_0c0e19b0(g_cf80); nlMultiMatrix(g_cccc->c); FUN_0c0e16c0(); }
