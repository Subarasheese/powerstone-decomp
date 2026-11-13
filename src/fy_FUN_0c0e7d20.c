/* INLINE-ASM: renderer hand-written assembly on r0, r5, r6 and fr3 held by the caller, uses fschg and pref */
/* Loads a 16-byte entry from the 4-slot table at 0xC7FD280 (slot r0&3), scales two of its floats by fr3 and writes the entry to the buffer at r6, then sends it with pref; the header word is -1, or r6 when T is clear. */
#pragma inline_asm(FUN_0c0e7d20)
void FUN_0c0e7d20(void)
{
    AND #3,R0
    MOV #5,R2
    MOV.L L1,R10
    SHLD R2,R0
    FSCHG
    ADD R0,R10
    FMOV.S @R10+,FR0
    FMOV.S @R10+,FR2
    ADD #32,R6
    FMOV.S @R10+,FR4
    FMUL FR3,FR2
    FMOV.S @R10+,FR6
    FMUL FR3,FR1
    FMOV.S FR6,@-R6
    MOV #-1,R2
    FMOV.S FR4,@-R6
    ADD #32,R5
    FMOV.S FR2,@-R6
    BT/S L2
    FMOV.S FR0,@-R6
    MOV R6,R2
L2:
    MOV.L R2,@R6
    FSCHG
    PREF @R6
    RTS
    ADD #32,R6
    .ALIGN 4
L1: .DATA.L H'0C7FD280
}
