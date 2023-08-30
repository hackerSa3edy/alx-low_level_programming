#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @string: string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}

	_print_rev_recursion(string + 1);
	_putchar(*string);
}
