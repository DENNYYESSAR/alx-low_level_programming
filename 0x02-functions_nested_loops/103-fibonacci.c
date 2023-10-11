#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms.
 *
 * Description: This program calculates the sum of even Fibonacci numbers that
 * do not exceed 4,000,000 and then prints the result, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
