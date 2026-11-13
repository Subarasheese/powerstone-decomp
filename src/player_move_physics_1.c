/* @unit 0c09d990-0c09d9bc */
struct S { char p[32]; float a, b, c; char q[12]; float d, e, f; };
void pl_apply_velocity(struct S *s) { s->a += s->d; s->c += s->f; s->b += s->e; }
