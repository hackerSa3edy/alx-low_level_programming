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
	long int sum, sumNdHalf, num1StHalf, num1NdHalf, num2StHalf, num2NdHalf;
	int overflow, safe, n;

	overflow = safe = 0;
	printf("%ld, %ld", firstNum, secondNum);
	for (n = 0; n < 96; n++)
	{
		if (overflow == 0)
		{
			sum = firstNum + secondNum;
			printf(", %ld", sum);
			firstNum = secondNum;
			secondNum = sum;
			if ((firstNum + secondNum) < 0)
				overflow = 1;
		}
		else
		{
			if (safe == 0)
			{
				num1NdHalf = firstNum % 1000000000;
				num2NdHalf = secondNum % 1000000000;
				num1StHalf = firstNum / 1000000000;
				num2StHalf = secondNum / 1000000000;
				safe = 1;
			}
			sumNdHalf = num1NdHalf + num2NdHalf;
			sum = num1StHalf + num2StHalf + (sumNdHalf / 1000000000);
			printf(", %ld%ld", sum, sumNdHalf % 1000000000);
			num1NdHalf = num2NdHalf;
			num1StHalf = num2StHalf;
			num2NdHalf = sumNdHalf % 1000000000;
			num2StHalf = sum;
		}
	}
	printf("\n");
	return (0);
}
