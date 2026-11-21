/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int ADXF_ExecServer(void);
int ADXF_GetNumReadSct(int);
int ADXF_GetStat(int);
int ADXF_ReadNw(int, int, int, int);
int ADXSTM_ExecServer(void);
int FUN_0c0f1fe8(int);
int FUN_0c0f4fe0(void);
int adxf_LoadData(int a4, int a5, int a6, int a7);

int adxf_LoadData(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = ADXF_ReadNw(a4, a5, a6, a7);
        if ((int)t2 <= 0) {
            FUN_0c0f1fe8(t2);
            ADXSTM_ExecServer();
            ADXF_ExecServer();
            FUN_0c0f4fe0();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        t1 = t2; break;
    }
    if (t0 == 0x2710) {
        return 0x0;
    }
    t0 = 0x0;
    for (;;) {
        FUN_0c0f1fe8(t1);
        ADXSTM_ExecServer();
        ADXF_ExecServer();
        t2 = ADXF_GetStat(a4);
        if (t2 != 3) {
            FUN_0c0f4fe0();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    return ADXF_GetNumReadSct(a4);
}
