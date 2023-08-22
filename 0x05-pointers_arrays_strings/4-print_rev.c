#include "main.h"

/**
 * print_rev - print str in reverse.
 *
 * @s: string to be printed.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	char *ptr;
	int size;

	ptr = s;
	size = 0;
	while (*ptr != '\0')
	{
		size = size + sizeof(*ptr);
		ptr = ptr + 1;
	}
	while (size >= 0)
	{
		_putchar(*ptr);
		size = size - 1;
		ptr = ptr - 1;
	}
	_putchar('\n');
}
