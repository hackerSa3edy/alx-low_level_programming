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
 * print_times_table - prints the 9 times table, starting with 0.
 *
 * @n: number of rows and columns.
 *
 * Return: return nothing.
 */
void print_times_table(int n)
{
	int column = 0;
	int row = 0;
	int result;
	int nextResult;

	if (n > 15 || n < 0)
	{
		return;
	}

	while (column <= n)
	{
		while (row <= n)
		{
			result = row * column;
			nextResult = (row + 1) * column;
			checkDigits(result);
			if (row != n)
			{
				_putchar(',');
				if (nextResult > 99)
				{
					_putchar(' ');
				}
				else if (nextResult > 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (nextResult > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			row++;
		}
		_putchar('\n');
		column++;
		row = 0;
	}
}
