/* Resets an object into its "thrown" state: byte 3 = 2, bumps byte 8, clears +236, copies the 12-byte vector at +32 from the linked object (pointer at +28), raises Y (+36) by 200, then sets a velocity (+56, +64) from a sine/cosine of (0x14000 - linked angle at +48) times 5, +60 = 10, +72 = -2, the per-frame step (+68, +76) as those velocities / 180 negated, and clears +280. */
struct V { int x, y, z; };
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);

void FUN_0c0ae5e2(unsigned char *o)
{
    unsigned char *l = *(unsigned char **)(o + 28);

    o[3] = 2;
    o[8]++;
    *(short *)(o + 236) = 0;
    *(struct V *)(o + 32) = *(struct V *)(l + 32);
    *(float *)(o + 36) = *(float *)(o + 36) + 200.0f;
    *(float *)(o + 56) = -(FUN_0c0df4d0(0x14000 - *(int *)(l + 48)) * 5.0f);
    *(float *)(o + 60) = 10.0f;
    *(float *)(o + 64) = -(FUN_0c0dfa50(0x14000 - *(int *)(l + 48)) * 5.0f);
    *(float *)(o + 68) = -*(float *)(o + 56) / 180.0f;
    *(float *)(o + 72) = -2.0f;
    *(float *)(o + 76) = -*(float *)(o + 64) / 180.0f;
    *(int *)(o + 280) = 0;
}
