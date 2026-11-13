/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057850-0c057b3c) */

struct vec3i { int x, y, z; };
extern int FUN_0c0d5188(void);
extern int FUN_0c055634(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void obj_destroy(char *effect);

void fx_tick_057ab6(char *effect)
{
    if (FUN_0c0d5188() != 0 || FUN_0c055634() != 0)
        effect[8] = 2;
    switch (effect[8]) {
    case 0:
        effect[1] = 1;
        *(short *)(effect + 6) = 31;
        effect[5] = 25;
        FUN_0c06233a(*(char **)(effect + 736), 0xC4CFA80, ((signed char *)0xC14B970)[(unsigned char)(effect[4] * 28) + 24]);
        **(char **)(effect + 736) = 0;
        *(struct vec3i *)(*(char **)(effect + 736) + 4) = *(struct vec3i *)(0xC14B970 + (unsigned char)(effect[4] * 28));
        *(struct vec3i *)(*(char **)(effect + 736) + 28) = *(struct vec3i *)(0xC14B970 + (unsigned char)(effect[4] * 28) + 12);
        *(short *)(*(char **)(effect + 736) + 2) = 799;
        *(float *)(*(char **)(effect + 736) + 68) = 1.0f;
        *(float *)(*(char **)(effect + 736) + 72) = 0.0f;
        *(float *)(*(char **)(effect + 736) + 76) = 0.0f;
        FUN_0c06233a(*(char **)(effect + 740), 0xC4CFA80, ((signed char *)0xC14B970)[(unsigned char)(effect[4] * 28) + 25] + 1);
        **(char **)(effect + 740) = 0;
        *(struct vec3i *)(*(char **)(effect + 740) + 4) = *(struct vec3i *)(0xC14B970 + (unsigned char)(effect[4] * 28));
        *(struct vec3i *)(*(char **)(effect + 740) + 28) = *(struct vec3i *)(0xC14B970 + (unsigned char)(effect[4] * 28) + 12);
        *(short *)(*(char **)(effect + 740) + 2) = 799;
        *(float *)(*(char **)(effect + 740) + 68) = 1.0f;
        *(float *)(*(char **)(effect + 740) + 72) = 0.0f;
        *(float *)(*(char **)(effect + 740) + 76) = 0.0f;
        *(short *)(effect + 236) = 1;
        effect[8]++;
        /* fall through */
    case 1:
        switch (effect[9]) {
        case 0:
            *(short *)(effect + 236) = *(short *)(effect + 236) - 1;
            if (*(short *)(effect + 236) != 0) return;
            *(short *)(effect + 236) = 1;
            effect[9]++;
            return;
        case 1:
            *(short *)(effect + 236) = *(short *)(effect + 236) - 1;
            if (*(short *)(effect + 236) != 0) return;
            **(char **)(effect + 736) = 1;
            **(char **)(effect + 740) = 1;
            *(float *)(*(char **)(effect + 736) + 12) = 0.0f;
            *(float *)(*(char **)(effect + 740) + 12) = 0.0f;
            *(float *)(*(char **)(effect + 740) + 36) = 1.0f;
            effect[9]++;
            return;
        case 2:
            *(float *)(*(char **)(effect + 736) + 12) -= 0.19999999f;
            *(float *)(*(char **)(effect + 740) + 12) -= 0.19999999f;
            if (*(float *)(*(char **)(effect + 740) + 12) > -5.0f) return;
            **(char **)(effect + 736) = 1;
            effect[9]++;
            return;
        case 3:
            *(float *)(*(char **)(effect + 740) + 36) -= 0.04f;
            if (!(0.0f > *(float *)(*(char **)(effect + 740) + 36))) return;
            *(short *)(effect + 236) = 60;
            effect[9]++;
            return;
        case 4:
            *(short *)(effect + 236) = *(short *)(effect + 236) - 1;
            if (*(short *)(effect + 236) != 0) return;
            effect[8]++;
            return;
        default:
            return;
        }
    default:
        obj_destroy(effect);
        return;
    }
}
