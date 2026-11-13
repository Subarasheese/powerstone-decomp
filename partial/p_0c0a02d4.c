/* @unit 0c0a02d4-0c0a0370 */
struct T { char p0[32]; float f32; char p1[4]; float f40; char p2[4]; int i48; };
struct E { char p0[32]; float f32; char p1[4]; float f40; char p2[4]; int i48; char p3[608]; struct T *tbl[1]; };
extern char hit_find_interactable_contact(struct E *e, int n);
extern float math_cos_angle16(int a);
extern float math_sin_angle16(int a);
int FUN_0c0a02d4(struct E *e, float f)
{
    volatile char vn;
    struct T **q;
    if ((vn = hit_find_interactable_contact(e, 2)) == 0) return 1;
    q = e->tbl + (vn - 1);
    e->f32 = (*q)->f32 - f * math_cos_angle16(0x14000 - e->i48);
    e->f40 = (*q)->f40 - f * math_sin_angle16(0x14000 - e->i48);
    e->i48 = (*q)->i48;
    return 0;
}
