/* @unit 0c027f90-0c028030 -macsave=1 */
/* _quick_evn_mvn */
extern int g363a68;
extern int g363a6c;
void *memset(void *, int, int);
typedef struct { int a[14]; } S56;
typedef struct { char c0; char c1; short pad; int w4; S56 s; } E;
extern E g363a70[];
void FUN_0c027f90(void)
{
    g363a68 = g363a6c = 0;
    memset((void*)g363a70, 0, 0x3000);
}
void FUN_0c027fa4(S56 *src, int *o, short idx, int n, char c5, char c6)
{
    int v = ((int *)o[2])[idx];
    if (g363a68 < 192) {
        g363a70[g363a68].c0 = c6;
        g363a70[g363a68].c1 = c5;
        g363a70[g363a68].s = *src;
        g363a70[g363a68].w4 = n * 28 + v;
        g363a68++;
    }
}
