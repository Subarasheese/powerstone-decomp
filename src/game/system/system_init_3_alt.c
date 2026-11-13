/* boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene (0c061434-0c062050) */

int gfx_set_background_color(int, int, int, float);
int gfx_flip_frame_buffer(void);

int FUN_0c061472(float f4)
{
    gfx_set_background_color(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, f4);
    gfx_flip_frame_buffer();
    return gfx_flip_frame_buffer();
}
