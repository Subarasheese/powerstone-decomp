/* scene render per frame (cameras, split screen), then HUD (0c02ca74-0c02d774) */

extern void nlUnitMatrix(void);
extern void nlMultiMatrix(char *);
extern void nlCalcPoint(char *, float *);
int nlSelectMatrixStack(int);
int nlLoadMatrix(char *);
void nlStoreMatrix(char *);
void nlSetTranslate(float *);
void FUN_0c02ccbc(int, char *, char *, char *);

void mdl_setup_part_matrices(char *model)
{
    float pt[3];
    signed char part_idx;
    char *part;

    nlSelectMatrixStack(1);
    if (*(unsigned short *)(model + 6) & 0x1bf) {
        nlUnitMatrix();
        if (*(unsigned short *)(model + 6) & 32) {
            FUN_0c02ccbc(*(short *)(model + 6) & -2, model + 32, model + 44, model + 80);
            nlStoreMatrix(model + 108);
            nlLoadMatrix((char *)(0xC7F29F8 + 108));
            nlSetTranslate((float *)(model + 32));
            nlMultiMatrix(model + 108);
        } else {
            if (*(int *)(model + 0x118) != 0)
                nlLoadMatrix(*(char **)(model + 0x118));
            FUN_0c02ccbc(*(short *)(model + 6), model + 32, model + 44, model + 80);
        }
        nlStoreMatrix(model + 108);
    }
    for (part_idx = 0; part_idx < model[0x2dc]; part_idx++) {
        part = *(char **)(model + 0x2e0 + part_idx * 4);
        if (*(unsigned short *)(part + 2) & 0x1bf) {
            if (*(int *)(part + 0x90) != 0)
                nlLoadMatrix(*(char **)(part + 0x90));
            else
                nlLoadMatrix(model + 108);
            if (*(unsigned short *)(part + 2) & 32) {
                nlCalcPoint(part + 4, pt);
                nlUnitMatrix();
                FUN_0c02ccbc(*(short *)(part + 2) & -2, part + 4, part + 16, part + 28);
                nlStoreMatrix(part + 80);
                nlLoadMatrix((char *)(0xC7F29F8 + 108));
                nlSetTranslate(pt);
                nlMultiMatrix(part + 80);
            } else {
                FUN_0c02ccbc(*(short *)(part + 2), part + 4, part + 16, part + 28);
            }
            nlStoreMatrix(part + 80);
        }
    }
}
