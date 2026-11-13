/* @unit 0c09d89c-0c09d990 */
struct O { char p0[32]; float f32, f36, f40; char p1[4]; int i48; char pad52[4]; float f56, f60, f64, f68, f72, f76; char p2[267-80]; char b267; char p3[740-268];
  int i740; char p4[29114-744]; volatile char b29114; char p5[29156-29115]; float f29156; char p6[29166-29160]; char b29166; char p7[2]; char b29169; char p8[14]; int i29184; };
extern float g_cam_forward_xz[];
extern void pl_update_hitstop_shake(struct O *, int);
extern float math_cos_angle16(int);
extern float math_sin_angle16(int);
extern float math_signed_sqrt(float);
int pl_tick_hitstop(struct O *o)
{
    int t;
    if (o->b267) {
        o->b267--;
        t = o->i740;
        o->i29184 |= t;
        if (o->b29169) {
            if (o->b29114 != 10 && o->b29114 != 11)
                pl_update_hitstop_shake(o, 10);
        }
        return 1;
    }
    o->i29184 = o->i740;
    return 0;
}
void pl_update_camera_side_flag(struct O *o)
{
    register float *q;
    float a = math_cos_angle16(0x14000 - o->i48);
    float b = math_sin_angle16(0x14000 - o->i48);
    float s, d1, d2;
    q = g_cam_forward_xz;
    s = q[0] * a + q[2] * b;
    d1 = math_signed_sqrt(b * b + a * a);
    d2 = math_signed_sqrt(q[2] * q[2] + q[0] * q[0]);
    if (s / (d1 * d2) > 0.0f) o->b29166 = 0;
    else o->b29166 = 1;
}
