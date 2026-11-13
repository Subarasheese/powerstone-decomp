/* INLINE-ASM: the function raises the interrupt mask in SR and loads GBR, which C cannot express; the rest is C. */
/* Video/display start-up: masks interrupts, records whether the PVR register at 0xA05F689C is >= 8, points GBR at the 0xC7FD620 block for FUN_0c0ddf30, sets the two display flags in 0xC7FD498 from the option bits b, selects the display mode record a, programs the culling register and the store-queue address registers, then restores the interrupt mask. */
#pragma inline_asm(masksr)
static void masksr(void)
{
    stc sr,r0
    or #240,r0
    xor #16,r0
    ldc r0,sr
}
#pragma inline_asm(unmasksr)
static void unmasksr(void)
{
    stc sr,r0
    or #240,r0
    xor #240,r0
    ldc r0,sr
}
#pragma inline_asm(setgbr)
static void setgbr(int v)
{
    ldc r4,gbr
}
typedef struct { int a, b, c; } S12;
extern void FUN_0c0ddf30(void);
extern void FUN_0c0fb54c(int a);
extern void FUN_0c0fb5dc(int a, int b, int c, int d);
extern void gfx_init_background_render_state(int a);
extern void FUN_0c0de120(int a);
extern void FUN_0c0e31c0(float a, float b, float c, float d);
extern void kmSetCullingRegister(float a);
extern void FUN_0c0fc2a6(int a);
extern void FUN_0c0de820(int a);
extern void FUN_0c0df080(int a);
void gfx_init_display_mode(int a, int b, int c)
{
    short *w = (short *)0xC7FD498;
    int *rec;
    float f6, f7;
    float z = 0.0f;
    int *p;

    masksr();
    if (*(volatile int *)0xA05F689C >= 8)
        *(int *)0xC7F8880 = 1;
    else
        *(int *)0xC7F8880 = 0;
    setgbr(0xC7FD620);
    FUN_0c0ddf30();
    w[4] = 0;
    w[5] = 0;
    if (b & 128)
        w[4] = 1;
    if (b & 0x8000)
        w[5] = 1;
    *(int *)0xC7F88EC = *(int *)(0xC155694 + (b & 15) * 4);
    rec = (int *)(0xC155598 + (unsigned char)(a * 12));
    FUN_0c0fb54c(rec[0]);
    FUN_0c0fb5dc(rec[1], *(int *)0xC7F88EC, w[4], w[5]);
    w[2] = ((short *)rec)[4];
    w[3] = ((short *)rec)[5];
    gfx_init_background_render_state(0xC7F8EB8);
    FUN_0c0de120(0xC7FC4F8);
    *(int *)0xC7FCAF8 = 0xC7FC4F8;
    *(int *)0xC7FCAFC = 0;
    *(int *)0xC7FD48C = -1;
    *(int *)0xC7FD494 = 0;
    *(int *)0xC7FD4A4 = 0;
    *(int *)0xC7FD488 = 0;
    p = (int *)0xC7FD4B8;
    ((float *)p)[0] = z;
    ((float *)p)[1] = z;
    ((float *)p)[2] = z;
    ((float *)p)[3] = z;
    p = (int *)0xC7FD4A8;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    *(float *)(0xC7FD620 + 40) = 1.0f;
    *(int *)(0xC7FD620 + 68) = 0;
    f6 = (float)w[2];
    if (w[5] == 1 && a != 0)
        f7 = 480.0f;
    else
        f7 = (float)w[3];
    FUN_0c0e31c0(z, z, f6, f7);
    kmSetCullingRegister(0.199999988f);
    *(volatile int *)0xFF000038 = 12;
    *(volatile int *)0xFF00003C = 12;
    FUN_0c0fc2a6(c);
    FUN_0c0de820(0x200000);
    FUN_0c0df080(0);
    *(int *)0xC7F88F4 = 0;
    unmasksr();
}
