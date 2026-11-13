
char *FUN_0c059132(int a, int b, int c, int d)
{
    char *o;
    int *slot;
    int *head;
    int i;
    int *t5 = (int *)0xC7E4098;
    int *t6 = (int *)0xC7E4070;

    o = (char *)FUN_0c058f60();
    if (o == 0)
        return 0;
    o[2] = a;
    if (b == 0) {
        slot = (int *)((char *)t6 + a * 4);
        head = (int *)*slot;
        *(int *)(o + 24) = (int)head;
        *slot = (int)o;
        *(int *)(o + 20) = 0;
        if (head != 0)
            head[5] = (int)o;
        else
            *(int *)((char *)t5 + a * 4) = (int)o;
    } else if (b == 1) {
        slot = (int *)((char *)t5 + a * 4);
        head = (int *)*slot;
        *(int *)(o + 20) = (int)head;
        *slot = (int)o;
        *(int *)(o + 24) = 0;
        if (head != 0)
            head[6] = (int)o;
        else
            *(int *)((char *)t6 + a * 4) = (int)o;
    }
    o[733] = d;
    if (c > 0) {
        i = 0;
        do {
            switch (o[733]) {
            case 0:
                *(int *)(o + 736 + i * 4) = FUN_0c059538();
                break;
            case 1:
                *(int *)(o + 736 + i * 4) = FUN_0c0595fa();
                break;
            case 2:
                *(int *)(o + 736 + i * 4) = FUN_0c059698();
                break;
            }
            if (*(int *)(o + 736 + i * 4) == 0) {
                FUN_0c059330(o);
                return 0;
            }
            i++;
            o[732] = o[732] + 1;
        } while (i < c);
    }
    return o;
}
