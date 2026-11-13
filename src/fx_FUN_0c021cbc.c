/* Sphere-sphere push-out: if the two spheres (centre xyz and radius at +12 of pa, pb) overlap by pen, moves the x and z of the bodies a and b apart along the contact direction, a pushing only the free one (state byte 729 zero) or splitting evenly; returns 0 on no overlap. */
struct V3 { float x, y, z; };
extern float FUN_0c0df340(float x);
extern void FUN_0c021178(struct V3 *out, struct V3 a, struct V3 b);
int FUN_0c021cbc(char *a, char *b, float *pa, float *pb)
{
    float dx, dy, dz, d, pen, sum;
    struct V3 R;
    float rx, rz;
    sum = pa[3] + pb[3];
    dx = pa[0] - pb[0];
    dy = pa[1] - pb[1];
    dz = pa[2] - pb[2];
    d = FUN_0c0df340(dy * dy + dx * dx + dz * dz);
    pen = sum - d;
    if (0.0f > pen)
        return 0;
    if (a[729] == 2) return 1;
    if (b[729] == 2) return 1;
    if (a[729] != 0 && b[729] != 0) return 1;
    FUN_0c021178(&R, *(struct V3 *)pb, *(struct V3 *)pa);
    rx = R.x * pen;
    if (a[729] != 0) {
        *(float *)(b + 32) += -rx;
        *(float *)(b + 40) += -(R.z * pen);
    } else if (b[729] != 0) {
        *(float *)(a + 32) += rx;
        *(float *)(a + 40) += pen * R.z;
    } else {
        rx = rx / 2.0f;
        *(float *)(a + 32) += rx;
        rz = R.z * pen;
        *(float *)(a + 40) += rz / 2.0f;
        *(float *)(b + 32) += -(R.x * pen) / 2.0f;
        *(float *)(b + 40) += -(R.z * pen) / 2.0f;
    }
    return 1;
}
