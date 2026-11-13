/* attract sequence: ranking screens (time/1P points/VS) (0c0d2dd8-0c0d46e4) */

int ui_draw_text_stub(void);
int attract_setup_demo_round(void);
int attract_ranking_step(void);
int FUN_0c0d44c4(void);

int attract_screen_urls(void)
{
    register int t0;

    t0 = *(signed char *)0xC7F2EE6;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            FUN_0c0d44c4();
        } else {
            attract_ranking_step();
        }
    } else {
        attract_setup_demo_round();
    }
    if ((*(signed char *)0xC7F2F08) == 0) {
        *(volatile float *)0xC0D4560;
        *(volatile float *)0xC0D4564;
    } else {
        *(volatile float *)0xC0D4560;
        *(volatile float *)0xC0D4564;
    }
    return ui_draw_text_stub();
}
