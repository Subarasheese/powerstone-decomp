
void game_play_state_04(void)
{
    FUN_0c0d54ac();
    if (g_301c == 0) {
        g_game_state[369] = (g_save_options[24] != 0) ? 1 : 0;
    } else {
        g_game_state[370] = (g_save_options[25] != 0) ? 1 : 0;
    }
    game_frame_update();
}
