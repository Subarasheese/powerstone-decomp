/* Resets the game state block at 0xC7F302C (bytes +358, +76, +363 and the short at +360 to 0), copies the three words of the 12-byte record chosen by byte +37 (table at 0xC14AB90) to 0xC7F31BC, runs the init chain of the mode, and finally tail-calls FUN_0c08a6c0 when the second slot is in mode 10 (called earlier too for the first slot). */
struct St { char pad0[37]; signed char sel; char pad1[76 - 38]; char b76; char pad2[358 - 77]; char b358; char pad3; short w360; char pad4[363 - 362]; char b363; };
struct Pos { int a, b, c; };
void FUN_0c058fa2(void);
void FUN_0c099738(void);
void FUN_0c041e14(int n);
void FUN_0c02d774(void);
void FUN_0c02d82c(void);
void FUN_0c02d83c(void);
void FUN_0c026c7c(void);
void FUN_0c04c0ea(void);
void FUN_0c0cc074(void);
void FUN_0c05fc00(void);
void FUN_0c08a6c0(void);
