/* INLINE-ASM: renderer hand-written assembly on registers r2, r3, r5, r6 and fr4..fr7 held by the caller, uses fschg and pref */
/* Appends one vertex to the store-queue buffer at r6 and sends it with pref; the last vertex of a strip also writes -1 in the header word. */
#pragma inline_asm(nl_objasm_send_vtx_ofst)
void nl_objasm_send_vtx_ofst(void)
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
