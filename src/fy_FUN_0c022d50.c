/* Adds an offset to the vector p: gets the offset vector from FUN_0c062242 for the object's matrix at +108 (or, when byte +2 is 0 and sel is not -1, for the owner slot's matrix at +768 + 3520*slot + 176*sel), gives it to FUN_0c0621de together with p, then adds the offset to p. */
void FUN_0c062242(char *m, float *v);
void FUN_0c0621de(float *p, char *m);
void FUN_0c022d50(char *o, float *p, char sel)
{
    float v[3];
    int off;
    if (o[2] == 0 && sel != -1) {
        off = (short)(sel * 176);
        FUN_0c062242(o + 768 + (short)(*(signed char *)(o + 0x71F1) * 3520) + off, v);
        FUN_0c0621de(p, o + 768 + (short)(*(signed char *)(o + 0x71F1) * 3520) + off);
    } else {
        FUN_0c062242(o + 108, v);
        FUN_0c0621de(p, o + 108);
    }
    p[0] = p[0] + v[0];
    p[1] = p[1] + v[1];
    p[2] = p[2] + v[2];
}
