#include <stdio.h>
#include "ansi.h"

#define ANSI_DEMO
#ifdef ANSI_DEMO

int main(void) {

	printf("Welcome to Ansi colours demo.\n\n");

	printf("Normal colours:\n");
	printf("%s\tRed foreground %s\n", ANSI_FG_RED, ANSI_RESET);
	printf("%s\tGreen foreground %s\n", ANSI_FG_GREEN, ANSI_RESET);
	printf("%s\tBlue foreground %s\n", ANSI_FG_BLUE, ANSI_RESET);
	printf("%s\tCyan foreground %s\n", ANSI_FG_CYAN, ANSI_RESET);
	printf("%s\tOrange foreground %s\n\n", ANSI_FG_ORANGE, ANSI_RESET);

	printf("Bright Colours:\n");
	printf("%s\tBright Red foreground %s\n", ANSI_FG_BRIGHT_RED, ANSI_RESET);
	printf("%s\tBright Green foreground %s\n", ANSI_FG_BRIGHT_GREEN, ANSI_RESET);
	printf("%s\tBright Blue foreground %s\n", ANSI_FG_BRIGHT_BLUE, ANSI_RESET);
	printf("%s\tBright Cyan foreground %s\n", ANSI_FG_BRIGHT_CYAN, ANSI_RESET);
	printf("%s\tBright Yellow foreground %s", ANSI_FG_BRIGHT_YELLOW, ANSI_RESET);

	return 0;
}
#endif // ANSI_DEMO


