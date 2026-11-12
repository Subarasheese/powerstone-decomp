/* @unit 0c09d89c-0c09d990 */
struct O { char p0[32]; float f32, f36, f40; char p1[4]; int i48; char pad52[4]; float f56, f60, f64, f68, f72, f76; char p2[267-80]; char b267; char p3[740-268];
  int i740; char p4[29114-744]; volatile char b29114; char p5[29156-29115]; float f29156; char p6[29166-29160]; char b29166; char p7[2]; char b29169; char p8[14]; int i29184; };
extern float g_7f31e4[];
extern void FUN_0c08e57e(struct O *, int);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern float FUN_0c0df340(float);
int FUN_0c09d89c(struct O *o)
{
    int t;
    if (o->b267) {
        o->b267--;
        t = o->i740;
        o->i29184 |= t;
        if (o->b29169) {
            if (o->b29114 != 10 && o->b29114 != 11)
                FUN_0c08e57e(o, 10);
        }
        return 1;
    }
    o->i29184 = o->i740;
    return 0;
}
void FUN_0c09d8ec(struct O *o)
{
    register float *q;
    float a = FUN_0c0df4d0(0x14000 - o->i48);
    float b = FUN_0c0dfa50(0x14000 - o->i48);
    float s, d1, d2;
    q = g_7f31e4;
    s = q[0] * a + q[2] * b;
    d1 = FUN_0c0df340(b * b + a * a);
    d2 = FUN_0c0df340(q[2] * q[2] + q[0] * q[0]);
    if (s / (d1 * d2) > 0.0f) o->b29166 = 0;
    else o->b29166 = 1;
}
