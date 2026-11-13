/* INLINE-ASM: runs on registers r11, r2 and fr2/fr4/fr6 held by the caller (renderer hand-written assembly), uses fschg */
/* Stores four floats into a 32-byte slot of the vertex ring at 0xC7FD3A0 chosen by r11 & 3 (fr4, fr6, fr0 loaded from @r2, fr2). */
#pragma inline_asm(nl_objasm_save_vtx_ofst)
void nl_objasm_save_vtx_ofst(void)
{
    MOV #5,R10
    MOV R11,R0
    AND #3,R0
    FSCHG
    SHLD R10,R0
    MOV.L L1,R10
    FMOV.S @R2,FR0
    ADD R0,R10
    FMOV.S FR2,@-R10
    FMOV.S FR0,@-R10
    FMOV.S FR6,@-R10
    FMOV.S FR4,@-R10
    RTS
    FSCHG
L1: .DATA.L H'0C7FD3A0
}
