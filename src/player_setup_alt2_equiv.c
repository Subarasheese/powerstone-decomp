/* player object setup: list search, tint, scale, spawn positions, model nodes (0c098c48-0c099c08) */

typedef struct { int a, b, c; } vec12;
extern void FUN_0c062de8(char *);
extern void FUN_0c01013c(char *);
extern void pl_clear_tint_flag(char *);
extern void FUN_0c099966(char *);
extern void pl_reset_scale(char *);
extern void FUN_0c05ef8c(int);

void pl_reset_model_parts(char *player)
{
    int side;

    FUN_0c062de8(player);
    FUN_0c01013c(player);
    pl_clear_tint_flag(player);
    FUN_0c099966(player);
    pl_reset_scale(player);
    FUN_0c05ef8c(player[3]);
    side = *(signed char *)(player + 0x71F1);
    *(vec12 *)(player + 0x614 + (short)(side * 3520)) = *(vec12 *)(player + 0x614 + (short)((1 - side) * 3520));
}
