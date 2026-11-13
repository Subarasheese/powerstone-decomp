/* Keyframe playback for a fighter's attached object: finds the keyframe (12 bytes each: time, dx, dy... at the list +0x72C0) for the clock at +0x719E, clears the target's three float slots of the block its kind (1, 2 or 3) selects, then moves the target (pointer at +28): on the exact keyframe it adds the key's offsets rotated by the facing angle (+48), between keys it interpolates the step by the time gap. */
extern float FUN_0c0dfa50(int a);
extern float FUN_0c0df4d0(int a);
void FUN_0c086d98(char *o)
{
    char *q = *(char **)(o + 28);
    char *k = *(char **)(o + 0x72BC + 4);
    char *b, *kp;
    float f4, f3, f2, f15, g;
    int m, dt;

    while ((unsigned short)*(short *)(o + 0x719E) > *(short *)k)
        k += 12;
    m = q[0x71F1];
    switch (*(short *)(k + 2)) {
    case 1:
        b = q + 768 + (short)(m * 3520) + 528;
        *(float *)(b + 116) = 0.0f;
        *(float *)(b + 112) = 0.0f;
        *(float *)(b + 108) = 0.0f;
        b = q + 768 + (short)(m * 3520) + 1760;
        *(float *)(b + 116) = 0.0f;
        *(float *)(b + 112) = 0.0f;
        *(float *)(b + 108) = 0.0f;
        b = q + 768 + (short)(m * 3520) + 1056;
        *(float *)(b + 116) = 0.0f;
        *(float *)(b + 112) = 0.0f;
        *(float *)(b + 108) = 0.0f;
        break;
    case 2:
        b = q + 768 + (short)(m * 3520) + 176;
        *(float *)(b + 116) = 0.0f;
        *(float *)(b + 112) = 0.0f;
        *(float *)(b + 108) = 0.0f;
        break;
    case 3:
        b = q + 768 + (short)(m * 3520);
        *(float *)(b + 116) = 0.0f;
        *(float *)(b + 112) = 0.0f;
        *(float *)(b + 108) = 0.0f;
        break;
    }
    if ((unsigned short)*(short *)(o + 0x719E) == *(short *)k) {
        *(float *)(q + 32) = *(float *)(o + 32) + *(float *)(k + 4) * FUN_0c0dfa50(*(int *)(o + 48));
        *(float *)(q + 36) = *(float *)(o + 36) + *(float *)(k + 8);
        *(float *)(q + 40) = *(float *)(o + 40) + *(float *)(k + 4) * FUN_0c0df4d0(*(int *)(o + 48));
    } else {
        kp = k - 12;
        f4 = *(float *)(k + 4);
        f3 = *(float *)(kp + 4);
        f2 = f4 - f3;
        f15 = f4;
        dt = *(short *)k - *(short *)kp;
        f2 = f2 / (float)dt;
        f15 = f15 + f2;
        *(float *)(q + 32) = *(float *)(o + 32) + f15 * FUN_0c0dfa50(*(int *)(o + 48));
        *(float *)(q + 40) = *(float *)(o + 40) + f15 * FUN_0c0df4d0(*(int *)(o + 48));
        f4 = *(float *)(k + 8);
        f3 = *(float *)(kp + 8);
        dt = *(short *)k - *(short *)kp;
        f2 = f4 - f3;
        f2 = f2 / (float)dt;
        f4 = f4 + f2;
        *(float *)(q + 36) = *(float *)(o + 36) + f4;
    }
}
