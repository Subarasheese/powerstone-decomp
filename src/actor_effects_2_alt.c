/* actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified (0c05dd00-0c05e20c) */

typedef struct { int x, y, z; } vec3i;
extern void item_init_hold_pose(char *);

void FUN_0c05deec(char *effect)
{
    char *owner = *(char **)(effect + 28);
    char *game_rec;

    effect[8] = effect[8] + 1;
    effect[3] = (*(char **)(effect + 28))[3];
    effect[1] = 1;
    effect[0x105] = 1;
    effect[0x107] = 1;
    item_init_hold_pose(effect);
    *(vec3i *)(*(char **)(effect + 0x2E0) + 4) = *(vec3i *)0x0C336410;
    *(vec3i *)(*(char **)(effect + 0x2E0) + 16) = *(vec3i *)0x0C336434;
    *(float *)(*(char **)(effect + 0x2E0) + 28) = 1.0f;
    *(float *)(*(char **)(effect + 0x2E0) + 32) = 0.199999988f;
    *(float *)(*(char **)(effect + 0x2E0) + 36) = 1.0f;
    *(char **)(effect + 0x118) = owner + 0x300 + (short)(owner[0x71F1] * 3520) + 0x580;
    if (effect[11] == 0) {
        game_rec = (char *)0x0C7F2664;
        game_rec[0x315] = effect[13];
        game_rec[0x316] = 1;
        effect[11] = 1;
    }
}

void FUN_0c05df96(void)
{
    
}
