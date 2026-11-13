/* Fatal-error screen setup: sets the border colour for the error kind (1 blue, 2 red, 3 green, 4 magenta), hangs for kind 1, otherwise raises trap 48. */
int kmSetBorderColor(int, ...);
