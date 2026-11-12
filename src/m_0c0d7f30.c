/* @unit 0c0d7f30-0c0d80d4 */
struct G { unsigned char s; char pd[3]; unsigned char a[10]; char pad[285]; char b299; char pad2[2]; char b302; };
struct Z { int a, b, c; };
extern struct G g_0c7f2ee0;
extern unsigned char g_7f2ee1;
extern struct Z g_7f31bc;
extern char g_7f2f06;
void FUN_0c0de280(int, int, int);
void FUN_0c058f4e();
void FUN_0c0d8348(void);
void FUN_0c05f2d4(int, int);
void FUN_0c01e798(void);
void FUN_0c0a2f7a(void);
void FUN_0c0a2f66(int);
void FUN_0c0d8e6e(int, int, int);
void FUN_0c0d87aa(void);
void FUN_0c05f952(void);
void FUN_0c055562(void);
void FUN_0c02d4a4(void);
void FUN_0c0a2f52(void);
void FUN_0c0dc1c0(int, int, int, int);
void FUN_0c060c88(int);
void FUN_0c02bb32(float);
void FUN_0c01e7ac(void);
void FUN_0c05948c(int);
void FUN_0c0593e0(int);
void FUN_0c0d7f30(void);
void FUN_0c0d7ff0(void);
void FUN_0c0d7f30(void)
{
    unsigned char *p;
    switch (g_0c7f2ee0.s) {
    case 0:
        FUN_0c0de280(0xff000000, 0xff000000, 0xff000000);
        g_0c7f2ee0.s = 1;
        p = &g_0c7f2ee0.a[0];
        p[0] = p[1] = p[2] = p[3] = p[4] = p[5] = p[6] = p[7] = p[8] = p[9] = 0;
        FUN_0c058f4e(p);
        FUN_0c0d8348();
        FUN_0c05f2d4(3, 0);
        FUN_0c01e798();
        FUN_0c0a2f7a();
        FUN_0c0a2f66(0);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(1);
        FUN_0c0a2f66(2);
        FUN_0c0a2f66(3);
        FUN_0c0a2f66(4);
        FUN_0c0d8e6e(28, 0, 240);
    case 1:
        if (!g_0c7f2ee0.b299 && !g_0c7f2ee0.b302) {
            FUN_0c0d7ff0();
            FUN_0c0d87aa();
            FUN_0c05f952();
            FUN_0c055562();
        }
        FUN_0c02d4a4();
    }
}
void FUN_0c0d7ff0(void)
{
    switch (g_7f2ee1) {
    case 0:
        g_7f2ee1 = 1;
        FUN_0c058f4e();
        FUN_0c0a2f52();
        g_7f31bc.a = g_7f31bc.b = g_7f31bc.c = 0;
        FUN_0c0dc1c0(0, 0, 99, 0);
        FUN_0c060c88(2);
        FUN_0c060c88(13);
        FUN_0c02bb32(0.5f);
    case 1:
        FUN_0c01e7ac();
        break;
    case 2:
        FUN_0c058f4e();
        g_7f2f06 = 0;
        break;
    }
    FUN_0c05948c(5);
    FUN_0c0593e0(5);
}
