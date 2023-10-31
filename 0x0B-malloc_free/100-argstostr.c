#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, len = 0;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_length += len + 1;
	}

	concatenated = (char *)malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0, total_length = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			concatenated[total_length] = av[i][len];
			total_length++;
			len++;
		}
		concatenated[total_length] = '\n';
		total_length++;
	}

	concatenated[total_length] = '\0';

	return (concatenated);
}
