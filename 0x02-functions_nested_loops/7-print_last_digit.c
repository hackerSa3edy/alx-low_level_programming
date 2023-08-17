#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the number to be proccessed.
 *
 * Return: return the value of the last digit.
 */
int print_last_digit(int n)
{
	int r = n % 10;
	if (r < 0)
	{
		r *= -1;
	}
	r += 48;

	_putchar(r);
	return (r - 48);
}
