#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	return;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar(str[i]);
	i++;
	}

	_putchar('\n');
}
