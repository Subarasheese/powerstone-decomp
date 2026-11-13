/* Integer to text for the printf family: converts val for the conversion character conv (d i u o x X) into out and fills in the format record (digit start, zero and space padding counts). */
struct Fmt {
    signed char flags;      /* bit 2 '#', bit 3 '+', bit 4 ' ' */
    signed char pad;        /* '0' or ' ' */
    short p2;
    int width;
    int prec;
    int p12;
    int p16;
    char *start;            /* 20: where the digits (after sign / prefix) begin */
    int p24;
    int p28;
    int zeros;              /* 32 */
    int p36;
    int spaces;             /* 40 */
};

void FUN_0c0ebe90(int val, char *out, int conv, struct Fmt *f)
{
    char buf[16];
    char *p0 = out;
    int n, len, c, w;
    unsigned int u, base;

    *out = 0;
    if (conv == 'X' || conv == 'x')
        base = 16;
    else if (conv == 'o')
        base = 8;
    else if (conv == 'd' || conv == 'i' || conv == 'u')
        base = 10;
    if ((conv == 'd' || conv == 'i') && val < 0)
        u = -val;
    else
        u = val;
    n = 0;
    len = 0;
    if (u == 0) {
        if (f->prec != 0) {
            buf[0] = '0';
            n = 1;
        }
    } else {
        do {
            buf[n] = u % base;
            if (buf[n] > 9) {
                if (conv == 'x')
                    buf[n] += 87;
                else
                    buf[n] += 55;
            } else {
                buf[n] += 48;
            }
            u = u / base;
            n++;
        } while (u != 0);
    }
    if (f->flags & 4) {
        if (conv == 'X' || conv == 'x') {
            if (val != 0) {
                *out++ = '0';
                *out++ = conv;
                len = 2;
            }
        } else if (conv == 'o') {
            if (val != 0)
                buf[n++] = '0';
        }
    }
    len += n;
    if (conv == 'd' || conv == 'i') {
        if (f->prec != 0 || val != 0) {
            if (val >= 0) {
                if (f->flags & 8) {
                    *out++ = '+';
                    len++;
                } else if (f->flags & 16) {
                    *out++ = ' ';
                    len++;
                }
            } else {
                *out++ = '-';
                len++;
            }
        }
    }
    c = *p0;
    if (c == '+' || c == '-' || c == ' ') {
        f->start = p0 + 1;
    } else if (!(f->flags & 4)) {
        f->start = p0;
    } else if (conv == 'X' || conv == 'x') {
        f->start = p0 + 2;
    } else if (conv == 'o') {
        f->start = p0 + 1;
    }
    if (f->prec > len) {
        f->zeros = f->prec - len;
        w = f->prec;
    } else {
        f->zeros = 0;
        w = len;
    }
    c = *p0;
    if (c == '+' || c == '-' || c == ' ') {
        if (f->width > w && f->pad == '0') {
            f->zeros += f->width - w;
            f->spaces = 0;
        } else if (f->width > w) {
            f->spaces = f->width - w;
        } else {
            f->spaces = 0;
        }
    } else {
        if (f->width > w)
            f->spaces = f->width - w;
        else
            f->spaces = 0;
    }
    for (n--; n >= 0; n--)
        *out++ = buf[n];
    *out = 0;
}
