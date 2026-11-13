/* Tail-dispatch: calls handler table[p->mode] (table at 0xC3370BC) with the same object. */
void FUN_0c07679a(char *p)
{
    void (**t)(char *) = (void (**)(char *))0x0C3370BC;
    t[p[0x7209]](p);
}
