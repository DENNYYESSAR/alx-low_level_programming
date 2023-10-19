#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char leet_map[256] = {0};
	int i;

	for (i = 0; "aAeEoOtTlL"[i]; i++)
	{
		leet_map[(int)"aAeEoOtTlL"[i]] = "44337711"[i];
	}

	for (i = 0; str[i]; i++)
	{
		if (leet_map[(int)str[i]] != 0)
		{
			str[i] = leet_map[(int)str[i]];
		}
	}

	return (str);
}
