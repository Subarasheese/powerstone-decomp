/* Hand-written: the colour word is split into four bytes in a stack local and read back as one word, which gives the argument itself;
   that word is passed by value (one stack word) to kmSetFogTableColor, whose result the function returns (the epilogue leaves r0
   as the callee set it). The same call as gfx_set_fog_table_color (nl_screen_math.c). */
typedef struct { unsigned int bits; } PackedColor;
int kmSetFogTableColor(PackedColor argb);

int gfx_set_fog_color(unsigned int argb)
{
    PackedColor packed;
    packed.bits = argb;
    return kmSetFogTableColor(packed);
}
