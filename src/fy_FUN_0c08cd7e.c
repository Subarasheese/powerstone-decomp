/* Direction lookup: takes the vector between two points (FUN_0c06206e), turns it into an angle (FUN_0c0df360 on x / z, z nudged off zero and the angle flipped half a turn when z is negative), subtracts the global heading and returns the entry of the 8-sector table for the given row. */
typedef struct { float x, y, z; } V3;
extern short g_w31e0;
extern void FUN_0c06206e(V3 *, char *, char *);
extern int FUN_0c0df360(float);

int FUN_0c08cd7e(char *o, char row)
{
    V3 v;
    int a;
    int *tbl;

    FUN_0c06206e(&v, *(char **)(o + 28) + 32, o + 32);
    if (v.z == 0.0f) {
        v.z = 0.0001f;
    }
    a = FUN_0c0df360(v.x / v.z);
    if (v.z < 0.0f) {
        a += 0x8000;
    }
    a = (unsigned short)a - g_w31e0;
    tbl = (int *)0xC1505F0;
    return tbl[row * 8 + (((unsigned short)(0x1000 + a)) / 0x2000 & 7)];
}
