/* @unit 0c105c04-0c105d18 -cpu=sh3 */
extern void FUN_0c1070d2();
extern void FUN_0c10710e();
extern void FUN_0c107234();
extern int FUN_0c107482();
extern int FUN_0c10735c();
extern void FUN_0c1073ea();
extern void FUN_0c107872();
extern void FUN_0c10796a();
extern void FUN_0c107e30();
extern void FUN_0c107ef6();
extern void FUN_0c107e60();
extern void FUN_0c107df0();
extern void FUN_0c107fbc();
extern void FUN_0c107f44();
extern void FUN_0c108000();
extern void FUN_0c108010();
extern void FUN_0c108094();
extern void FUN_0c107fce();
extern void FUN_0c1081f2();
extern void FUN_0c10822c();
extern void FUN_0c1081d6();
extern void FUN_0c108372();
void ADXRNA_Init(void){FUN_0c1070d2();}
void ADXRNA_Finish(void){FUN_0c10710e();}
void thunk_ADXRNA_Create(void){FUN_0c107234();}
int ADXRNA_Destroy(void *r){FUN_0c107482(r);return FUN_0c10735c(r);}
void ADXRNA_Start(void){FUN_0c1073ea();}
void ADXRNA_Stop(void *r){FUN_0c107482(r);}
void ADXRNA_SetTransSw(void){FUN_0c107872();}
void ADXRNA_SetPlaySw(void){FUN_0c10796a();}
void ADXRNA_GetTime(void){FUN_0c107e30();}
void ADXRNA_GetNumData(void){FUN_0c107ef6();}
int ADXRNA_GetNumRoom(void){return 0;}
void ADXRNA_GetStat(void){FUN_0c107e60();}
void ADXRNA_ExecServer(void){FUN_0c107df0();}
void ADXRNA_SetStartSmpl(void){FUN_0c107fbc();}
void ADXRNA_SetNumChan(void){FUN_0c107f44();}
void ADXRNA_SetSfreq(void){FUN_0c108000();}
void ADXRNA_SetOutVol(void){FUN_0c108010();}
void ADXRNA_SetOutPan(void){FUN_0c108094();}
void ADXRNA_SetBitPerSmpl(void){FUN_0c107fce();}
void ADXRNA_GetSfreq(void){FUN_0c1081f2();}
void ADXRNA_GetOutVol(void){FUN_0c10822c();}
void ADXRNA_GetOutPan(void){FUN_0c10822c();}
void ADXRNA_GetBitPerSmpl(void){FUN_0c1081d6();}
void ADXRNA_ClearBuf(void){}
void ADXRNA_SetPcmType(void){}
void ADXRNA_SetTotalNumSmpl(void){}
void ADXRNA_SetWavFname(void){}
int ADXRNA_SetStmHdInfo(void *a, void *b){int v;FUN_0c108372(a,b,&v);return v;}
