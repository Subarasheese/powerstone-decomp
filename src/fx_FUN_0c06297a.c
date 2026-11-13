/* Steps a command-stream cursor (globals at 0xC439DC8..0xC439DE0): reads a header word, then yields one 32-byte record per call for the header's count. Returns -1 at the end marker, else 0. */
#define CUR    (*(int *)0xC439DC8)
#define SAVE1  (*(int *)0xC439DCC)
#define CUR2   (*(int *)0xC439DD0)
#define SAVE2  (*(int *)0xC439DD4)
#define FLAG   (*(int *)0xC439DD8)
#define COUNT  (*(int *)0xC439DDC)
#define LIMIT  (*(int *)0xC439DE0)

int FUN_0c06297a(void)
{
    CUR = SAVE1;
    CUR2 = SAVE2;
    for (;;) {
        if (FLAG == 0) {
            if (*(int *)CUR == 0) {
                return -1;
            }
            if (*(int *)CUR < 0) {
                CUR = CUR + 80;
                CUR2 = CUR2 + 80;
            }
            CUR = CUR + 4;
            if ((*(int *)(CUR - 4) & 16) != 0) {
                LIMIT = *(int *)CUR;
            } else {
                LIMIT = *(int *)CUR * 3;
            }
            CUR = CUR + 4;
            CUR2 = CUR2 + 8;
            FLAG = 1;
            COUNT = 0;
        }
        if ((*(int *)CUR & 1) != 0) {
            SAVE1 = CUR;
            SAVE2 = CUR2;
            SAVE1 = SAVE1 + 32;
            SAVE2 = SAVE2 + 32;
            COUNT = COUNT + 1;
            if (COUNT >= LIMIT) {
                FLAG = 0;
            }
            return 0;
        }
        CUR = CUR + 8;
        CUR2 = CUR2 + 8;
        SAVE1 = CUR;
        SAVE2 = CUR2;
        COUNT = COUNT + 1;
        if (COUNT >= LIMIT) {
            FLAG = 0;
        }
    }
}
