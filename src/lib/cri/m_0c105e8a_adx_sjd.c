/* @unit 0c105e8a-0c105ea2 -cpu=sh3 */
typedef struct { char b[4]; int w[20]; } S;
char FUN_0c105e8a(S *p) { return p->b[1]; }
void FUN_0c105e8e(S *p, int v) { p->w[1] = v; }
void sjd_set3(S *p, int i, int v) { ((int *)((char *)p + 12))[i] = v; }
void FUN_0c105e9e(S *p, int v) { p->w[13] = v; }
