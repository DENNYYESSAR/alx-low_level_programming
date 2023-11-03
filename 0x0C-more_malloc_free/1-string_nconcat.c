#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 *         or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;
	concat_str = malloc(sizeof(char) * (concat_len + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat_str[i] = s2[j];

	concat_str[i] = '\0';

	return (concat_str);
}
