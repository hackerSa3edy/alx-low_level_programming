#include "main.h"

/**
 * string_toupper - convert all lowercase letters to uppercace.
 *
 * @str: string to be converted.
 *
 * Return: pointer to str.
 */
char *string_toupper(char *str)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;
	int index2 = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 97) && (str[index] <= 122))
		{
			while (lower[index2] != '\0')
			{
				if (lower[index2] == str[index])
				{
					str[index] = upper[index2];
					break;
				}
				index2++;
			}
			index2 = 0;
		}
		index++;
	}
	return (str);
}
