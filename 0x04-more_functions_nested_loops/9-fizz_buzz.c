#include <stdio.h>

/**
 * main - print the number from 1-> 100, except multiples of 3 => Fizz
 * and multiples of 5 => Buzz, for muliples of both FizzBuzz.
 *
 * Return: Always Success (0).
 */
int main(void)
{
	int hundred;

	for (hundred = 1; hundred <= 100; hundred++)
	{
		if ((hundred % 3 == 0) && (hundred % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((hundred % 3 == 0) && (hundred % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((hundred % 3 != 0) && (hundred % 5 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", hundred);
		}
		if (hundred < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
