#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @decimal: decimal number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int decimal)
{
	int digit = 1;
	static int recursive = 1;

	if (decimal == 0 && recursive == 1)
	{
		_putchar('0');
		return;
	}
	recursive = 0;
	if (decimal != 0)
	{
		print_binary(decimal >> 1);
		_putchar((digit & decimal) + '0');
	}
}
