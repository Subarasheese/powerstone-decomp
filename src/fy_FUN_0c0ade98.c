/* Starts a thrown-item object from its owner (pointer at +28): copies the owner's position into +32, advances +36 by 180 degrees, derives velocity and rotation-rate floats from the owner's angle (+48), and fills the flag and index bytes. */
typedef struct { int a, b, c; } S12;
extern int FUN_0c0df920(void);
extern float FUN_0c0df4d0(int a);
extern float FUN_0c0dfa50(int a);
void FUN_0c0ade98(char *o)
{
    char *p;
    float k = 180.0f;

    o[3] = 2;
    o[8] = o[8] + 1;
    o[1] = 1;
    p = *(char **)(o + 28);
    *(S12 *)(o + 32) = *(S12 *)(p + 32);
    *(float *)(o + 36) = *(float *)(o + 36) + k;
    FUN_0c0df920();
    *(float *)(o + 56) = -(FUN_0c0df4d0(0x14000 - *(int *)(p + 48)) * 5.0f);
    *(float *)(o + 60) = 10.0f;
    *(float *)(o + 64) = -(FUN_0c0dfa50(0x14000 - *(int *)(p + 48)) * 5.0f);
    *(float *)(o + 68) = -*(float *)(o + 56) / k;
    *(float *)(o + 72) = -2.0f;
    *(float *)(o + 76) = -*(float *)(o + 64) / k;
    *(int *)(o + 280) = 0;
    o[729] = 0;
    o[257] = (*(char **)(o + 776))[4];
    o[258] = (*(char **)(o + 776))[5];
    o[261] = 0;
    o[262] = 0;
    o[263] = 0;
}
