#include "main.h"

/**
 * print_digit - print single digit.
 *
 * @n: digit to be printed.
 *
 * Return: Nothing.
 */
void print_digit(int n)
{
	_putchar(n + '0');
}

/**
 * print_recursive - Recursive function to print the entire number.
 *
 * @n: number to be processed.
 *
 * Return: Nothing
 */
void print_recursive(unsigned int n)
{
	if (n == 0)
	{
		return;
	}

	print_recursive(n / 10);
	print_digit(n % 10);
}

/**
 * print_number - print numbers that more than 1 digit.
 *
 * @n: number to be processed.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else if (n == 0)
	{
		print_digit(0);
		return;
	}
       	print_recursive(num);
}
