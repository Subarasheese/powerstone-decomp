/* @unit 0c115240-0c115270 -cpu=sh3 */
typedef struct { char *data; int len; } SJCK;
void SJ_SplitChunk(SJCK *ck, int nbyte, SJCK *ck1, SJCK *ck2)
{
    *ck1 = *ck;
    ck2->len = ck1->len;
    if (ck1->len > nbyte) {
        ck1->len = nbyte;
    }
    ck2->data = ck1->data + ck1->len;
    ck2->len -= ck1->len;
}
/* uses compiler helper _quick_evn_mvn (struct copy) */
