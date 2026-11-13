/* @unit 0c062050-0c0620a4 */
typedef struct { float x, y, z; } V3;
void math_vec3_add(V3 *d, V3 *a, V3 *b){ d->x = a->x + b->x; d->y = a->y + b->y; d->z = a->z + b->z; }
void math_vec3_sub(V3 *d, V3 *a, V3 *b){ d->x = a->x - b->x; d->y = a->y - b->y; d->z = a->z - b->z; }
void math_vec3_mul_xyz(V3 *d, float x, float y, float z){ d->x *= x; d->y *= y; d->z *= z; }
