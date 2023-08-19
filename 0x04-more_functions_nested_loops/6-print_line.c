#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: the number of times the char _ should be printed.
 *
 * Return: nothing.
 */
void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
