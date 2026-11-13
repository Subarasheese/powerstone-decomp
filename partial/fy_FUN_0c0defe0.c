
void sys_fatal_error_screen(int kind)
{
    int color;

    switch (kind) {
    case 1:
        color = 0xFF0000FF;
        break;
    case 2:
        color = 0xFFFF0000;
        break;
    case 3:
        color = 0xFF00FF00;
        break;
    case 4:
        color = 0xFFFF00FF;
        break;
    }
    kmSetBorderColor(color);
    if (kind == 1) {
        for (;;) {
        }
    }
    _builtin_trapa(48);
}
