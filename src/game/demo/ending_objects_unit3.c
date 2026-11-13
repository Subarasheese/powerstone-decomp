/* @unit 0c015798-0c0157c4 */
struct F2 { char pad[32]; float a, b, c, pd[3]; float d, e, f; };
void obj_apply_velocity(struct F2 *p)
{
    p->a += p->d;
    p->b += p->e;
    p->c += p->f;
}
