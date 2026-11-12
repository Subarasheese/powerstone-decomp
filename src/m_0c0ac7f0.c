/* @unit 0c0ac7f0-0c0ac8dc */
struct R { char t; char pad[12]; };
struct T { struct R *p; int n; };
struct G { char pad[37]; char idx; };
extern struct G g_302c;
extern struct T g_tab[];
extern void FUN_0c0ae09e(struct R *r);
extern void FUN_0c0ae77c(struct R *r);
extern void FUN_0c0aca24(struct R *r);
extern void FUN_0c0af148(struct R *r);
extern void FUN_0c0aeee8(struct R *r);
extern void FUN_0c0ae8f0(struct R *r);
extern void FUN_0c0ae9e4(struct R *r);
extern void FUN_0c0aeca8(struct R *r);
void FUN_0c0ac7f0(void)
{
    register struct R *r;
    char i;
    r = g_tab[g_302c.idx].p;
    for (i = 0; i < g_tab[g_302c.idx].n; r++, i++) {
        switch (r->t) {
        case 1: FUN_0c0ae09e(r); break;
        case 2: FUN_0c0ae77c(r); break;
        case 3: FUN_0c0aca24(r); break;
        case 4: FUN_0c0af148(r); break;
        case 11: FUN_0c0aeee8(r); break;
        case 12: FUN_0c0ae8f0(r); break;
        case 8: FUN_0c0ae9e4(r); break;
        case 13: FUN_0c0aeca8(r); break;
        case 15: FUN_0c0aeca8(r); break;
        }
    }
}
