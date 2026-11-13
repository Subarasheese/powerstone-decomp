/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

void ui_draw_text_stub(char *str, int mode, float x, float y, float scale_x, float scale_y);
int attract_setup_demo_round(void);
int attract_ranking_step(void);
int FUN_0c0d44c4(void);

/* The attract sequence's demo-round state (set-up, ranking step, end), then the web address at the bottom of the screen:
   the Japanese one for language 0, the other one for the rest */
void attract_screen_urls(void)
{
    unsigned char state = *(unsigned char *)0xC7F2EE6;

    if (state == 0) {
        attract_setup_demo_round();
    } else if (state == 1) {
        attract_ranking_step();
    } else {
        FUN_0c0d44c4();
    }
    if (*(char *)0xC7F2F08 == 0) {
        ui_draw_text_stub((char *)0xC1546DC, 1, 64.0f, 416.0f, 1.0f, 1.0f);
    } else {
        ui_draw_text_stub((char *)0xC1546F8, 1, 64.0f, 416.0f, 1.0f, 1.0f);
    }
}
