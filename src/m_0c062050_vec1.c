/* @unit 0c062050-0c0620a4 */
typedef struct { float x, y, z; } V3;
void FUN_0c062050(V3 *d, V3 *a, V3 *b){ d->x = a->x + b->x; d->y = a->y + b->y; d->z = a->z + b->z; }
void FUN_0c06206e(V3 *d, V3 *a, V3 *b){ d->x = a->x - b->x; d->y = a->y - b->y; d->z = a->z - b->z; }
void FUN_0c06208c(V3 *d, float x, float y, float z){ d->x *= x; d->y *= y; d->z *= z; }
