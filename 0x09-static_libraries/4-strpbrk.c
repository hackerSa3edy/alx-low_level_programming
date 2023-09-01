#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @string: string to search at.
 * @accept: set of character to be searched.
 *
 * Return: pointer to the byte in string that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *string, char *accept)
{
	unsigned int index1, index2;

	for (index1 = 0; string[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (string[index1] == accept[index2])
				break;
		}
		if (string[index1] == accept[index2])
			break;
	}
	if (!(string[index1]))
		return (NULL);

	return (string + index1);
}
