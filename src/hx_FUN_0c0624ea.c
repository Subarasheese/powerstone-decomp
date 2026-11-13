/* Builds a fighter's skeleton links for both costumes (model descriptions c0 / c1): the 19 body parts (+0x300, 3520
   bytes per costume, 176 per part) get their parent links from 0x0C14E3D4 (0x0C14E420 for character 10; 128 = root),
   their mesh from the side's model table 0x0C4CFAB0 (240 bytes per side, 24 per costume), rest pose and scale vectors;
   the costume's extra parts (+0x1E80, count at c+52, links at c+56, poses at c+44 / c+48) and the weapon (+0x47C0, 2
   parts), hand (+0x5580, 4) and effect (+0x6340, 4) attachments likewise. Then every extra part's link is resolved to
   its anchor kind (-1, 2, 3 or 4) at +70 / +71, following FUN_0c0ccf38 through other parts. */
void *FUN_0c0ccf38(char *pl, int kind, int index);

typedef struct { float x, y, z; } VEC3;

#define B(o, n) (*(signed char *)((o) + (n)))
#define I(o, n) (*(int *)((o) + (n)))
#define TABLE(pl, k, n) (*(int **)((char *)0x0C4CFAB0 + (short)(B(pl, 3) * 240) + (signed char)((k) * 24) + (n)))

static void attach(char *part, int link, int mesh, VEC3 *pose, VEC3 *scale)
{
    part[66] = link == 128 ? -1 : 0;
    part[68] = part[66];
    part[67] = link == 128 ? -1 : link;
    part[69] = part[67];
    *(int *)(part + 144) = mesh;
    *(VEC3 *)(part + 152) = *pose;
    *(VEC3 *)(part + 164) = *pose;
    *(VEC3 *)(part + 84) = *scale;
    *(VEC3 *)(part + 96) = *scale;
}

void FUN_0c0624ea(char *pl, char *c0, char *c1)
{
    char *c, *part, *q, *links;
    int k, i, j, t;
    signed char v;

    B(pl, 0x7101) = 19;
    B(pl, 0x7100) = 19;
    B(pl, 0x7105) = 2;
    B(pl, 0x7104) = 2;
    B(pl, 0x7107) = 4;
    B(pl, 0x7106) = 4;
    B(pl, 0x7109) = 4;
    B(pl, 0x7108) = 4;
    c = c0;
    for (k = 0; k < 2; k++) {
        for (i = 0; i < 19; i++) {
            part = pl + 0x300 + (short)(k * 3520) + (short)(i * 176);
            if (B(pl, 4) == 10)
                t = ((int *)0x0C14E420)[i];
            else
                t = ((int *)0x0C14E3D4)[i];
            if (t == 128) {
                part[66] = -1;
                part[68] = -1;
                part[67] = -1;
                part[69] = -1;
            } else {
                part[66] = 0;
                part[68] = 0;
                part[67] = t;
                part[69] = t;
            }
            *(int *)(part + 144) = TABLE(pl, k, 8)[i];
            *(VEC3 *)(part + 152) = (*(VEC3 **)(c + 40))[i];
            *(VEC3 *)(part + 164) = (*(VEC3 **)(c + 40))[i];
            *(VEC3 *)(part + 84) = *(VEC3 *)0x0C14E478;
            *(VEC3 *)(part + 96) = *(VEC3 *)0x0C14E478;
        }
        B(pl, 0x7102 + k) = I(c, 52);
        for (i = 0; i < I(c, 52); i++) {
            part = pl + 0x1E80 + (short)(k * 5280) + (short)(i * 176);
            links = *(char **)(c + 56) + i * 2;
            part[66] = links[0];
            part[68] = links[0];
            links = *(char **)(c + 56) + i * 2;
            part[67] = links[1];
            part[69] = links[1];
            *(int *)(part + 144) = TABLE(pl, k, 56)[i];
            *(VEC3 *)(part + 152) = (*(VEC3 **)(c + 44))[i];
            *(VEC3 *)(part + 164) = (*(VEC3 **)(c + 44))[i];
            *(VEC3 *)(part + 84) = (*(VEC3 **)(c + 48))[i];
            *(VEC3 *)(part + 96) = (*(VEC3 **)(c + 48))[i];
        }
        for (i = 0; i < 2; i++)
            attach(pl + 0x47C0 + (short)(k * 1760) + (short)(i * 176), 4, TABLE(pl, k, 104)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        for (i = 0; i < 4; i++)
            attach(pl + 0x5580 + (short)(k * 1760) + (short)(i * 176), 8, TABLE(pl, k, 152)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        for (i = 0; i < 4; i++)
            attach(pl + 0x6340 + (short)(k * 1760) + (short)(i * 176), 12, TABLE(pl, k, 200)[i],
                   (VEC3 *)0x0C14E46C, (VEC3 *)0x0C14E478);
        c = c1;
    }
    for (k = 0; k < 2; k++) {
        B(pl, 0x71F1) = k;
        part = pl + 0x1E80 + (short)(k * 5280);
        for (j = 0; j < B(pl, 0x7102 + k); j++) {
            q = part;
            for (;;) {
                v = q[66];
                if (v == -1) {
                    part[70] = -1;
                    part[71] = -1;
                    break;
                }
                if (v == 2) {
                    part[70] = 2;
                    part[71] = q[67];
                    break;
                }
                if (q[66] == 3) {
                    part[70] = 3;
                    part[71] = q[67];
                    break;
                }
                if (v == 4) {
                    part[70] = 4;
                    part[71] = q[67];
                    break;
                }
                q = FUN_0c0ccf38(pl, q[66], q[67]);
            }
            part += 176;
        }
    }
    B(pl, 0x71F1) = 0;
}
