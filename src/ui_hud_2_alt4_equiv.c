/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02d9e0-0c02f328) */

typedef struct {
    int w0;
    float x, y, z;
    float f4, f5;
    int w6, w7, w8, w9;
    int w10;
    float f11;
    int w12;
    int w13;
} HudCell;
void ui_sprite_queue_add(HudCell *src, int *o, short idx, int n, char c5, char c6);

void ui_draw_hud_cell_pair(void)
{
    HudCell cell;
    char *hud_rec = (char *)0xC366A70;
    cell.x = 0.0f;
    cell.y = *(float *)(hud_rec + 4) + -6.0f;
    cell.z = 7.79999971f;
    cell.f4 = 1.0f;
    cell.f5 = 1.0f;
    cell.w10 = 0;
    cell.f11 = *(float *)(hud_rec + 20);
    cell.w13 = 5;
    ui_sprite_queue_add(&cell, (int *)(0xC17FDC8 + (unsigned char)(*(signed char *)0xC7E40C8 * 12)), 0, 0, 0, 0);
    cell.z = 544.0f;
    cell.w13 = *(int *)(hud_rec + 24);
    ui_sprite_queue_add(&cell, (int *)(0xC17FDC8 + (unsigned char)(*(signed char *)0xC7EB398 * 12)), 0, 0, 1, 0);
}
