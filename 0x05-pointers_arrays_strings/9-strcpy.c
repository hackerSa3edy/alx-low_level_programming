#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: the destination variable.
 * @src: the source string.
 *
 * Return: the pointer to dest.
 */
char * _strcpy(char *dest, char *src)
{
	int size = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
		size = size + sizeof(*src);
	}
	dest = dest - size;
	return (dest);
}
