#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 *
 * @n: the number of times the char \ should be printed.
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int counter;
	int SpCounter;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			for (SpCounter = 0; SpCounter < counter; SpCounter++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (counter != n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
