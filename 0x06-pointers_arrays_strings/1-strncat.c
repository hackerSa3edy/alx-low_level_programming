#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: destination var.
 * @src: source buffer.
 * @n: num of character to be copied.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i1, i2;

	i1 = i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while ((src[i2] != '\0') && (n != i2))
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
