#include "main.h"

/**
 * _puts - print string to stdout.
 *
 * @str: string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr = ptr + 1;
	}
	_putchar('\n');
}
