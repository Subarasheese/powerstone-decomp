/* Writes n bytes of s to an output stream record w {mode, buf, count, putc}: mode 1 copies them into the buffer at once, any other mode hands them one by one to the putc function (stopping at -1) while counting. */
typedef struct W {
    int mode;
    char *buf;
    int count;
    int (*putc)(int c, char *buf);
} W;
extern void *memcpy(void *d, const void *s, int n);
void FUN_0c0ec09a(char *s, int n, W *w)
{
    int i;
    if (w->mode == 1) {
        memcpy(w->buf, s, n);
        w->buf += n;
        w->count += n;
        return;
    }
    if (n > 0) {
        i = 0;
        do {
            if (w->putc(*s++, w->buf) == -1)
                break;
            i++;
            w->count++;
        } while (i < n);
    }
}
