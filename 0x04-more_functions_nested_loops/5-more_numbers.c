#include "main.h"

/**
 * printDigits - print numbers more than 2 digits.
 *
 * @n: number to be processed.
 *
 * Return: Nothing.
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
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int line;
	int counter;

	for (line = 0; line <= 9; line++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			printDigits(counter);
		}
		_putchar('\n');
	}
}
