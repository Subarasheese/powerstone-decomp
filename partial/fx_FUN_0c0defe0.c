/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0defe0.json (synthetic). */
/* Debug trap: sets the border colour for a mode code (1 red, 2 blue, 3 green, 4 magenta), then hangs (mode 1) or traps. */
typedef struct { unsigned int v; } PACKED;
int kmSetBorderColor(PACKED c);

void FUN_0c0defe0(int mode)
{
    int m;
    PACKED p;

    m = mode;
    switch (m) {
    case 1:
        p.v = 0xFF0000FF;
        break;
    case 2:
        p.v = 0xFFFF0000;
        break;
    case 3:
        p.v = 0xFF00FF00;
        break;
    case 4:
        p.v = 0xFFFF00FF;
        break;
    }
    kmSetBorderColor(p);
    if (m == 1) {
        for (;;) {
        }
    }
    _builtin_trapa(48);
}
