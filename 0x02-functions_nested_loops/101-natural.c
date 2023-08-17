#include <stdio.h>

/**
 * main - compute and prints all numbers that are below 1024
 *	and multiple of 3 or 5
 *
 * Return: return nothing.
 */
int main(void)
{
	int module1 = 3;
	int module2 = 5;
	int baseNum = 1024;
	int sum = 0;

	while (baseNum >= 1)
	{
		baseNum--;
		if ((baseNum % module1 == 0) || (baseNum % module2 == 0))
		{
			sum = sum + baseNum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
