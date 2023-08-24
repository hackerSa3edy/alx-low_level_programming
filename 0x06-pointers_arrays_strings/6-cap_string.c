#include "main.h"

/**
 * checkSeparator - check allowed separators.
 *
 * @separator: char to be checked.
 *
 * Return: (1) if allowed separator, (0) otherwise.
 */
int checkSeparator(char separator)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};
	int size = sizeof(separators) / sizeof(*separators);
	int index;

	for (index = 0; index < size; index++)
	{
		if (separator == separators[index])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * toUpper - Capitalize character.
 *
 * @c: character.
 *
 * Return: Uppercase character.
 */
char toUpper(char c)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int size = sizeof(upper) / sizeof(*upper);
	int index;

	for (index = 0; index < size; index++)
	{
		if(c == lower[index])
		{
			break;
		}
	}
	return (upper[index]);
}	
/**
 * cap_string - Capitalize string.
 *
 * @str: string to be capitalized.
 *
 * Return: pointer to str.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 97) && (str[index] <= 122))
		{
			if (checkSeparator(str[index - 1]))
			{
				str[index] = toUpper(str[index]);
			}
		}
		index++;
	}
	return (str);
}
