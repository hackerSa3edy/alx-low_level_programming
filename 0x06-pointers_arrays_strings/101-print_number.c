#include "main.h"

/**
 * print_number - print numbers that more than 1 digit.
 *
 * @n: number to be processed.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int singleDigit;
	int base = 10;
	int sign = 1;

	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	while (n >= base)
	{
		base = base * 10;
	}


	while (base != 1)
	{
		if (sign == -1)
		{
			_putchar('-');
			sign = 1;
		}
		singleDigit = (n % base) / (base / 10);
		_putchar(singleDigit + '0');
		base = base / 10;
	}
}
