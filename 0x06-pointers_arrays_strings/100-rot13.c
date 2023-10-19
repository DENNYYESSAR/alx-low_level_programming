#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			str[i] = output[input[str[i] - 'A' + ('a' - 'Z') * (str[i] < 'a')]];
		}
	}

	return (str);
}
