/* Round start for a one-player stage: game state g = 0x0C7F302C gets mode 9 and its flags cleared, five setup calls
   FUN_0c05909a(1..5), resets of the effect/HUD/sound modules, then the fighter `side` (g[0x23]) is placed at the start
   position of stage g[0x25] (12-byte vectors at 0x0C345DF4, headings at 0x0C345EE4) and the other fighter 400 units
   back on x and z. A random 0/1 picks the opening voice/stance pair: FUN_0c0da590 plays a random one of 4 entries of the
   8-byte row of 0x0C155400 chosen by the fighter's character (+4) and the 0/1 draw, and both fighters get their opening
   action (FUN_0c0a2e26: 21 with the draw for this side, 8 for the other). */
void FUN_0c05909a(int n);
void FUN_0c099738(void);
void FUN_0c041e14(int n);
void FUN_0c0cc074(void);
void FUN_0c05fc00(void);
float FUN_0c0df940(void);
void FUN_0c0dc1c0(int a, int b, int c, int d);
void FUN_0c0d8f10(int a, int b, int c);
void FUN_0c0da590(int voice, int side);
int FUN_0c0a2e26(char *pl, int action, int arg);

typedef struct { float x, y, z; } VEC3;

#define G ((char *)0x0C7F302C)
#define PL(i) ((char *)((unsigned short)((unsigned short)(i) * (unsigned short)0x72D0) + 0xC7E40C4))

int FUN_0c055310(char side)
{
    unsigned int pick;
    char *row;

    G[0] = 9;
    G[1] = 0;
    G[2] = 0;
    G[3] = 0;
    G[4] = 0;
    FUN_0c05909a(1);
    FUN_0c05909a(2);
    FUN_0c05909a(3);
    FUN_0c05909a(4);
    FUN_0c05909a(5);
    FUN_0c099738();
    FUN_0c041e14(0);
    FUN_0c041e14(1);
    FUN_0c0cc074();
    FUN_0c05fc00();
    G[0x16B] = 0;
    G[0x24] = 0;
    G[0x166] = 0;
    G[0x4C] = 0;
    *(short *)(G + 0x168) = 0;
    G[0x23] = side;
    PL(1 - G[0x23])[1] = 0;
    *(VEC3 *)(PL(G[0x23]) + 0x20) = ((VEC3 *)0x0C345DF4)[G[0x25]];
    *(int *)(PL(G[0x23]) + 0x30) = ((int *)0x0C345EE4)[G[0x25]];
    *(float *)(PL(1 - G[0x23]) + 0x20) = *(float *)(PL(G[0x23]) + 0x20) + -400.0f;
    *(float *)(PL(1 - G[0x23]) + 0x28) = *(float *)(PL(G[0x23]) + 0x28) + -400.0f;
    pick = (unsigned int)(FUN_0c0df940() * 255.0f) % 2;
    FUN_0c0dc1c0(0, 0, 99, 0);
    FUN_0c0d8f10(0, 0, 64);
    side = G[0x23];
    row = (char *)0x0C155400 + PL(side)[4] * 8 + pick * 4;
    FUN_0c0da590(row[(unsigned int)(FUN_0c0df940() * 255.0f) % 4], side);
    FUN_0c0a2e26(PL(G[0x23]), 21, pick);
    return FUN_0c0a2e26(PL((signed char)(1 - G[0x23])), 8, 0);
}
