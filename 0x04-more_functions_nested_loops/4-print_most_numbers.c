#include "main.h"

/**
 * print_most_numbers - print numbers from 0 -> 9, except 2, 4.
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		if (counter != 2 && counter != 4)
		{
			_putchar(counter + '0');
		}
	}
	_putchar('\n');
}
