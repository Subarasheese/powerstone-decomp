/* game mode function (unidentified) (0c0d57a4-0c0d5bc0) */

int FUN_0c0d57a4(int a4, int a5, int a6, int a7);
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0a2ee8(void);
int FUN_0c0a375c(void);
int memset(int, int, int);
extern char g_pad_state[];
extern void dbg_set_cursor_cell(int, int);
extern void dbg_printf(char *, ...);


void dbg_print_entry_flag_bits(char entry)
{
    unsigned short *flags;
    int row;
    int row0, row1, row2, row3;

    row = entry * 20;
    row0 = row + 10;
    dbg_set_cursor_cell(row0, 30);
    flags = (unsigned short *)(g_pad_state + (signed char)(entry * 20) + 8);
    dbg_printf((char *)0xC154F90, (*flags & 4) ? 1 : 0);
    row1 = row + 11;
    dbg_set_cursor_cell(row1, 30);
    dbg_printf((char *)0xC154F90, (*flags & 2) ? 1 : 0);
    row2 = row + 12;
    dbg_set_cursor_cell(row2, 30);
    dbg_printf((char *)0xC154F90, (*flags & 1) ? 1 : 0);
    row3 = row + 13;
    dbg_set_cursor_cell(row3, 30);
    dbg_printf((char *)0xC154F90, 0);
    dbg_set_cursor_cell(row0, 31);
    dbg_printf((char *)0xC154F90, (*flags & 0x400) ? 1 : 0);
    dbg_set_cursor_cell(row1, 31);
    dbg_printf((char *)0xC154F90, (*flags & 0x200) ? 1 : 0);
    dbg_set_cursor_cell(row2, 31);
    dbg_printf((char *)0xC154F90, (*flags & 0x10000) ? 1 : 0);
    dbg_set_cursor_cell(row3, 31);
    dbg_printf((char *)0xC154F90, (*flags & 0x20000) ? 1 : 0);
}
