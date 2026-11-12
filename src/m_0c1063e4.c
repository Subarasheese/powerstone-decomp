/* @unit 0c1063e4-0c10641c -cpu=sh3 -extra=a=400 */
typedef struct { int w[40]; } S;
extern int ADXB_GetLpStartOfst(int);
extern int ADXB_GetLpEndPos(int);
extern int ADXB_GetLpEndOfst(int);
int ADXSJD_GetLpStartOfst(S *p) { return ADXB_GetLpStartOfst(p->w[1]); }
int ADXSJD_GetLpEndPos(S *p) { return ADXB_GetLpEndPos(p->w[1]); }
int ADXSJD_GetLpEndOfst(S *p) { return ADXB_GetLpEndOfst(p->w[1]); }
int FUN_0c106408(int a) { return a + 80; }
