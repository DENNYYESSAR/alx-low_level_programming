#include <stdlib.h>

/**
 * strtow - Split a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count = 0, i = 0, j = 0, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		k = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;

		words[i] = (char *)malloc(sizeof(char) * (j - k + 1));

		if (words[i] == NULL)
		{
			for (i = 0; i < word_count; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0; str[k] != ' ' && str[k] != '\0'; j++, k++)
			words[i][j] = str[k];
		words[i][j] = '\0';
	}

	words[word_count] = NULL;

	return (words);
}
