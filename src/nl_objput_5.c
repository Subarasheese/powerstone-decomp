/* same module (objput sub translated) (0c0dd260-0c0dd2d0) */

int nl_objasm_draw_obj(int, int, float);
int nlPopMatrix(int a4);

int nlobjput_sub_trnsl(int a4, float f4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        nl_objasm_draw_obj(a4, 0xC7FCC80, f4);
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        nl_objasm_draw_obj(a4, 0xC7FCC80, f4);
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}
