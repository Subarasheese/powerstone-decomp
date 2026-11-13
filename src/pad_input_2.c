/* @unit 0c012870-0c0128a0 -extra=a=400 */
extern char g_pad_state_type_tab[];
int pad_get_type(int i)
{
    switch (*(int*)(g_pad_state_type_tab + (char)(i * 20))) {
    case 1: return 1;
    case 2: return 2;
    }
    return 0;
}
