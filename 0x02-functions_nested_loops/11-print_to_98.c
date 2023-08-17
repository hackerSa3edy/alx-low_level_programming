#include "main.h"

/**
 * checkDigits - check num of digits.
 *
 * @n: number.
 *
 * Return: return nothing.
 */
void checkDigits(int n)
{
	int singleDigit;
	int base = 10;

	while (n >= base)
	{
		base = base * 10;
	}
	while (base != 1)
	{
		singleDigit = (n % base) / (base / 10);
		_putchar(singleDigit + '0');
		base = base / 10;

	}
}

/**
 * print_to_98 - prints all natural number from `n` to 98,
 *	followed by a new line.
 *
 * @n: the start number.
 *
 * Return: return nothing.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 0 && n <= 98)
		{
			checkDigits(n);
			n++;
		}
		else if (n < 0)
		{
			_putchar('-');
			checkDigits(n * -1);
			n++;
		}
		else
		{
			checkDigits(n);
			n--;
		}

		_putchar(',');
		_putchar(' ');
	}
	checkDigits(98);
	_putchar('\n');
}
