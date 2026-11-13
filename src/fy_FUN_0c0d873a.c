/* Camera setup for an object: updates it (FUN_0c0d8468), copies the eye (+188) and target (+236) vectors, builds the view matrices (nlLookAt with the roll word at +292) into the object (+44 and +108) and inverts the second one. */
struct V3 { int a, b, c; };
int FUN_0c0d8468(char *o);
void FUN_0c0dc27c(char *o, struct V3 *eye, struct V3 *target);
int FUN_0c0e1550(int mode);
void nlUnitMatrix(void);
void nlLookAt(struct V3 *eye, struct V3 *target, int roll);
void FUN_0c0e0ae0(char *m);
int nlInvertMatrix(char *m);
void FUN_0c0d873a(char *o)
{
    struct V3 target;
    struct V3 eye;
    FUN_0c0d8468(o);
    eye = *(struct V3 *)(o + 188);
    target = *(struct V3 *)(o + 236);
    FUN_0c0dc27c(o, &eye, &target);
    FUN_0c0e1550(2);
    nlUnitMatrix();
    nlLookAt(&eye, &target, *(int *)(o + 292));
    FUN_0c0e0ae0(o + 108);
    FUN_0c0e0ae0(o + 44);
    nlInvertMatrix(o + 108);
    FUN_0c0e1550(1);
}
