#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}

	return count;
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of words.
 */
char **strtow(char *str)
{
	int i, j, k, words = 0, len = 0;
	char **matrix;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i + len] && str[i + len] != ' ')
				len++;

			matrix[k] = malloc(sizeof(char) * (len + 1));

			if (matrix[k] == NULL)
			{
				while (k >= 0)
					free(matrix[k--]);
				free(matrix);
				return (NULL);
			}

			for (j = 0; j < len; j++)
				matrix[k][j] = str[i++];
			matrix[k++][j] = '\0';
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
