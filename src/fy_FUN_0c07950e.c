/* Dispatches through a handler table (0xC3371AC) indexed by the byte at offset 0x7209 of the object, passing the object on. */
void FUN_0c07950e(char *obj)
{
    void (**tbl)(char *) = (void (**)(char *))0xC3371AC;
    tbl[(unsigned char)obj[0x7209]](obj);
}
