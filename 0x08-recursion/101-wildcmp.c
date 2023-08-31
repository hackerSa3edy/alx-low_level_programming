#include "main.h"

/**
 * wildcmp - checks if the two strings are identical.
 *
 * @string1: string to compare.
 * @string2: string to cmpare with.
 *
 * Return: (1) if string is identical, (0) otherwise.
 */
int wildcmp(char *string1, char *string2)
{
	if (*string1 == '\0' && *string2 == '\0')
		return (1);

	if (*string1 == '\0' && *string2 != '\0')
	{
		if (*string2 == '*')
			return (wildcmp(string1, string2 + 1));
		else
			return (0);
	}
	if (*string1 != '\0' && *string2 == '\0')
	{
		if (*(string2 - 1) == '*')
			return (1);
		else
			return (0);
	}

	if (*string2 == '*')
		return (wildcmp(string1, string2 + 1));

	if (*string1 == *string2)
		return (wildcmp(string1 + 1, string2 + 1));

	if (*(string2 - 1) == '*')
		return (wildcmp(string1 + 1, string2));

	return (0);
}
