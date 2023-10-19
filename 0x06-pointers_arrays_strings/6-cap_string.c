#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}

	return (str);
}
