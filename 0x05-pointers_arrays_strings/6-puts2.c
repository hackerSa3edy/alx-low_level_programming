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

	ptr = str;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr = ptr + 2;
	}
	_putchar('\n');
}
