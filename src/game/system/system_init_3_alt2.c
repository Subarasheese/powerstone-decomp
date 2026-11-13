/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c061434-0c062050) */

extern void _builtin_set_imask(int);
void FUN_0c0e4ac0(int);
void syHwInit(void);
void sys_set_boot_state(void);
void FUN_0c061444(int);
void FUN_0c0f2808(int, int);
void syHwInit2(void);
void FUN_0c0e46c0(void);
void FUN_0c06143c(void);
void sys_init_all(void);
void sys_main_loop_step(void);
void gfx_flip_frame_buffer(void);
void FUN_0c0a3274(void);
void sys_shutdown_all(void);

void sys_main_loop(void)
{
    *(int *)0xC7F3024 = 1;
    _builtin_set_imask(14);
    FUN_0c0e4ac0(0xC386828);
    syHwInit();
    sys_set_boot_state();
    FUN_0c061444(*(int *)0xC7F3020);
    FUN_0c0f2808((0xC3B9D48 & -32) + 32, 0x80000);
    _builtin_set_imask(14);
    syHwInit2();
    FUN_0c0e46c0();
    FUN_0c06143c();
    _builtin_set_imask(0);
    sys_init_all();
    do {
        _builtin_set_imask(0);
        *(int *)0xC386838 = *(int *)0xC386838 + 1;
        if (*(int *)0xC386830 != 0)
            *(int *)0xC386834 = 1;
        *(int *)0xC4CD1B4 = -1;
        if (*(int *)0xC386834 != 0 && *(int *)0xC386838 > 4)
            *(int *)0xC4CD1B4 = 0;
        sys_main_loop_step();
        if (*(int *)0xC386834 != 0 && *(int *)0xC386838 > 4) {
            *(int *)0xC386838 = 0;
            *(int *)0xC4CD1B4 = -1;
            sys_main_loop_step();
        }
        gfx_flip_frame_buffer();
        _builtin_set_imask(0);
        FUN_0c0a3274();
    } while (*(int *)0xC7F3024 != 0);
    sys_shutdown_all();
}
