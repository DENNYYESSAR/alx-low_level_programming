#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Description: This function locates the first occurrence of the character 'c'
 * in the string 's' and returns a pointer to it. If the character is
 * not found, it returns 0.
 *
 * Return: A pointer to the first occurrence of the character 'c' in the
 * string 's', or 0 if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
