#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @string: string to be searched at.
 * @accept: whitelist characters.
 *
 * Return: number of bytes in the initial segment of string.
 */
unsigned int _strspn(char *string, char *accept)
{
	unsigned index1, index2;

	for (index1 = 0; string[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (string[index1] == accept[index2])
				break;
		}
		if (string[index1] != accept[index2])
			break;
	}
	return (index1);
}
