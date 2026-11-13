/* KEY CFG screen (two player columns, settings and button maps) (0c017a24-0c0195f0) */

typedef struct { int arg_f4, arg_f11; } Vec2i;
extern void ui_sprite_queue_add(void *, int, int, int, int, int);

void keycfg_queue_table_sprite_scaled(char idx, float arg_f4, float arg_f11)
{
    int block[14];
    char *entry = (char *)0xC11B3D0 + (short)(idx * 12);
    *(Vec2i *)((char *)block + 4) = *(Vec2i *)(entry + 4);
    *(Vec2i *)((char *)block + 8) = *(Vec2i *)(entry + 8);
    *(float *)&block[3] = 7.0f;
    block[10] = 0;
    *(float *)&block[11] = arg_f11;
    block[13] = 5;
    *(float *)&block[4] = arg_f4;
    *(float *)&block[5] = 1.0f;
    ui_sprite_queue_add(block, 0xC17FEA4, 0, *(short *)entry, 0, 0);
}
