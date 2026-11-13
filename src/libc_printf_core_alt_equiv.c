/* vsprintf formatting core and helpers (0c0eb758-0c0ec11c) */

struct fmt_spec {
    signed char flags;      /* bit 2 '#', bit 3 '+', bit 4 ' ' */
    signed char pad_char;        /* '0' or ' ' */
    short field_2;
    int width;
    int prec;
    int field_12;
    int field_16;
    char *start;            /* 20: where the digits (after sign / prefix) begin */
    int field_24;
    int field_28;
    int zeros;              /* 32 */
    int field_36;
    int spaces;             /* 40 */
};
typedef struct OutStream {
    int mode;
    char *buf;
    int count;
    int (*putc)(int ch, char *buf);
} OutStream;
extern void *memcpy(void *d, const void *src, int len);

void printf_int_to_text(int val, char *dst, int conv, struct fmt_spec *fmt)
{
    char digits[16];
    char *dst_start = dst;
    int ndigits, length, first_char, total;
    unsigned int uval, base;

    *dst = 0;
    if (conv == 'X' || conv == 'x')
        base = 16;
    else if (conv == 'o')
        base = 8;
    else if (conv == 'd' || conv == 'i' || conv == 'u')
        base = 10;
    if ((conv == 'd' || conv == 'i') && val < 0)
        uval = -val;
    else
        uval = val;
    ndigits = 0;
    length = 0;
    if (uval == 0) {
        if (fmt->prec != 0) {
            digits[0] = '0';
            ndigits = 1;
        }
    } else {
        do {
            digits[ndigits] = uval % base;
            if (digits[ndigits] > 9) {
                if (conv == 'x')
                    digits[ndigits] += 87;
                else
                    digits[ndigits] += 55;
            } else {
                digits[ndigits] += 48;
            }
            uval = uval / base;
            ndigits++;
        } while (uval != 0);
    }
    if (fmt->flags & 4) {
        if (conv == 'X' || conv == 'x') {
            if (val != 0) {
                *dst++ = '0';
                *dst++ = conv;
                length = 2;
            }
        } else if (conv == 'o') {
            if (val != 0)
                digits[ndigits++] = '0';
        }
    }
    length += ndigits;
    if (conv == 'd' || conv == 'i') {
        if (fmt->prec != 0 || val != 0) {
            if (val >= 0) {
                if (fmt->flags & 8) {
                    *dst++ = '+';
                    length++;
                } else if (fmt->flags & 16) {
                    *dst++ = ' ';
                    length++;
                }
            } else {
                *dst++ = '-';
                length++;
            }
        }
    }
    first_char = *dst_start;
    if (first_char == '+' || first_char == '-' || first_char == ' ') {
        fmt->start = dst_start + 1;
    } else if (!(fmt->flags & 4)) {
        fmt->start = dst_start;
    } else if (conv == 'X' || conv == 'x') {
        fmt->start = dst_start + 2;
    } else if (conv == 'o') {
        fmt->start = dst_start + 1;
    }
    if (fmt->prec > length) {
        fmt->zeros = fmt->prec - length;
        total = fmt->prec;
    } else {
        fmt->zeros = 0;
        total = length;
    }
    first_char = *dst_start;
    if (first_char == '+' || first_char == '-' || first_char == ' ') {
        if (fmt->width > total && fmt->pad_char == '0') {
            fmt->zeros += fmt->width - total;
            fmt->spaces = 0;
        } else if (fmt->width > total) {
            fmt->spaces = fmt->width - total;
        } else {
            fmt->spaces = 0;
        }
    } else {
        if (fmt->width > total)
            fmt->spaces = fmt->width - total;
        else
            fmt->spaces = 0;
    }
    for (ndigits--; ndigits >= 0; ndigits--)
        *dst++ = digits[ndigits];
    *dst = 0;
}

void printf_write_bytes(char *src, int len, OutStream *out)
{
    int written;
    if (out->mode == 1) {
        memcpy(out->buf, src, len);
        out->buf += len;
        out->count += len;
        return;
    }
    if (len > 0) {
        written = 0;
        do {
            if (out->putc(*src++, out->buf) == -1)
                break;
            written++;
            out->count++;
        } while (written < len);
    }
}
