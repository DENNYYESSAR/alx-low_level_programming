#include "main.h"

/**
 * print_triangle - Prints a triangle of # characters.
 * @size: The size of the triangle.
 *
 * Description: This function prints a right-angled
 * triangle using # characters.
 * The size parameter determines the number of lines in the triangle.
 * If size is 0 or less, only a newline is printed.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
