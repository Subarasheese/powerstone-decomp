/* same module (objput sub) (0c0dd1f0-0c0dd260) */

int nl_objasm_draw_obj_opaque(int obj, int light);
int nlPopMatrix(int a4);

int nlobjput_sub(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        nl_objasm_draw_obj_opaque(a4, 0xC7FCC80);
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        nl_objasm_draw_obj_opaque(a4, 0xC7FCC80);
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}
