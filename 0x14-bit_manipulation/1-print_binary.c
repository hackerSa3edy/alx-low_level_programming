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
	static int recursive;

	/* Static int variables are automatically initialized to 0 by default*/
	if (decimal == 0 && recursive == 0)
	{
		_putchar('0');
		return;
	}
	recursive = 1;
	if (decimal != 0)
	{
		print_binary(decimal >> 1);
		_putchar((digit & decimal) + '0');
	}
}
