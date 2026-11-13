
char *FUN_0c05923a(int a, char *e, int mode, int n, int c)
{
    char *obj;
    char *p;
    char **q;
    int i;

    obj = FUN_0c058f60();
    if (obj == 0)
        return 0;
    obj[2] = a;
    if (mode == 0) {
        p = *(char **)(e + 20);
        if (p == 0)
            ((char **)0x0C7E4070)[a] = obj;
        else
            *(char **)(p + 24) = obj;
        *(char **)(obj + 20) = p;
        *(char **)(obj + 24) = e;
        *(char **)(e + 20) = obj;
    } else if (mode == 1) {
        p = *(char **)(e + 24);
        if (p == 0)
            ((char **)0x0C7E4098)[a] = obj;
        else
            *(char **)(p + 20) = obj;
        *(char **)(obj + 24) = p;
        *(char **)(obj + 20) = e;
        *(char **)(e + 24) = obj;
    }
    q = (char **)(obj + 0x2E0);
    obj[0x2DD] = c;
    if (n > 0) {
        i = 0;
        do {
            switch (obj[0x2DD]) {
            case 0:
                q[i] = FUN_0c059538();
                break;
            case 1:
                q[i] = FUN_0c0595fa();
                break;
            case 2:
                q[i] = FUN_0c059698();
                break;
            }
            if (q[i] == 0) {
                FUN_0c059330(obj);
                return 0;
            }
            obj[0x2DC] = obj[0x2DC] + 1;
            i++;
        } while (i < n);
    }
    return obj;
}
