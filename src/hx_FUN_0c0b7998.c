/* Random launch of an effect object: two random angles (0..350 degrees in 10-degree steps, as 16-bit angle units) at
   +0x10/+0x14, a random speed 50..249 that sets the velocity (+4, +8, +C) from the angles' sines and cosines, a random
   duration 10..19 frames at +0x94, the per-frame steps (+0x28, +0x2C, +0x30 = -velocity / duration) and the scales
   +0x1C, +0x20, +0x24 = 1.0. FUN_0c0df940 is the random number in [0, 1), FUN_0c0df4d0 / FUN_0c0dfa50 sine and cosine. */
float FUN_0c0df940(void);
float FUN_0c0df4d0(int angle);
float FUN_0c0dfa50(int angle);

struct fx_obj { float pad0; float vx; float vy; float vz; int ang_y; int ang_x; int ang_z; float sx; float sy; float sz;
                float dx; float dy; float dz; char pad34[0x94 - 0x34]; float frames; };

void FUN_0c0b7998(struct fx_obj *o)
{
    unsigned int n;
    float speed, frames;

    n = (unsigned int)(FUN_0c0df940() * 255.0f) % 36 * 10;
    o->ang_y = (int)((float)n * 65536.0f / 360.0f);
    n = (unsigned int)(FUN_0c0df940() * 255.0f) % 36 * 10;
    o->ang_x = (int)((float)n * 65536.0f / 360.0f);
    o->ang_z = 0;
    n = (unsigned int)(FUN_0c0df940() * 255.0f) % 200;
    speed = (float)n + 50.0f;
    o->vx = -(FUN_0c0df4d0(0x14000 - o->ang_x) * FUN_0c0dfa50(0x14000 - o->ang_y) * speed);
    o->vz = -(FUN_0c0dfa50(0x14000 - o->ang_x) * FUN_0c0dfa50(0x14000 - o->ang_y) * speed);
    o->vy = FUN_0c0df4d0(0x14000 - o->ang_y) * speed;
    frames = (float)(int)((unsigned int)(FUN_0c0df940() * 255.0f) % 10 + 10);
    o->frames = frames;
    o->dx = -o->vx / o->frames;
    o->dz = -o->vz / o->frames;
    o->dy = -o->vy / o->frames;
    o->sx = 1.0f;
    o->sy = 1.0f;
    o->sz = 1.0f;
}
