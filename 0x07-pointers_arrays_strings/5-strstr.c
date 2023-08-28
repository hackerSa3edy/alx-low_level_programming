#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: string to search at.
 * @needle: substring to be searched.
 *
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index1, index2;
	int found = 0;

	if (*needle == '\0')
		return (haystack);

	for (index1 = 0; haystack[index1]; index1++)
	{
		for (index2 = 0; needle[index2]; index2++)
		{
			if (!(haystack[index1 + index2]))
				break;

			if (haystack[index1 + index2] != needle[index2])
			{
				found = 0;
				break;
			}
			found = 1;
		}
		if (found)
			break;
	}
	if (found)
		return (haystack + index1);

	return (NULL);
}
