#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: Calculates and prints the minimum number of coins for change.
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins25, coins10, coins5, coins2, coins1;
	int totalCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins25 = cents / 25;
	cents %= 25;
	coins10 = cents / 10;
	cents %= 10;
	coins5 = cents / 5;
	cents %= 5;
	coins2 = cents / 2;
	coins1 = cents % 2;

	totalCoins = coins25 + coins10 + coins5 + coins2 + coins1;

	printf("%d\n", totalCoins);

	return (0);
}
