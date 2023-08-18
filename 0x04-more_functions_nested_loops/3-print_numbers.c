#include "main.h"

/**
 * print_numbers - print numbers from 0 -> 9.
 *
 * Return: nothing.
 */
void print_numbers(void)
{
	int counter;
	for (counter = 0; counter <= 9; counter++)
	{
		_putchar(counter + '0');
	}
	_putchar('\n');
}
