#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: return nothing.
 */
void times_table(void)
{
	int column = 0;
	int row = 0;
	int result;
	int nResult;

	while (column <= 9)
	{
		while (row <= 9)
		{
			result = row * column;
			nResult = (row + 1) * column;
			if (result <= 9)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(((result % 100) / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (row != 9)
			{
				if (nResult > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
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
