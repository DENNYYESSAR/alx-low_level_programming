#include <stdio.h>


	/**
	 * main - entry point
	 *
	 * Description: Lists all the natural numbers below 1024 (excluded)
	 *        that are multiples of 3 or 5.
	 *
	 * @i: the number to start printing
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
		int i, sum = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}


		printf("%d\n", sum);


		return (0);
	}