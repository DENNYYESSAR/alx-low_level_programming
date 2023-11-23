#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			putchar('0');
		}

		mask >>= 1;
	}
}
