#include <stdio.h>

/**
 * prime_factor - finds and prints the largest prime factor.
 *
 * @number: the number to be processed.
 *
 * Return: Nothing.
 */
void prime_factor(long int number)
{
	long int i;
	for (i = 2; i <= number; i++)
	{
		if (i == number)
		{
			printf("%ld\n", number);
			break;
		}

		if (number % i == 0)
		{
			prime_factor(number / i);
			break;
		}
	}
}

/**
 * main - entry point.
 *
 * Return: Always Success (0).
 */
int main(void)
{
	long int number = 612852475143;
	prime_factor(number);
	return (0);
}
