#include "main.h"

/**
 * print_alphabet - print all lower alpha
 *
 * Return: return nothing
 */

void print_alphabet(void)
{
	int c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
