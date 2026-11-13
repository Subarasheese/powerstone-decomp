/* @unit 0c027f90-0c028030 -macsave=1 */
/* _quick_evn_mvn */
extern int g_ui_sprite_queue_count;
extern int g_ui_sprite_queue_aux;
void *memset(void *, int, int);
typedef struct { int a[14]; } S56;
typedef struct { char c0; char c1; short pad; int w4; S56 s; } E;
extern E g_ui_sprite_queue[];
void ui_sprite_queue_reset(void)
{
    g_ui_sprite_queue_count = g_ui_sprite_queue_aux = 0;
    memset((void*)g_ui_sprite_queue, 0, 0x3000);
}
void ui_sprite_queue_add(S56 *src, int *o, short idx, int n, char c5, char c6)
{
    int v = ((int *)o[2])[idx];
    if (g_ui_sprite_queue_count < 192) {
        g_ui_sprite_queue[g_ui_sprite_queue_count].c0 = c6;
        g_ui_sprite_queue[g_ui_sprite_queue_count].c1 = c5;
        g_ui_sprite_queue[g_ui_sprite_queue_count].s = *src;
        g_ui_sprite_queue[g_ui_sprite_queue_count].w4 = n * 28 + v;
        g_ui_sprite_queue_count++;
    }
}
