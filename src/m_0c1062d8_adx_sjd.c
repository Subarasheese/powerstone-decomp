/* @unit 0c1062d8-0c10630e -cpu=sh3 */
typedef struct { int w[40]; } S;
int ADXSJD_GetDecNumSmpl(S *p) { return p->w[11]; }
void ADXSJD_SetDecPos(S *p, int v) { p->w[13] = v; }
int sjd_get52(S *p) { return p->w[13]; }
void ADXSJD_EntryTrapFunc(S *p, int a, int b) { p->w[18] = a; p->w[19] = b; }
void ADXSJD_SetTrapNumSmpl(S *p, int v) { p->w[15] = v; }
int sjd_get60(S *p) { return p->w[15]; }
void FUN_0c1062f6(S *p, int v) { p->w[16] = v; }
int sjd_get64(S *p) { return p->w[16]; }
void FUN_0c106302(S *p, int v) { p->w[17] = v; }
int sjd_get68(S *p) { return p->w[17]; }
