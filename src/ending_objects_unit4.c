/* @unit 0c0157fc-0c015828 */
struct F3 { char pad[56]; float a, b, c, pd[3]; float d, e, f; };
void obj_apply_scale_rate(struct F3 *p)
{
    p->d += p->a;
    p->e += p->b;
    p->f += p->c;
}
