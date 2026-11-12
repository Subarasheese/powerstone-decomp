/* Hand-written: sets up the player's pose/animation for the kind FUN_0c09c6b8 reports (kinds 2..16), one block per kind:
   the animation request (FUN_0c09a808), the frame slots at +236.. and the flags at +11/+12, with the side byte at +0x71BC. */
int FUN_0c09c6b8(char *p);
int FUN_0c09a808(char *p, int mode, int val);
int FUN_0c063468(char *p);
int FUN_0c09bc3a(char *p, int tbl);
int FUN_0c0a1d88(char *p, int n);
int FUN_0c0df360(float f);
extern float g_494d1c;

#define B(p, off) (*(signed char *)((p) + (off)))
#define S(p, off) (*(short *)((p) + (off)))
#define F(p, off) (*(float *)((p) + (off)))

void FUN_0c0658b8(char *p)
{
    signed char k;
    float g;
    float d;

    k = FUN_0c09c6b8(p);
    B(p, 10) = k;
    switch (k) {
    case 2:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 243);
            S(p, 236) = 10;
            S(p, 240) = 9;
            F(p, 56) = -4.0f;
            F(p, 68) = 4.0f / (float)S(p, 240);
            F(p, 72) = 0.0f;
            F(p, 60) = 0.0f;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 244);
            S(p, 236) = 10;
            S(p, 240) = 20;
            F(p, 56) = -4.0f;
            F(p, 68) = 4.0f / (float)S(p, 240);
            F(p, 60) = 10.0f;
            B(p, 11) = 1;
        }
        break;
    case 3:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 245);
            FUN_0c063468(p);
            S(p, 236) = 10;
            S(p, 238) = 0;
            S(p, 242) = 30;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 246);
            FUN_0c063468(p);
            F(p, 76) = 0.0f;
            F(p, 68) = 0.0f;
            F(p, 64) = 0.0f;
            F(p, 56) = 0.0f;
            F(p, 60) = F(p, 60) / 8.0f;
            F(p, 29324) = F(p, 72);
            F(p, 72) = F(p, 72) / 16.0f;
            S(p, 236) = 7;
            S(p, 238) = 0;
            S(p, 240) = 50;
            S(p, 242) = 30;
            B(p, 11) = 1;
        }
        break;
    case 4:
    case 16:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 86);
            FUN_0c09bc3a(p, 0xC14EB10);
            S(p, 236) = 10;
            S(p, 238) = 0;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 88);
            FUN_0c09bc3a(p, 0xC14EB10);
            S(p, 236) = 10;
            S(p, 238) = 0;
            B(p, 11) = 1;
        }
        break;
    case 5:
    case 6:
    case 7:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 197);
            S(p, 236) = 13;
            S(p, 238) = 13;
            B(p, 11) = 0;
            B(p, 12) = 0;
            if (B(p, 10) == 6) {
                FUN_0c0a1d88(p, 98);
            }
            if (B(p, 10) == 7) {
                FUN_0c0a1d88(p, 100);
            }
        } else {
            FUN_0c09a808(p, 2, 201);
            S(p, 236) = 13;
            S(p, 238) = 13;
            B(p, 11) = 1;
            B(p, 12) = 0;
            if (B(p, 10) == 6) {
                FUN_0c0a1d88(p, 99);
            }
            if (B(p, 10) == 7) {
                FUN_0c0a1d88(p, 101);
            }
        }
        break;
    case 8:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 253);
            S(p, 236) = 20;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 254);
            S(p, 236) = 20;
            B(p, 11) = 1;
        }
        B(p, 12) = 0;
        break;
    case 9:
    case 10:
    case 12:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 235);
            S(p, 236) = 8;
            S(p, 238) = 10;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 236);
            S(p, 236) = 8;
            S(p, 238) = 10;
            B(p, 11) = 1;
        }
        B(p, 12) = 0;
        break;
    case 11:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 1, 60);
            S(p, 236) = 8;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 225);
            S(p, 236) = 8;
            B(p, 11) = 1;
        }
        break;
    case 14:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 74);
            S(p, 236) = 10;
            S(p, 238) = 13;
            B(p, 11) = 0;
            B(p, 12) = 0;
        } else {
            FUN_0c09a808(p, 2, 101);
            S(p, 236) = 10;
            S(p, 238) = 13;
            B(p, 11) = 1;
            B(p, 12) = 0;
            g = g_494d1c;
            if (200.0f > g) {
                g = 200.0f;
            }
            if (g == 0.0f) {
                g = 1.0e-4f;
            }
            d = F(p, 36) - F(*(char **)(p + 28), 36) + -50.0f;
            F(p, 29268) = d;
            *(int *)(p + 44) = FUN_0c0df360(F(p, 29268) / g);
        }
        break;
    case 15:
        if (B(p, 0x71BC) != 2) {
            FUN_0c09a808(p, 2, 119);
            S(p, 236) = 10;
            S(p, 238) = 0;
            S(p, 240) = 30;
            B(p, 11) = 0;
        } else {
            FUN_0c09a808(p, 2, 121);
            S(p, 236) = 10;
            S(p, 238) = 0;
            S(p, 240) = 30;
            F(p, 76) = 0.0f;
            F(p, 68) = 0.0f;
            F(p, 64) = 0.0f;
            F(p, 56) = 0.0f;
            F(p, 60) = F(p, 60) / 8.0f;
            F(p, 29324) = F(p, 72);
            F(p, 72) = F(p, 72) / 16.0f;
            B(p, 11) = 1;
        }
        break;
    default:
        break;
    }
}
