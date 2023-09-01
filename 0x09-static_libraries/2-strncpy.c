#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: destination var.
 * @src: source buffer.
 * @n: num of character to be copied.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i1, size;

	i1 = size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	while (n != i1)
	{
		if (i1 < (size + 1))
		{
			dest[i1] = src[i1];
		}
		else
		{
			dest[i1] = '\0';
		}
		i1++;
	}
	return (dest);
}
