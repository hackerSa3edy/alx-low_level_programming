#include "main.h"

/**
 * print_alphabet_x10 - print all lower alpha 10 times
 *
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	int c = 97;
	int n = 0;

	while (n < 10)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 97;
		n++;
	}
}
