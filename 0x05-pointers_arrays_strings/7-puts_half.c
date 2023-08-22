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
	ptr = str;
	if (size % 2 == 0)
	{
		half_size = size / 2;
		ptr = ptr + half_size;
	}
	else
	{
		half_size = (size - 1) / 2;
		ptr = ptr + (half_size - 1);
	}

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr = ptr + 1;
	}
	_putchar('\n');
}
