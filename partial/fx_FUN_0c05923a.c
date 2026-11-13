/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c05923a.json (synthetic). */
/* Allocates an actor node from the free list, links it before/after `at` in list `list` (heads at 0xC7E4070 / 0xC7E4098), then fills its n child slots from the pool selected by `kind`. Returns the node or 0. */
struct Node *obj_pool_pop(void);
int obj_destroy(struct Node *);
int part_alloc0(void);
int part_alloc1(void);
int part_alloc2(void);

struct Node {
    char p0[2];
    char list;              /* 0x02 */
    char p3[0x14 - 3];
    struct Node *prev;      /* 0x14 */
    struct Node *next;      /* 0x18 */
    char p1c[0x2DC - 0x1C];
    signed char count;      /* 0x2DC */
    signed char kind;       /* 0x2DD */
    char p2de[2];
    int slot[1];            /* 0x2E0 */
};

struct Node *obj_create_beside(int list, struct Node *at, int where, int n, int kind)
{
    struct Node *x;
    struct Node *p;
    int i;

    x = obj_pool_pop();
    if (x == 0) {
        return 0;
    }
    x->list = list;
    if (where == 0) {
        p = at->prev;
        if (p == 0) {
            ((struct Node **)0xC7E4070)[list] = x;
        } else {
            p->next = x;
        }
        x->prev = p;
        x->next = at;
        at->prev = x;
    } else if (where == 1) {
        p = at->next;
        if (p == 0) {
            ((struct Node **)0xC7E4098)[list] = x;
        } else {
            p->prev = x;
        }
        x->next = p;
        x->prev = at;
        at->next = x;
    }
    x->kind = kind;
    for (i = 0; i < n; i++) {
        switch (x->kind) {
        case 0:
            x->slot[i] = part_alloc0();
            break;
        case 1:
            x->slot[i] = part_alloc1();
            break;
        case 2:
            x->slot[i] = part_alloc2();
            break;
        }
        if (x->slot[i] == 0) {
            obj_destroy(x);
            return 0;
        }
        x->count = x->count + 1;
    }
    return x;
}
