/* Draft: proven in a copy without the runtime-helper renames, but the call arguments differ from the original once
   _divls/_modls/_quick_*mvn/_slow_mvn run for real. Cases: partial/cases/fx_FUN_0c0a8db2.json (synthetic). */
/* Menu-cursor sprite set (eight objects at +736.. plus two at +768/+772): state 0 spawns/initialises them from a table, state 1 slides them out by 30.0 per frame (selected by a mode byte at 0xC7F302C+69), state 2 waits for the screen to be ready and pulses the last one, state 3 slides everything out again; other states hand over to obj_destroy. */
/* named globals (symbols.txt) */
extern char g_res_csel_ssel[];
typedef struct { int a, b, c; } S12;
extern void FUN_0c0623a6(void *, int, int);
extern int obj_destroy(void *);

#define ST (*(signed char *)(e + 8))
#define SUB (*(signed char *)(e + 9))
#define S236 (*(short *)(e + 236))
#define S238 (*(short *)(e + 238))
#define OB(i) (*(char **)(e + 736 + 4 * (i)))
#define OF(i, o) (*(float *)(OB(i) + (o)))
#define G69 (*(signed char *)(0xC7F302C + 69))
#define SROW ((char *)0xC7F2DF0 + (unsigned char)((unsigned short)(G69 + 255) * 120))

void menu_ui_task_23(char *e)
{
    S12 l2;
    float k30 = 30.0f;
    float k650;
    int i, k, v;
    char *s;

    l2 = *(S12 *)0xC152C08;
    if (*(int *)(e + 28) == 0) {
        obj_destroy(e);
        return;
    }
    switch (ST) {
    case 0:
        ST = ST + 1;
        SUB = 0;
        e[1] = 1;
        *(short *)(e + 6) = 15;
        e[5] = 25;
        k650 = 650.0f;
        for (i = 0; i < 8; i++) {
            FUN_0c0623a6(OB(i), ((int)g_res_csel_ssel), 0);
            *(short *)(OB(i) + 2) = 15;
            *(S12 *)(OB(i) + 28) = l2;
            s = (char *)0xC152970 + (unsigned char)(i * 12);
            OF(i, 4) = *(float *)s;
            OF(i, 8) = *(float *)(s + 4) + k650;
            OF(i, 12) = *(float *)(s + 8);
        }
        FUN_0c0623a6(OB(8), ((int)g_res_csel_ssel), 8);
        *(short *)(OB(8) + 2) = 47;
        *(S12 *)(OB(8) + 28) = l2;
        OF(8, 8) = OF(8, 8) + k650;
        FUN_0c0623a6(OB(9), ((int)g_res_csel_ssel), 9);
        *(short *)(OB(9) + 2) = 15;
        *(S12 *)(OB(9) + 28) = l2;
        OF(9, 4) = -485.0f;
        OF(9, 8) = 205.0f;
        OF(9, 12) = -300.0f;
        switch ((unsigned char)G69) {
        case 0:
        case 3:
            for (i = 0; i < 8; i++) {
                *OB(i) = 1;
            }
            switch (*(signed char *)0xC7F4751) {
            case 1:
                *OB(8) = 1;
                break;
            case 2:
            case 3:
                *OB(8) = 1;
                *OB(9) = 1;
                break;
            }
            break;
        case 1:
        case 2:
            s = SROW;
            if ((signed char)s[86] >= 7) {
                *OB(9) = 0;
            }
            s = SROW;
            k = (signed char)s[86];
            if (k < 7) {
                do {
                    s = SROW;
                    v = (signed char)s[85];
                    *OB((signed char)*((char *)0xC1525BF + (signed char)(v * 9) + k)) = 1;
                    k++;
                } while (k < 7);
            }
            break;
        }
        break;
    case 1:
        if (SUB == 0) {
            SUB = SUB + 1;
            S236 = 20;
        }
        if (SUB == 0 || SUB == 1) {
            S236 = S236 - 1;
            if (S236 <= 0) {
                ST = ST + 1;
                SUB = 0;
            }
            switch ((unsigned char)G69) {
            case 0:
            case 3:
                for (i = 0; i < 8; i++) {
                    OF(i, 8) = OF(i, 8) - k30;
                }
                switch (*(signed char *)0xC7F4751) {
                case 1:
                case 2:
                case 3:
                    OF(8, 8) = OF(8, 8) - k30;
                    break;
                }
                break;
            case 1:
            case 2:
                for (i = 0; i < 9; i++) {
                    s = SROW;
                    if (!((1 << i) & *(short *)(s + 88))) {
                        OF(i, 8) = OF(i, 8) - k30;
                    }
                }
                break;
            }
        } else {
            ST = ST + 1;
            SUB = 0;
            S236 = 0;
            S238 = 0;
        }
        *(int *)(e + 48) = *(int *)(*(char **)(*(char **)(e + 28) + 736) + 20) & 0xFFFF;
        break;
    case 2:
        s = (char *)0xC7F2EE4;
        if ((unsigned char)s[2] >= 3 && (unsigned char)s[3] >= 3) {
            ST = ST + 1;
            SUB = 0;
        }
        for (i = 0; i < 8; i++) {
            *(int *)(OB(i) + 20) = *(int *)(OB(i) + 20) + 256;
            *(int *)(OB(i) + 20) = *(int *)(OB(i) + 20) & 0xFFFF;
        }
        *(int *)(e + 48) = *(int *)(*(char **)(*(char **)(e + 28) + 736) + 20) & 0xFFFF;
        s = (char *)0xC7F2EE4;
        if ((unsigned char)s[2] >= 3 && (unsigned char)s[3] == 2 && (unsigned char)s[4] >= 1) {
            S238 = S238 + 1;
            s = SROW;
            if ((signed char)s[86] >= 7) {
                if (S238 >= 30) {
                    *OB(9) = 1;
                } else {
                    *OB(9) = *OB(9) ^ 1;
                }
            }
        }
        break;
    case 3:
        if (SUB == 0) {
            S236 = 20;
            S238 = S238 + 1;
        }
        S236 = S236 - 1;
        if (S236 <= 0) {
            ST = ST + 1;
        }
        switch ((unsigned char)G69) {
        case 0:
        case 3:
            for (i = 0; i < 10; i++) {
                OF(i, 8) = OF(i, 8) - k30;
            }
            break;
        case 1:
        case 2:
            for (i = 0; i < 9; i++) {
                s = SROW;
                if (!((1 << i) & *(short *)(s + 88))) {
                    OF(i, 8) = OF(i, 8) - k30;
                }
            }
            break;
        }
        break;
    default:
        obj_destroy(e);
        break;
    }
}
