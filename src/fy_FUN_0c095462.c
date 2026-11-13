/* Dispatcher: tail-calls the handler picked by byte 4 of the object from a table at 0xC339204, passing the object on. */
void FUN_0c095462(char *obj)
{
    void (**tbl)(char *) = (void (**)(char *))0xC339204;
    tbl[obj[4]](obj);
}
