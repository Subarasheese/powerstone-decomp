/* Takes an object from the free list (FUN_0c058f60), links it into a doubly linked list around e (mode 0: after e's +20 link / head table 0x0C7E4070, mode 1: the +24 side / head table 0x0C7E4098), then fills n slots at +0x2E0 with the result of FUN_0c059538 / FUN_0c0595fa / FUN_0c059698 (by kind c at +0x2DD), counting them at +0x2DC; frees it (FUN_0c059330) and returns 0 if a slot comes back empty. */
extern char *FUN_0c058f60(void);
extern char *FUN_0c059538(void);
extern char *FUN_0c0595fa(void);
extern char *FUN_0c059698(void);
extern void FUN_0c059330(char *);

