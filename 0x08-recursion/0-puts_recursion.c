#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @string: string to be printed.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*string);
	_puts_recursion(string + 1);
}
