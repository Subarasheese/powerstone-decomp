/* game settings screen (7 option bytes, defaults item) (0c0195f0-0c019bf4) */

extern float math_sin_angle16(int);
extern void ui_sprite_queue_add(float *, int, int, int, int, int);

void opt_game_settings_queue_cursor(char *obj, signed char slot)
{
    float sprite[14];

    sprite[1] = 32.0f;
    sprite[2] = 80.0f + 40.0f * (float)slot;
    sprite[3] = 7.0999999f;
    ((int *)sprite)[10] = 0;
    ((int *)sprite)[13] = 5;
    sprite[11] = 0.75f + 0.25f * math_sin_angle16(*(short *)(obj + 6));
    sprite[4] = ((float *)0xC11BA58)[slot];
    sprite[5] = 1.0f;
    ui_sprite_queue_add(sprite, 0xC17FEA4, 1, 24, 0, 0);
}
