/* @unit 0c067870-0c067944 */
/* runtime: _quick_odd_mvn */
typedef struct { int a, b, c; } S12;
extern S12 g14ee48;
extern void FUN_0c0e6fe8(void);
extern void FUN_0c069536(char *);
extern char FUN_0c09c3f8(char *, int);
extern void FUN_0c09a808(char *, int, int);

typedef struct { char pad0[10]; char b10; char pad1[0x71ba-11]; char a71ba; char pad2[0x7223-0x71bb]; volatile char a7223; } O;
int FUN_0c067870(O *p)
{
    S12 loc;
    loc = g14ee48;
    FUN_0c069536((char *)p);
    if (p->a71ba == 11) {
        if (p->a7223 == 2 || p->a7223 == 4) {
            if (p->b10 >= 1) {
                if (FUN_0c09c3f8((char *)p, 512)) {
                    (*(short *)((char *)p + 236))++;
                }
            }
        }
    }
    return 0;
}
void FUN_0c0678c8(char *p){ FUN_0c09a808(p,1,16); }
void FUN_0c0678d0(char *p){ FUN_0c09a808(p,1,17); }
void FUN_0c0678d8(char *p){ FUN_0c09a808(p,1,18); }
void FUN_0c0678e0(char *p){ FUN_0c09a808(p,1,19); }
void FUN_0c0678e8(char *p){ FUN_0c09a808(p,1,24); }
void FUN_0c0678f0(char *p){ FUN_0c09a808(p,1,25); }
void FUN_0c0678f8(char *p){ FUN_0c09a808(p,1,27); }
void FUN_0c067900(char *p){ FUN_0c09a808(p,1,26); }
void FUN_0c067908(char *p){ FUN_0c09a808(p,1,23); }
void FUN_0c067910(char *p){ FUN_0c09a808(p,1,21); }
void FUN_0c067918(char *p){ FUN_0c09a808(p,1,20); }
void FUN_0c067920(char *p){ FUN_0c09a808(p,1,30); }
