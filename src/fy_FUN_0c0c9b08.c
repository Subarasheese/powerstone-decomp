/* Per-frame update of a boomerang-like item (state byte at +8): ages and moves it through its states, adjusts the pair of floats at +0x1C/+0x20 of its child by 0.1 per frame, and ends by calling FUN_0c059330 when finished. */

struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct oEE_short { char p[0xEE]; short v; };
struct oF0_float { char p[0xF0]; float v; };
int FUN_0c0555dc(void);
int FUN_0c059330(int);
int FUN_0c0c99c0(int, int, int, float);
int FUN_0c0c9a4c(int, int);
int FUN_0c0c9d18(int);
int FUN_0c0c9eb8(int);
int FUN_0c0ca050(int);
int FUN_0c0c9b08(int a4);

