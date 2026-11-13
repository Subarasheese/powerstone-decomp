/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c0559bc-0c055d38) */

typedef struct { int x, y, z; } S12;
typedef struct { char used; char pad[3]; char idx; char pad1[11]; void (*fn)(void); char pad2[0x50 - 20]; S12 rec; } Slot;
extern Slot *obj_create(int, int, int, int);
extern void fx_tick_055cba(void);

void fx_spawn_055cba(void)
{
    S12 tmpl;
    Slot *slot;
    int n;

    tmpl = *(S12 *)0xC14AD7C;
    for (n = 0; n < 11; n++) {
        slot = obj_create(6, 1, 2, 0);
        if (slot != 0) {
            slot->used = 1;
            slot->idx = n;
            slot->fn = fx_tick_055cba;
            slot->rec = tmpl;
        }
    }
}
