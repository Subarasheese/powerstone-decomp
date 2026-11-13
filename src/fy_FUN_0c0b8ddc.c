/* Spawns a spray effect object (kind 1/1/1) for the player a: copies its owner link and vector, computes the angles/speeds from the tables at 0x0C33C300/0x0C33C314 (index b), then initialises each of the effect's +0x2DC sub-blocks (flag, size, FUN_0c06233a with a table row, floats 0.6, and a +-0x2000 spread by the parity of b). */
typedef struct { int a, b, c; } S12;
extern char *FUN_0c059132(int, int, int, int);
extern void thunk_FUN_0c062242(char *, char *);
extern float FUN_0c0df4d0(int);
extern float FUN_0c0dfa50(int);
extern void FUN_0c0a1d88(char *);
extern void FUN_0c06233a(char *, char *, int);
extern void FUN_0c0b8f9a(void);

