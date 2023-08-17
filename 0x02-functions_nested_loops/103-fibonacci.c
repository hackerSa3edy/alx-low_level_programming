#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: Always success (0).
 */
int main(void)
{
	long int firstNum = 0;
	long int secondNum = 1;
	long int sum = 0;
	long int evenSum = 0;

	while (sum <= 4000000)
	{
		sum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = sum;
		if (sum % 2 == 0)
		{
			evenSum = evenSum + sum;
		}
	}
	printf("%ld\n", evenSum);
	return (0);
}
