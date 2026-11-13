/* debug editor callbacks (same module as previous editor rows) (0c0d2a70-0c0d2a8c) */

struct o64_short { char p[0x64]; short v; };
struct o68_short { char p[0x68]; short v; };
int FUN_0c0240e8(int, int, int);

int FUN_0c0d2a70(int a4)
{
    return FUN_0c0240e8((*(int *)((a4 + 0x1C))), ((((struct o64_short *)(a4))->v)), ((((struct o68_short *)(a4))->v)));
}

void FUN_0c0d2a84(void)
{
    
}
