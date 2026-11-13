/* INLINE-ASM: renderer hand-written assembly on r11 and r2 held by the caller, uses fschg */
/* Reads a 64-bit pair from the 4-slot ring at 0xC7FD2A0 (slot r11&3, minus 8 bytes) and stores it into the slots of r11-1 and r11-2 (mod 4). */
#pragma inline_asm(nl_objasm_shift_vtx)
void nl_objasm_shift_vtx(void)
{
    MOV #5,R1
    MOV.L L1,R10
    MOV R11,R0
    AND #3,R0
    MOV R10,R2
    SHLD R1,R0
    FSCHG
    ADD R0,R10
    ADD #-8,R10
    MOV R11,R0
    FMOV.S @R10,FR2
    ADD #-1,R0
    MOV R2,R10
    AND #3,R0
    SHLD R1,R0
    ADD R0,R2
    MOV R11,R0
    FMOV.S FR2,@-R2
    ADD #-2,R0
    AND #3,R0
    SHLD R1,R0
    ADD R0,R10
    FMOV.S FR2,@-R10
    RTS
    FSCHG
    .ALIGN 4
L1: .DATA.L H'0C7FD2A0
}
