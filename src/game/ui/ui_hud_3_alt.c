/* HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher (0c02f328-0c02ff18) */

/* named globals (symbols.txt) */
extern char g_hud_state[];
void FUN_0c02f3f2(char *panel);
void FUN_0c02f786(void);
void ui_sprite_queue_add(void *spr, void *tex, int mode, int frame, int side, int zero);
#define HUD ((char *)g_hud_state)
#define TEX ((void *)0x0C17FDB0)
#define PAUSED (*(int *)0x0C7F3028)
#define PLH(i, n) (*(short *)((char *)0xC7E40C4 + (unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + (n)))
#define B(o, n) (*(signed char *)((o) + (n)))
#define H(o, n) (*(short *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define SF(n) (*(float *)((char *)st + (n)))
#define SI(n) (*(int *)((char *)st + (n)))
#define ST(n) ((void *)((char *)st + (n)))

void FUN_0c02f98a(void)
{
    int st[33];
    int i, j, k, hp, red, n;
    char *p, *q;

    FUN_0c02f3f2(HUD + 212);
    FUN_0c02f3f2(HUD + 404);
    if (PAUSED == 0)
        FUN_0c02f786();
    SF(12) = 24.0f;
    SI(116) = 0;
    SF(80) = 83.5f;
    SF(88) = 7.59999990f;
    SI(128) = 14;
    SF(120) = F(HUD, 20) * 1.0f;
    SF(92) = 13.0f;
    for (i = 0; i < 2; i++) {
        hp = PLH(i, 0x71D4);
        red = PLH(i, 0x71D8);
        while ((short)hp > 0 || (short)red > 0) {
            if ((short)hp >= 48) {
                SF(84) = F(HUD, 4) + 80.0f;
                SF(96) = 48.0f;
                ui_sprite_queue_add(ST(76), TEX, 3, 0, i, 0);
            } else if ((short)hp > 0) {
                SF(16) = (float)(short)hp;
                SF(84) = -SF(16) + F(HUD, 4) + 80.0f;
                if ((short)red >= 48)
                    SF(96) = (float)(48 - (short)hp);
                else
                    SF(96) = (float)((short)red - (short)hp);
                ui_sprite_queue_add(ST(76), TEX, 3, 1, i, 0);
                SF(84) = F(HUD, 4) + 80.0f;
                SF(96) = SF(16);
                ui_sprite_queue_add(ST(76), TEX, 3, 0, i, 0);
            } else {
                SF(84) = F(HUD, 4) + 80.0f;
                if ((short)red >= 48)
                    SF(96) = 48.0f;
                else
                    SF(96) = (float)(short)red;
                ui_sprite_queue_add(ST(76), TEX, 3, 1, i, 0);
            }
            SF(80) = SF(80) + SF(12);
            red -= 48;
            hp -= 48;
        }
        SF(80) = 556.5f;
        SF(120) = F(HUD, 24) * 1.0f;
        SF(12) = -SF(12);
    }
    SF(8) = 24.0f;
    SF(4) = 24.0f;
    SI(60) = 0;
    SI(116) = 0;
    SF(64) = F(HUD, 20) * 1.0f;
    SF(120) = SF(64);
    SF(80) = 84.0f;
    SF(24) = 83.5f;
    SF(84) = F(HUD, 4) + 56.0f;
    SF(28) = F(HUD, 4) + 80.0f;
    SF(88) = 7.5f;
    SF(32) = 7.69999981f;
    SI(128) = 10;
    SI(72) = 14;
    SF(92) = 1.0f;
    SF(36) = 13.0f;
    SF(96) = 1.0f;
    SF(40) = 48.0f;
    for (j = 0; j < 2; j++) {
        p = HUD + 212 + (short)(j * 192);
        n = B(p, 2);
        st[0] = n;
        if (n == 0 && PLH(j, 0x71D4) == 0)
            st[0] = 1;
        for (k = 0; k < st[0]; k++) {
            if (H(p, 176 + k * 2) >= 0) {
                if (PAUSED != 0)
                    H(p, 176 + k * 2) = H(p, 176 + k * 2) + 1;
                H(p, 176 + k * 2) = H(p, 176 + k * 2) - 1;
                if (H(p, 176 + k * 2) == 0) {
                    B(p, 186 + k) = (B(p, 186 + k) + 1) % 5;
                    H(p, 176 + k * 2) = B(p, 186 + k) == 0 ? -1 : 4;
                }
            }
            if (B(p, 186 + k) == 0) {
                SI(116) = 0;
                ui_sprite_queue_add(ST(76), TEX, 2, 0, j, 0);
            } else {
                SI(116) = 0xC000;
                ui_sprite_queue_add(ST(76), TEX, 7, B(p, 186 + k) - 1, j, 0);
            }
            ui_sprite_queue_add(ST(20), TEX, 3, 3, j, 0);
            SF(80) = SF(80) + SF(8);
            SF(24) = SF(24) + SF(4);
        }
        SF(80) = 556.0f;
        SF(24) = 556.5f;
        SF(64) = F(HUD, 24) * 1.0f;
        SF(120) = SF(64);
        SF(8) = -SF(8);
        SF(4) = -SF(4);
    }
    SF(88) = 7.5f;
    SF(120) = 1.0f;
    for (i = 0; i < 2; i++) {
        st[0] = (short)(i * 240);
        for (k = 0; k < 5; k++) {
            q = HUD + 596 + st[0] + (unsigned char)(k * 48);
            if (q[0] != 0 && (k != 0 || PLH(i, 0x71D4) < 0)) {
                SF(80) = F(q, 8);
                SF(84) = F(HUD, 4) + F(q, 12);
                SI(116) = I(q, 16);
                SF(96) = F(q, 24) * 1.0f;
                SF(92) = SF(96);
                SI(128) = I(q, 44);
                ui_sprite_queue_add(ST(76), TEX, 2, 0, i, 0);
            }
        }
    }
    SF(80) = 0.0f;
    SF(84) = F(HUD, 4) + 75.0f;
    SF(88) = 7.39999962f;
    SI(128) = 5;
    SI(116) = 0;
    SF(120) = 1.0f;
    SF(92) = 1.0f;
    SF(96) = 1.0f;
    ui_sprite_queue_add(ST(76), TEX, 2, 1, 0, 0);
    SF(88) = 552.0f;
    ui_sprite_queue_add(ST(84), TEX, 2, 1, 1, 0);
    SF(96) = 88.0f;
    SF(104) = 7.69999981f;
    SF(108) = 1.0f;
    SF(112) = 1.0f;
    ui_sprite_queue_add(ST(92), TEX, 2, 2, 0, 0);
    SF(104) = 416.0f;
    ui_sprite_queue_add(ST(100), TEX, 2, 2, 1, 0);
}
