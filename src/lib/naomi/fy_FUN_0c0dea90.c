/* INLINE-ASM: only the trapa #65 (an error trap the SDK compiler has no intrinsic for in this install); the rest is C. */
/* Sets up the frame-time record at 0xC7F8810 from four weights (in 1/100 units) and the global time step: stores the weight sum (+40), normalises the weights by half the sum (mode 3) or by the sum (record kind +92 = 32, 34 or 36) into +44..+56 and the step ratio into +60, hands the record to FUN_0c0f9d00 (trap 65 on failure), clears the word the pointer at 0xC7F8E9C points to to 0x800000 and runs FUN_0c0ddeb0 once. Returns FUN_0c0f9d00'frame_rec result. */
#pragma inline_asm(trapa65)
static void trapa65(void)
{
    trapa #65
}
extern int FUN_0c0f9d00(char *rec);
extern void FUN_0c0ddeb0(void);
int gfx_set_frame_time_weights(int weight_a, int weight_b, int weight_c, int weight_d)
{
    char *frame_rec = (char *)0xC7F8810;
    int sum, half, res;
    float hundred = 100.0f;
    float norm_a, norm_b, norm_c, norm_d, divisor, step_ratio;

    sum = *(int *)0xC7F887C + weight_b + weight_c + weight_d;
    if (*(int *)0xC7F8878 == 3)
        sum = (sum + weight_a) * 2;
    *(int *)(frame_rec + 40) = sum;
    norm_a = (float)weight_a * hundred;
    norm_b = (float)weight_b * hundred;
    norm_c = (float)weight_c * hundred;
    norm_d = (float)weight_d * hundred;
    if (*(int *)0xC7F8878 == 3) {
        half = (sum + (0 > sum)) >> 1;
        divisor = (float)half;
        norm_a = norm_a / divisor;
        norm_b = norm_b / divisor;
        norm_c = norm_c / divisor;
        norm_d = norm_d / divisor;
        *(float *)(frame_rec + 44) = norm_a;
        *(float *)(frame_rec + 48) = norm_b;
        *(float *)(frame_rec + 52) = norm_c;
        *(float *)(frame_rec + 56) = norm_d;
        step_ratio = (float)*(int *)0xC7F887C * hundred / divisor;
        *(float *)(frame_rec + 60) = step_ratio;
    } else {
        divisor = (float)sum;
        res = *(int *)(frame_rec + 92);
        if (res == 32) {
            norm_b = norm_b / divisor;
            norm_c = norm_c / divisor;
            norm_d = norm_d / divisor;
            *(float *)(frame_rec + 44) = 0.0f;
            *(float *)(frame_rec + 48) = norm_b;
            *(float *)(frame_rec + 52) = norm_c;
            *(float *)(frame_rec + 56) = norm_d;
            step_ratio = (float)*(int *)0xC7F887C * hundred / divisor;
            *(float *)(frame_rec + 60) = step_ratio;
        } else if (res == 34) {
            norm_a = norm_a / divisor;
            norm_b = norm_b / divisor;
            norm_d = norm_d / divisor;
            *(float *)(frame_rec + 44) = norm_a;
            *(float *)(frame_rec + 48) = norm_b;
            *(float *)(frame_rec + 52) = 0.0f;
            *(float *)(frame_rec + 56) = norm_d;
            step_ratio = (float)*(int *)0xC7F887C * hundred / divisor;
            *(float *)(frame_rec + 60) = step_ratio;
        } else if (res == 36) {
            norm_a = norm_a / divisor;
            norm_b = norm_b / divisor;
            norm_c = norm_c / divisor;
            norm_d = norm_d / divisor;
            *(float *)(frame_rec + 44) = norm_a;
            *(float *)(frame_rec + 48) = norm_b;
            *(float *)(frame_rec + 52) = norm_c;
            *(float *)(frame_rec + 56) = norm_d;
            *(float *)(frame_rec + 60) = 0.0f;
        }
    }
    res = FUN_0c0f9d00(frame_rec);
    if (res != 0)
        trapa65();
    **(int **)0xC7F8E9C = 0x800000;
    if (*(int *)0xC7F88F4 == 0) {
        FUN_0c0ddeb0();
        *(int *)0xC7F88F4 = 1;
    }
    return res;
}
