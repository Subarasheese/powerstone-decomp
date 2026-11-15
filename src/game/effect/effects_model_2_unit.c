/* @unit 0c046830-0c04694c -macsave=1 */
/* fx_spawn_on_player_part(side, set, part, preset, a, b, c, d): a model effect on one part of a fighter (the body's
   parts, or one of four other sets, the super form's copy when the fighter is in super mode), with the preset from the
   table at 0C14A7A8 and the four last arguments passed on to fx_spawn_model_effect; the effect takes the fighter's
   motion number and its tick (FUN_0c04694c). The original's code writes g_players[side] at each use: the compiler keeps
   one copy of the fighter's address for all of them. */
typedef struct { char b[176]; } Part;
typedef struct {
    char pad_0[0x300];
    Part body[2][20];
    Part set1[2][30];
    Part set2[2][10];
    Part set3[2][10];
    Part set4[2][10];
    char pad_7100[0x7198 - 0x7100];
    short motion;
    char pad_719a[0x71F1 - 0x719A];
    char super;
    char pad_71f2[0x72D0 - 0x71F2];
} Fighter;
extern Fighter g_players[2];
extern char g_res_kyoutsuu[];
extern char *fx_spawn_model_effect(char side, Part *part, char *res, int kind, char *preset, short a, char b, int c, int d);
extern void FUN_0c04694c(void);

void fx_spawn_on_player_part(char side, char set, char part, char preset, short a, char b, int c, int d)
{
    Part *p;
    char *o;

    switch (set) {
    case 0: p = &g_players[side].body[g_players[side].super][part]; break;
    case 1: p = &g_players[side].set1[g_players[side].super][part]; break;
    case 2: p = &g_players[side].set2[g_players[side].super][part]; break;
    case 3: p = &g_players[side].set3[g_players[side].super][part]; break;
    case 4: p = &g_players[side].set4[g_players[side].super][part]; break;
    default: return;
    }
    o = fx_spawn_model_effect(side, p, g_res_kyoutsuu, 3, (char *)0x0C14A7A8 + preset * 16, a, b, c, d);
    if (o) {
        *(short *)(o + 0xF0) = g_players[side].motion;
        *(void (**)(void))(o + 0x10) = FUN_0c04694c;
    }
}
