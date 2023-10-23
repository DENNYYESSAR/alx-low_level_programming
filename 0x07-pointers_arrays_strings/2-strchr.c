#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character 'c' in
 * the string 's', or 0 if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}

	return (0);
}
