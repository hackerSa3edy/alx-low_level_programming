#include "main.h"

/**
 * rev_string - reverse string.
 *
 * @s: string to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char *ptr;
	char *temp;
	int size;

	ptr = s;
	size = 0;
	while (*ptr != '\0')
	{
		size = size + sizeof(*ptr);
		*temp = *ptr;
		temp = temp + 1;
		ptr = ptr + 1;
	}
	*temp = '\0';
	while (size != 0)
	{
		size = size - 1;
		temp = temp - 1;
		*s = *temp;
		s = s + 1;
	}
}
