/* Picks one of four 3-float positions of the current table (index = scaled random float mod 4) and stores it, with the global value g8_p3e8, into the active 596-byte record of E_366f40; then runs FUN_0c04cdf2 and sets g8_s3ec to 1. */
typedef struct { float x, y, z; } V3;
extern signed char g7f3051;
extern V3 *tbl_32db90[];
extern unsigned char g8_b3ee;
extern char E_366f40[];
extern int g8_p3e8;
extern short g8_s3ec;
extern float FUN_0c0df940(void);
extern void FUN_0c04cdf2(void);

void FUN_0c04fdf6(void)
{
    V3 *p;
    unsigned int k;

    p = tbl_32db90[g7f3051];
    k = (unsigned int)(FUN_0c0df940() * 255.0f) % 4;
    *(float *)(E_366f40 + (short)(g8_b3ee * 596) + 96) = p[k].x;
    *(float *)(E_366f40 + (short)(g8_b3ee * 596) + 100) = p[k].y;
    *(float *)(E_366f40 + (short)(g8_b3ee * 596) + 104) = p[k].z;
    *(int *)(E_366f40 + (short)(g8_b3ee * 596) + 12) = g8_p3e8;
    FUN_0c04cdf2();
    g8_s3ec = 1;
}
