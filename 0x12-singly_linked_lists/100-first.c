#include <stdio.h>

void startup_message(void) __attribute__ ((constructor));

/**
 * startup_message - Prints a startup message before the main function.
 */
void startup_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
