#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: string to be printed.
 *
 * Return; Nothing.
 */
void puts_half(char *str)
{
	char *ptr;
	int size = 0;
	int half_size;

	ptr = str;
	while (*ptr != '\0')
	{
		size = size + sizeof(*ptr);
		ptr = ptr + 1;
	}
	if (size % 2 == 0)
	{
		half_size = size / 2;
	}
	else
	{
		half_size = (size - 1 ) / 2;
	}
	ptr = str;
	ptr = ptr + half_size;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr = ptr + 1;
	}
	_putchar('\n');
}
