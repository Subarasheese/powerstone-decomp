/* Sets the background plane: stores three colours in a global and builds three 32-byte vertices (the first two corners with colours a and b, the third with colour c; x/y from the screen size shorts at 0x0C7FD498+4/+6, doubled when the short at +10 is set; z = 1/f), then calls kmSetBackGroundPlane on the three vertices. */
typedef struct { unsigned flags; float x, y, z; int c1, p1, c2, p2; } V;
extern void kmSetBackGroundPlane(V **, int, int);

