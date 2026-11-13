/* @unit 0c015b4a-0c015ba0 */
struct F { char pad[28]; float a, b, c, d, e, f, g, h, i, j, k, l; };
void obj_step_pos_vel_acc(struct F *p)
{
    p->a += p->d;
    p->d += p->g;
    p->b += p->e;
    p->e += p->h;
    p->c += p->f;
    p->f += p->i;
}
