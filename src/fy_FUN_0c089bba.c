/* Dispatcher: tail-calls the handler picked by byte 0x7209 of the object from a table at 0xC33808C, passing the object on. */
struct O7209 { char pad[0x7209]; signed char sel; };
void FUN_0c089bba(struct O7209 *obj)
{
    void (**tbl)(struct O7209 *) = (void (**)(struct O7209 *))0xC33808C;
    tbl[obj->sel](obj);
}
