/* @unit 0c099920-0c099930 */
struct S { char p[108]; float a, b, c; };
void obj_node_scale_one(struct S *s) { s->a = s->b = s->c = 1.0f; }
