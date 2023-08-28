#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination location.
 * @src: source location.
 * @size: size of buffer to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
