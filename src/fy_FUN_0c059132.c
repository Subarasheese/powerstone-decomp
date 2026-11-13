/* Allocates an object of list a (FUN_0c058f60), links it into list a of the double-linked lists at 0xC7E4070 (b == 0: push on the front) or 0xC7E4098 (b == 1: push on the front of the other pair), sets its type byte +733 to d and fills c word slots from +736 from the pools (FUN_0c059538 / FUN_0c0595fa / FUN_0c059698, picked by +733); a pool that runs dry frees the object (FUN_0c059330) and returns 0. Returns the object. */
extern int FUN_0c058f60(void);
extern int FUN_0c059538(void);
extern int FUN_0c0595fa(void);
extern int FUN_0c059698(void);
extern void FUN_0c059330(char *o);
