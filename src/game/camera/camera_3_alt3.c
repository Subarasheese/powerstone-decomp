/* camera follow computation and mode handlers 1..28 (0c0d9288-0c0db1c0) */

struct CameraPreset { int words[13]; };
int FUN_0c0da5b2(char *obj);
void cam_step_keyframe_script(char *obj, int ang_diff);
void cam_compute_follow(char *obj, char *cam);
#define PRESET (*(char **)0xC34011C)
#define PAD_BITS(obj) (*(int *)((char *)0xC7F31F0 + (signed char)((signed char)(obj)[388] * 36)))

void cam_mode_06(char *obj)
{
    int ang_diff;
    float ang;
    switch (obj[3]) {
    case 0:
        cam_step_keyframe_script(obj, *(int *)(0xC340554 + (signed char)obj[4] * 4));
        if (FUN_0c0da5b2(obj) == 0)
            return;
        obj[3] = obj[3] + 1;
        *(struct CameraPreset *)(obj + 424) = **(struct CameraPreset **)0xC34011C;
        *(short *)(obj + 434) = (short)(int)((float)*(int *)(obj + 340) * 360.0f / 65536.0f);
        ang_diff = *(int *)(obj + 276) - *(int *)(0xC7E40F4 + (unsigned short)((signed char)obj[388] * 0x72D0));
        ang = (float)ang_diff;
        if (ang > 32768.0f)
            ang = ang + -65536.0f;
        *(short *)(obj + 436) = (short)(int)(ang * 360.0f / 65536.0f);
        *(short *)(obj + 438) = (short)(int)*(float *)(obj + 308);
        return;
    case 1:
        if (PAD_BITS(obj) & 64) {
            if (*(short *)(obj + 436) < 30)
                *(short *)(obj + 436) = *(short *)(obj + 436) + *(short *)(obj + 444);
        } else if (PAD_BITS(obj) & 128) {
            if (*(short *)(obj + 436) > -30)
                *(short *)(obj + 436) = *(short *)(obj + 436) - *(short *)(obj + 444);
        }
        if (PAD_BITS(obj) & 16) {
            if (*(short *)(obj + 434) < *(short *)(PRESET + 10) + 60)
                *(short *)(obj + 434) = *(short *)(obj + 434) + *(short *)(obj + 446);
        } else if (PAD_BITS(obj) & 32) {
            if (*(short *)(obj + 434) > *(short *)(PRESET + 10) - 30)
                *(short *)(obj + 434) = *(short *)(obj + 434) - *(short *)(obj + 446);
        }
        if (PAD_BITS(obj) & 0x604) {
            if (*(short *)(obj + 438) > *(short *)(PRESET + 18))
                *(short *)(obj + 438) = *(short *)(obj + 438) - *(short *)(obj + 440);
        } else {
            if (*(short *)(obj + 438) < *(short *)(PRESET + 14))
                *(short *)(obj + 438) = *(short *)(obj + 438) + *(short *)(obj + 440);
        }
        cam_compute_follow(obj, obj + 424);
        return;
    default:
        return;
    }
}
