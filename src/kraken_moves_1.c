/* @unit 0c084168-0c084304 */
struct P { char pad[29096]; char s1, s2; char pad2[29215 - 29098]; char sel; char pad3[29240 - 29216]; char sel2; };
extern void (*g_kraken_move_init_tab[])(struct P *);
void pl_kraken_play_motion_sounds(void);
void pl_mode01_03_enter(struct P *); void pl_mode04_enter(struct P *); void pl_mode05_enter(struct P *);
void pl_mode06_enter(struct P *); void pl_mode07_enter(struct P *); void pl_mode08_enter(struct P *);
void pl_mode09_enter(struct P *); void pl_mode10_enter(struct P *); void pl_mode11_enter(struct P *);
void pl_mode12_enter(struct P *); void pl_mode13_enter(struct P *); void pl_mode14_enter(struct P *);
void pl_mode15_enter(struct P *);
void pl_start_motion(int a, int b, int c);

int pl_kraken_frame_hook(void) { pl_kraken_play_motion_sounds(); return 0; }

void pl_kraken_attack_init(struct P *p)
{
    switch (p->sel) {
    case 0: case 2:
    default: g_kraken_move_init_tab[p->sel2](p); break;
    case 1: case 3: pl_mode01_03_enter(p); break;
    case 4: pl_mode04_enter(p); break;
    case 5: pl_mode05_enter(p); break;
    case 6: pl_mode06_enter(p); break;
    case 7: pl_mode07_enter(p); break;
    case 8: pl_mode08_enter(p); break;
    case 9: pl_mode09_enter(p); break;
    case 10: pl_mode10_enter(p); break;
    case 11: pl_mode11_enter(p); break;
    case 12: pl_mode12_enter(p); break;
    case 13: pl_mode13_enter(p); break;
    case 14: pl_mode14_enter(p); break;
    case 15: pl_mode15_enter(p); break;
    }
    p->s1 = p->s2 = 1;
}
void pl_kraken_move00_init(int a) { pl_start_motion(a, 1, 16); }
void pl_kraken_move01_init(int a) { pl_start_motion(a, 1, 19); }
void pl_kraken_move02_init(int a) { pl_start_motion(a, 1, 18); }
void pl_kraken_move03_init(int a) { pl_start_motion(a, 1, 21); }
void pl_kraken_move04_init(int a) { pl_start_motion(a, 1, 13); }
void pl_kraken_move05_init(int a) { pl_start_motion(a, 1, 2); }
void pl_kraken_move06_init(int a) { pl_start_motion(a, 1, 23); }
void pl_kraken_move07_init(int a) { pl_start_motion(a, 1, 24); }
void pl_kraken_move08_init(int a) { pl_start_motion(a, 1, 31); }
void pl_kraken_move09_init(int a) { pl_start_motion(a, 1, 28); }
void pl_kraken_move10_init(int a) { pl_start_motion(a, 1, 30); }
void pl_kraken_move11_init(int a) { pl_start_motion(a, 1, 25); }
void pl_kraken_move12_init(int a) { pl_start_motion(a, 1, 27); }
