#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: string to search at.
 * @c: character to be searched.
 *
 * Return: pointer to the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; *(s + index); index++)
	{
		if (*(s + index) == c)
		{
			return (s + index);
		}
	}
	return (NULL);
}
