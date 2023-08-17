#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: Always success (0).
 */
int main(void)
{
	long int firstNum = 1;
	long int secondNum = 2;
	long int sum;
	int n = 50;

	printf("%ld, %ld, ", firstNum, secondNum);
	while (n >= 1)
	{
		sum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = sum;
		printf("%ld", sum);
		if (n != 1)
		{
			printf(", ");
		}
		n--;
	}
	printf("\n");
	return (0);
}
