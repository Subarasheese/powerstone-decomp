/* CPU fighter AI: slot helpers, debug overlay, script runner/selector, ai_think, first opcode handlers (0c04bfd0-0c04e94c) */

/* named globals (symbols.txt) */
extern char g_ai_script_group[];
extern int sprintf(char *s, const char *fmt, ...);
void ai_think(char *o);
void ai_run_script(char *o);
int ai_calc_gap_to_target(char *o);
void dbg_print_at(char *text, int colour, float x, float y, float sx, float sy);
#define BUF ((char *)0x0C7F36B8)
#define SIDE (*(unsigned char *)0x0C3673EE)
#define AI ((char *)0x0C366F40 + (short)(SIDE * 596))
#define G ((signed char *)0x0C7F302C)
#define I(o, n) (*(int *)((o) + (n)))
#define F(o, n) (*(float *)((o) + (n)))
#define UH(o, n) (*(unsigned short *)((o) + (n)))
#define TEXT(y) dbg_print_at(BUF, 7, 144.0f + 240.0f * (float)SIDE, (y), 8.0f, 8.0f)
#define SHOW(fmt, v, y) sprintf(BUF, (const char *)(fmt), (v)); TEXT(y)
struct o0_int { int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int ai_clear_op_state(void);
int ai_script_branch(void);

void ai_draw_debug_info(char *o)
{
    I(o, 0x2E0) = I(o, 0x2DC);
    I(o, 0x2DC) = 0;
    *(signed char *)0x0C3673EE = o[3];
    *(signed char *)g_ai_script_group = o[4];
    ai_think(o);
    ai_run_script(o);
    I(o, 0x2E4) = ~I(o, 0x2E0) & I(o, 0x2DC);
    I(o, 0x2E8) = ~I(o, 0x2DC) & I(o, 0x2E0);
    if (*(signed char *)0x0C494D45 == 0)
        return;
    *(short *)(AI + 40) = (*(signed char **)(o + 28))[0x100];
    SHOW(0x0C14AA48, (unsigned short)ai_calc_gap_to_target(o), 64.0f);
    SHOW(0x0C14AA54, UH(AI, 20), 72.0f);
    SHOW(0x0C14AA60, I(o, 0x2DC), 80.0f);
    SHOW(0x0C14AA6C, *(unsigned char *)(AI + 4), 88.0f);
    SHOW(0x0C14AA78, UH(AI, 40), 96.0f);
    SHOW(0x0C14AA84, UH(AI, 8), 112.0f);
    SHOW(0x0C14AA90, UH(AI, 6), 120.0f);
    SHOW(0x0C14AA9C, UH(AI, 44), 128.0f);
    SHOW(0x0C14AAA8, I(AI, 108), 136.0f);
    SHOW(0x0C14AAB4, (short)(int)F(o, 32), 152.0f);
    SHOW(0x0C14AAC0, (short)(int)F(o, 36), 160.0f);
    SHOW(0x0C14AACC, (short)(int)F(o, 40), 168.0f);
    SHOW(0x0C14AAD8, UH(AI, 44), 184.0f);
    SHOW(0x0C14AAE4, UH(AI, 112), 200.0f);
    SHOW(0x0C14AAF0, (short)(int)F(AI, 96), 216.0f);
    SHOW(0x0C14AAFC, (short)(int)F(AI, 100), 224.0f);
    SHOW(0x0C14AB08, (short)(int)F(AI, 104), 232.0f);
    SHOW(0x0C14AB14, (short)(int)F(*(char **)(AI + 108), 32), 248.0f);
    SHOW(0x0C14AB20, (short)(int)F(*(char **)(AI + 108), 36), 256.0f);
    SHOW(0x0C14AB2C, (short)(int)F(*(char **)(AI + 108), 40), 264.0f);
    SHOW(0x0C14AB38, I(o, 0x71C8), 280.0f);
    SHOW(0x0C14AB44, (unsigned char)G[48], 288.0f);
    SHOW(0x0C14AB44, G[49], 296.0f);
    SHOW(0x0C14AB50, (short)(int)F(*(char **)(o + 28), 32), 312.0f);
    SHOW(0x0C14AB5C, (short)(int)F(*(char **)(o + 28), 36), 320.0f);
    SHOW(0x0C14AB68, (short)(int)F(*(char **)(o + 28), 40), 328.0f);
    SHOW(0x0C14AB74, G[36], 344.0f);
}

int ai_op8_jump(void)
{
    register int t3;

    ai_script_branch();
    *(unsigned int *)(((0xC366F4C + (short)((short)(unsigned char)(*(signed char *)0xC3673EE) * (short)0x254)) + 0x0)) = ((((struct o0_int *)0xC3673E8)->v));
    t3 = ai_clear_op_state();
    (((struct o4_ushort *)0xC3673E8)->v) = 0x1;
    return t3;
}
