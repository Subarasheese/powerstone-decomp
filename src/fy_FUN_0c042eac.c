/* Spawns an object with FUN_0c042f48 (taking a copy of the 12-byte vector argument and a template picked by state & 3 from 0x0C14A110), and if it got one stores four float arguments into the object's sub-blocks (+0x2E0 block at +64/68/72/76, and +0x308 block at +4). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c042f48(int, int, int, S12 *, int, S12 *);

void FUN_0c042eac(S12 *v, float a, float b, float c, float d)
{
    S12 local;
    char *o;

    local = *v;
    o = FUN_0c042f48(0, 1, 1, &local, 0, (S12 *)0x0C14A110 + (*(char *)0x0C7F307C & 3));
    if (o) {
        *(float *)(*(char **)(o + 0x2E0) + 64) = 1.0f;
        *(float *)(*(char **)(o + 0x2E0) + 68) = a;
        *(float *)(*(char **)(o + 0x2E0) + 72) = b;
        *(float *)(*(char **)(o + 0x2E0) + 76) = c;
        *(float *)(o + 0x308 + 4) = d;
    }
}
