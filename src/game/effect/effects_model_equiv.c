/* generic model effect (node table, linked to owner record); same module as neighbours (0c046798-0c046830) */

struct o308_uint { char p[0x308]; unsigned int v; };
int fx_spawn_model_effect(int, int, int, int, int, int, int, int, int);

int fx_spawn_linked_effect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    register int t0;
    register int t2;

    t0 = fx_spawn_model_effect(a4, a5, a7, a8, 0xC14A788, ((short)(a9 >> 0)), ((signed char)(a10 >> 0)), a11, a12);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC0467E0;
        *(unsigned int *)((t0 + 0x1C)) = a6;
        (((struct o308_uint *)(t0))->v) = (*(int *)((a6 + 0x10)));
        t2 = 0x308;
    }
    return t2;
}
