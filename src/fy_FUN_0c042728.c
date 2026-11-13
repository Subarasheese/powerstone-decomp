/* Like FUN_0c042eac but kind 2 and the three floats come from the 12-byte entry k (byte index k*12) of the table at 0x0C14A290: spawns an object with FUN_0c042f48 (template picked by state & 3) and stores the entry into its +0x2E0 block (+64/68/72/76) and the float argument into the +0x308 block (+4). */
typedef struct { int a, b, c; } S12;
typedef struct { float x, y, z; } V3;
extern char *FUN_0c042f48(int, int, int, S12 *, int, S12 *);

void FUN_0c042728(S12 *v, char k, float d)
{
    S12 local;
    char *o;
    V3 *e;

    local = *v;
    o = FUN_0c042f48(2, 1, 1, &local, 0, (S12 *)0x0C14A110 + (*(char *)0x0C7F307C & 3));
    if (o) {
        *(float *)(*(char **)(o + 0x2E0) + 64) = 1.0f;
        e = (V3 *)((signed char)(k * 12) + 0x0C14A290);
        *(float *)(*(char **)(o + 0x2E0) + 68) = e->x;
        *(float *)(*(char **)(o + 0x2E0) + 72) = e->y;
        *(float *)(*(char **)(o + 0x2E0) + 76) = e->z;
        *(float *)(o + 0x308 + 4) = d;
    }
}
