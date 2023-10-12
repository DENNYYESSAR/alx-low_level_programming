#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
	largest = 2;
	n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
	while (n % i == 0)
	{
		largest = i;
		n = n / i;
	}
	}

	if (n > 2)
	largest = n;

	printf("%ld\n", largest);
	return (0);
}
