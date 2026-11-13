/* class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module (0c057b3c-0c057e28) */

struct vec3i { int w0, w1, w2; };
extern int FUN_0c0d5188(void);
extern void FUN_0c06233a(char *p, int q, int n);
extern void obj_destroy(char *effect);
typedef struct { int x, y, z; } Vec3i;
extern char *obj_create(int, int, int, int);

void fx_tick_057da8(char *effect)
{
    if (FUN_0c0d5188() != 0)
        effect[8] = 2;
    switch (effect[8]) {
    case 0:
        effect[1] = 1;
        *(short *)(effect + 6) = 31;
        effect[5] = 25;
        FUN_0c06233a(*(char **)(effect + 736), 0xC4CFA80, ((signed char *)0xC14BA40)[(unsigned char)(effect[4] * 28) + 24]);
        **(char **)(effect + 736) = 0;
        *(struct vec3i *)(*(char **)(effect + 736) + 4) = *(struct vec3i *)(0xC14BA40 + (unsigned char)(effect[4] * 28));
        *(struct vec3i *)(*(char **)(effect + 736) + 28) = *(struct vec3i *)(0xC14BA40 + (unsigned char)(effect[4] * 28) + 12);
        *(short *)(*(char **)(effect + 736) + 2) = 799;
        *(float *)(*(char **)(effect + 736) + 68) = 0.0f;
        *(float *)(*(char **)(effect + 736) + 72) = 0.0f;
        *(float *)(*(char **)(effect + 736) + 76) = 1.0f;
        FUN_0c06233a(*(char **)(effect + 740), 0xC4CFA80, ((signed char *)0xC14BA40)[(unsigned char)(effect[4] * 28) + 25] + 1);
        **(char **)(effect + 740) = 0;
        *(struct vec3i *)(*(char **)(effect + 740) + 4) = *(struct vec3i *)(0xC14BA40 + (unsigned char)(effect[4] * 28));
        *(struct vec3i *)(*(char **)(effect + 740) + 28) = *(struct vec3i *)(0xC14BA40 + (unsigned char)(effect[4] * 28) + 12);
        *(short *)(*(char **)(effect + 740) + 2) = 799;
        *(float *)(*(char **)(effect + 740) + 68) = 0.0f;
        *(float *)(*(char **)(effect + 740) + 72) = 0.0f;
        *(float *)(*(char **)(effect + 740) + 76) = 1.0f;
        *(short *)(effect + 236) = 1;
        effect[8]++;
        /* fall through */
    case 1:
        if (*(signed char *)0xC7F302C != 7)
            effect[8]++;
        switch (effect[9]) {
        case 0:
            *(short *)(effect + 236) = *(short *)(effect + 236) - 1;
            if (*(short *)(effect + 236) == 0) {
                *(short *)(effect + 236) = effect[4] * 10 + 1;
                effect[9]++;
            }
            /* fall through */
        case 1:
            *(short *)(effect + 236) = *(short *)(effect + 236) - 1;
            if (*(short *)(effect + 236) != 0) return;
            **(char **)(effect + 740) = 1;
            *(float *)(*(char **)(effect + 740) + 36) = 0.0f;
            effect[9]++;
            return;
        case 2:
            *(float *)(*(char **)(effect + 740) + 36) += 0.049999997f;
            if (!(*(float *)(*(char **)(effect + 740) + 36) > 0.5f)) return;
            **(char **)(effect + 736) = 1;
            effect[9]++;
            return;
        case 3:
            *(float *)(*(char **)(effect + 740) + 36) -= 0.049999997f;
            if (!(0.0f > *(float *)(*(char **)(effect + 740) + 36))) return;
            **(char **)(effect + 740) = 0;
            *(short *)(effect + 236) = 1000 - effect[4] * 10;
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

void fx_spawn_057da8(void)
{
    Vec3i template;
    char *slot;
    int idx;

    template = *(Vec3i *)0x0C14BB3C;
    for (idx = 0; idx < 9; idx++) {
        slot = obj_create(6, 1, 2, 0);
        if (slot) {
            *slot = 1;
            slot[4] = idx;
            *(int *)(slot + 16) = 0x0C057B3C;
            *(Vec3i *)(slot + 80) = template;
        }
    }
}
