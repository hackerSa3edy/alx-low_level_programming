#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: string to be printed.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	char *ptr;
	int size = 0;
	int counter = 0;

	ptr = str;
	while (*ptr != '\0')
	{
		size = size + sizeof(*ptr);
		ptr = ptr + 1;
	}

	ptr = str;
	while ((counter <= size) && (*ptr != '\0'))
	{
		_putchar(*ptr);
		ptr = ptr + 2;
		counter = counter + 2;
	}
	_putchar('\n');
}
