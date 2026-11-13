/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c059132.json (synthetic). */
/* Allocates a node, links it at the head of one of two per-queue lists, then fills its slots by a type-selected constructor. */
/* named globals (symbols.txt) */
extern char g_obj_class_head[];
extern char g_obj_class_tail[];
struct nd { char p0[2]; unsigned char q; char p1[0x11]; struct nd *next; struct nd *prev;
            char p2[0x2DC - 0x1C]; signed char cnt; signed char type; char p3[2]; int slot[1]; };
struct nd *obj_pool_pop(void);
void obj_destroy(struct nd *);
int part_alloc0(void);
int part_alloc1(void);
int part_alloc2(void);

struct nd *obj_create(int a4, int a5, int a6, int a7)
{
    struct nd *n, *h;
    struct nd **pa, **pb;
    int i;

    n = obj_pool_pop();
    if (n == 0)
        return 0;
    n->q = a4;
    pa = (struct nd **)g_obj_class_head + a4;
    pb = (struct nd **)g_obj_class_tail + a4;
    if (a5 == 0) {
        h = *pa;
        n->prev = h;
        *pa = n;
        n->next = 0;
        if (h == 0)
            *pb = n;
        else
            h->next = n;
    } else if (a5 == 1) {
        h = *pb;
        n->next = h;
        *pb = n;
        n->prev = 0;
        if (h == 0)
            *pa = n;
        else
            h->prev = n;
    }
    n->type = a7;
    for (i = 0; i < a6; i++) {
        switch (n->type) {
        case 0:
            n->slot[i] = part_alloc0();
            break;
        case 1:
            n->slot[i] = part_alloc1();
            break;
        case 2:
            n->slot[i] = part_alloc2();
            break;
        }
        if (n->slot[i] == 0) {
            obj_destroy(n);
            return 0;
        }
        n->cnt++;
    }
    return n;
}
