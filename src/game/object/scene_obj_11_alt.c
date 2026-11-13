/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057e28-0c05821c) */

typedef struct { int x, y, z; } S12;
typedef struct { char used; char pad[3]; char state; char pad1[11]; void (*handler)(void); char pad2[0x50 - 20]; S12 rec; } Slot;
extern Slot *obj_create(int, int, int, int);
extern void fx_tick_0581b4(void);

void fx_spawn_0581b4(void)
{
    S12 tmpl;
    Slot *slot;

    tmpl = *(S12 *)0xC14BB64;
    slot = obj_create(6, 1, 2, 0);
    if (slot != 0) {
        slot->used = 1;
        slot->state = 0;
        slot->handler = fx_tick_0581b4;
        slot->rec = tmpl;
    }
}
