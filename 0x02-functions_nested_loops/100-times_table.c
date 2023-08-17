#include "main.h"

/**
 * checkDigits - check num of digits.
 *
 * @n: number.
 *
 * Return: number of digits.
 */
int checkDigits(int n)
{
	int digit = 0;

	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

/**
 * printDigits - print each digit individually.
 *
 * @n: number.
 *
 * Return: return nothing.
 */
void printDigits(int n)
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
	int nDigits;

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
			nDigits = checkDigits(nextResult);
			printDigits(result);
			if (row != n)
			{
				_putchar(',');
				while (nDigits <= 3)
				{
					_putchar(' ');
					nDigits++;
				}
			}
			row++;
		}
		_putchar('\n');
		column++;
		row = 0;
	}
}
