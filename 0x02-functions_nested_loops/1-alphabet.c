#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet.
 *
 * Description:
 * This function prints all the lowercase letters from 'a' to 'z' followed by a newline character.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
