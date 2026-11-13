/* Runs a script of 20-byte commands (table at 0xC17E3B0) for an actor: copies vectors/ints into its fields until a command sets a wait timer or ends the script. */
int FUN_0c0a370c(int, int, int, int);
int FUN_0c0a3eec(int);

struct Cmd {
    short wait;             /* 0x00 */
    unsigned char op;       /* 0x02 */
    unsigned char arg3;     /* 0x03 */
    float v[3];             /* 0x04 */
    int i;                  /* 0x10 */
};

void FUN_0c0128a0(char *o, int a5, int a6, int a7)
{
    struct Cmd *e;
    char *k;
    int done;

    e = (struct Cmd *)(*(char **)(0xC17E3B0 + o[4] * 4) + o[0xD] * 20);
    done = 0;
    do {
        *(short *)(o + 0xEE) = e->wait;
        o[0xE] = e->op;
        o[0xF] = e->arg3;
        k = *(char **)(o + 0x2E0);
        switch (e->op) {
        case 0:
            *(float *)(o + 0x20) = e->v[0]; *(float *)(o + 0x24) = e->v[1]; *(float *)(o + 0x28) = e->v[2];
            break;
        case 1:
            *(float *)(o + 0x38) = e->v[0]; *(float *)(o + 0x3C) = e->v[1]; *(float *)(o + 0x40) = e->v[2];
            break;
        case 2:
            *(float *)(o + 0x50) = e->v[0]; *(float *)(o + 0x54) = e->v[1]; *(float *)(o + 0x58) = e->v[2];
            break;
        case 3:
            *(float *)(o + 0x44) = e->v[0]; *(float *)(o + 0x48) = e->v[1]; *(float *)(o + 0x4C) = e->v[2];
            break;
        case 4:
            *(int *)(o + 0x2C) = e->i;
            break;
        case 5:
            *(int *)(o + 0x30) = e->i;
            break;
        case 6:
            *(int *)(o + 0x34) = e->i;
            break;
        case 16:
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 4) = e->v[0];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 8) = e->v[1];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0xC) = e->v[2];
            break;
        case 17:
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x28) = e->v[0];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x2C) = e->v[1];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x30) = e->v[2];
            break;
        case 18:
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x1C) = e->v[0];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x20) = e->v[1];
            k = *(char **)(o + 0x2E0);
            *(float *)(k + 0x24) = e->v[2];
            break;
        case 20:
            *(int *)(*(char **)(o + 0x2E0) + 0x10) = e->i;
            break;
        case 21:
            *(int *)(*(char **)(o + 0x2E0) + 0x14) = e->i;
            break;
        case 22:
            *(int *)(*(char **)(o + 0x2E0) + 0x18) = e->i;
            break;
        case 23:
            *(float *)(o + 0x60) = e->v[0]; *(float *)(o + 0x64) = e->v[1]; *(float *)(o + 0x68) = e->v[2];
            break;
        case 24:
            *(float *)(o + 0x5C) = e->v[0];
            break;
        case 25:
            o[0xC] = e->i;
            break;
        case 32:
            o[1] = e->i;
            break;
        case 0xF4:
            FUN_0c0a370c(e->i, a5, a6, a7);
            break;
        case 0xF5:
            FUN_0c0a3eec(e->i);
            break;
        case 0xFF:
            o[9] = o[9] + 1;
            done = 1;
            break;
        }
        if (done == 0) {
            o[0xD] = o[0xD] + 1;
        }
        if (done != 0) {
            break;
        }
        e++;
    } while (*(short *)(o + 0xEE) == 0);
}
