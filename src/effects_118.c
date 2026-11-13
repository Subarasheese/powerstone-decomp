/* effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx (0c049408-0c0496f0) */

/* named globals (symbols.txt) */
extern char g_res_kyoutsuu[];
int FUN_0c06231c(int, int, int);
float math_rand_float(void);

void fx_init_perturbed_rows(char *effect)
{
    float *row;
    float *pos;
    float spread;
    int i;

    effect[0] = 0;
    FUN_0c06231c((int)effect, ((int)g_res_kyoutsuu), effect[0x11] + 0x21);
    row = (float *)0xC14A928 + effect[0x14] * 6;
    pos = (float *)(effect + 4);
    for (i = 0; i < 3; i++) {
        pos[i] = row[2 * i];
        spread = row[2 * i + 1];
        if (spread != 0.0f) {
            pos[i] += (float)(effect[0x13] % 5) * (spread / 5.0f);
            pos[i] += (float)((unsigned)(math_rand_float() * 255.0f) % (unsigned)(int)(spread / 5.0f));
        }
    }
    *(float *)(effect + 0x40) = 1.0f;
    *(float *)(effect + 0x24) = 2.0f;
    *(float *)(effect + 0x20) = 2.0f;
    *(float *)(effect + 0x1C) = 2.0f;
    *(unsigned *)(effect + 0x18) = ((unsigned)(math_rand_float() * 255.0f) % 16) << 12;
    effect[0] = 1;
    effect[0x12] = 0;
    effect[0x10] = 3;
}
