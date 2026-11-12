/* @unit 0c05986c-0c059934 -extra=a=400 -macsave=1 */
typedef struct R { char b[86]; unsigned char f; } R;
extern unsigned char g_302c[];
extern signed char g_2f11;
extern unsigned char g_2df0[];
extern unsigned char t1_e138[];
extern unsigned char t2_e180[];
void FUN_0c05986c(void)
{
    unsigned char *p = g_302c;
    unsigned char v = p[69];
    unsigned char *q;
    signed char i;
    R *r;
    if (v == 3) return;
    if (v == 0) v = 1;
    q = p + 48;
    i = g_2f11 * 9;
    r = (R*)&g_2df0[(unsigned char)((unsigned short)(v + 255) * 120)];
    if (*q < t1_e138[i + r->f]) *q = t1_e138[i + r->f];
    q = p + 48;
    i = g_2f11 * 9;
    r = (R*)&g_2df0[(unsigned char)((unsigned short)(v + 255) * 120)];
    if (*q > t2_e180[i + r->f]) *q = t2_e180[i + r->f];
    q = p + 48;
    q[1] = *q << 3;
}
