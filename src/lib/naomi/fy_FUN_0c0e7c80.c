/* INLINE-ASM: hand-written register-convention routine (r2 pointer, r3 counter, r5/r6 pointers, fr2-fr7 in; fschg pair stores, pref, branch with delay slot) that C cannot express */
/* Strip tail: stores the last vertex words, writes the end marker and returns the advanced output pointer. */
#pragma inline_asm(nl_objasm_send_vtx)
void nl_objasm_send_vtx(void)
{
    FSCHG
    ADD #32,R6
    FMOV.S @R2,FR0
    FMUL FR7,FR6
    FMOV.S FR2,@-R6
    FMUL FR7,FR5
    FMOV.S FR0,@-R6
    MOV #-1,R2
    FMOV.S FR6,@-R6
    DT R3
    FMOV.S FR4,@-R6
    BT/S L1
    FSCHG
    MOV.L R6,@R6
    ADD #32,R5
    PREF @R6
    RTS
    ADD #32,R6
L1:
    MOV.L R2,@R6
    ADD #32,R5
    PREF @R6
    RTS
    ADD #32,R6
}
