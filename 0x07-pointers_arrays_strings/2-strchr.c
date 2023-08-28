#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @string: string to search at.
 * @character: character to be searched.
 *
 * Return: pointer to the first occurence of the character.
 */
char *_strchr(char *string, char character)
{
	unsigned int index;

	for (index = 0; *(string + index); index++)
	{
		if (*(string + index) == character)
		{
			return (string + index);
		}
	}
	return (NULL);
}
