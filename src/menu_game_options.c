/* game settings screen (7 option bytes, defaults item) (0c0195f0-0c019bf4) */

int memset(int, int, int);
struct opt_block { char bytes[11]; };
extern void snd_play_side_se(int, int);
extern void opt_game_settings_move_cursor(char *, int);
extern void opt_reset_game_options(void);
extern void opt_game_settings_draw(char *, char *);
extern void FUN_0c0d7566(void);
#define W1 (*(unsigned short *)(0xC361BF0 + 12))
#define W2 (*(unsigned short *)(0xC361BF0 + 32))
extern void ui_sprite_queue_add(void *, int, int, int, int, int);

int opt_game_settings_init(void)
{
    return memset(0xC362310, 0x0, 0x8);
}

int opt_game_settings_changed(void)
{
    if ((*(signed char *)0xC36231C) == (*(signed char *)0xC7F4748)) {
        if ((*(signed char *)0xC36231D) == (*(signed char *)0xC7F4749)) {
            if ((*(signed char *)0xC36231E) == (*(signed char *)0xC7F474A)) {
                if ((*(signed char *)0xC36231F) == (*(signed char *)0xC7F474B)) {
                    if ((*(signed char *)0xC362320) == (*(signed char *)0xC7F474C)) {
                        if ((*(signed char *)0xC362321) == (*(signed char *)0xC7F474D)) {
                            if ((*(signed char *)0xC362322) != (*(signed char *)0xC7F474E)) {
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

void opt_game_settings_main(void)
{
    char *menu;
    char *options;
    char *option_ptr;
    signed char option_max;
    char *saved_opts;

    menu = (char *)0xC362310;
    options = (char *)0xC7F4744;
    option_max = 0;
    option_ptr = 0;
    switch (menu[0]) {
    case 0:
        menu[0] = menu[0] + 1;
        *(struct opt_block *)(menu + 8) = *(struct opt_block *)options;
        menu[1] = 7;
        opt_game_settings_move_cursor(menu, 1);
        *(short *)(menu + 6) = 0;
        menu[4] = 0;
        menu[5] = 7;
        if (options[0] == 0)
            menu[5] = menu[5] - 1;
        if (options[1] == 0)
            menu[5] = menu[5] - 1;
        if (options[2] == 0)
            menu[5] = menu[5] - 1;
        if (options[3] == 0)
            menu[5] = menu[5] - 1;
        /* fall through */
    case 1:
        if ((W1 & 16) || (W2 & 16)) {
            snd_play_side_se(0, 75);
            opt_game_settings_move_cursor(menu, 0);
            menu[4] = menu[4] - 1;
            if (menu[4] < 0)
                menu[4] = menu[5];
        } else if ((W1 & 32) || (W2 & 32)) {
            snd_play_side_se(0, 75);
            opt_game_settings_move_cursor(menu, 1);
            menu[4] = menu[4] + 1;
            if (menu[4] > menu[5])
                menu[4] = 0;
        }
        switch (menu[1]) {
        case 0: option_ptr = options + 4; option_max = 2; break;
        case 1: option_ptr = options + 5; option_max = 1; break;
        case 2: option_ptr = options + 6; option_max = 1; break;
        case 3: option_ptr = options + 7; option_max = 1; break;
        case 4: option_ptr = options + 8; option_max = 1; break;
        case 5: option_ptr = options + 9; option_max = 3; break;
        case 6: option_ptr = options + 10; option_max = 3; break;
        case 7: option_ptr = 0; break;
        }
        if (menu[1] == 7) {
            if ((W1 & 4) || (W2 & 4)) {
                snd_play_side_se(0, 77);
                opt_reset_game_options();
                saved_opts = (char *)0xC7F4750;
                options[4] = saved_opts[21];
                options[5] = saved_opts[22];
                options[6] = saved_opts[20];
                options[7] = saved_opts[23];
                options[8] = saved_opts[26];
                options[9] = saved_opts[27];
                options[10] = saved_opts[28];
            }
        } else {
            if ((W1 & 128) || (W2 & 128)) {
                snd_play_side_se(0, 76);
                *option_ptr = *option_ptr + 1;
                if (*option_ptr > option_max)
                    *option_ptr = 0;
            } else if ((W1 & 64) || (W2 & 64)) {
                snd_play_side_se(0, 76);
                *option_ptr = *option_ptr - 1;
                if (*option_ptr < 0)
                    *option_ptr = option_max;
            }
        }
        *(short *)(menu + 6) = *(short *)(menu + 6) + 1456;
        opt_game_settings_draw(menu, options);
        if ((W1 & 8) || (W2 & 8)) {
            menu[0] = menu[0] + 1;
            snd_play_side_se(0, 77);
        }
        return;
    default:
        FUN_0c0d7566();
        return;
    }
}

void opt_game_settings_queue_row(char *obj, char idx, char step)
{
    float block[14];
    float *entry = (float *)(0xC11B9D8 + idx * 16);
    float one = 1.0f;
    block[1] = entry[0] + entry[2] * (float)step;
    block[2] = entry[1];
    block[3] = 7.1f;
    *(int *)&block[10] = 0;
    *(int *)&block[13] = 5;
    if (obj[4] == idx)
        block[11] = one;
    else
        block[11] = 0.5f;
    block[4] = entry[3];
    block[5] = one;
    ui_sprite_queue_add(block, 0xC17FEA4, 1, 24, 0, 0);
}
