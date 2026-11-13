/* @unit 0c09d9bc-0c09d9e8 */
struct S { char p[56]; float a, b, c, d, e, f; };
void pl_apply_acceleration(struct S *s) { s->a += s->d; s->c += s->f; s->b += s->e; }
