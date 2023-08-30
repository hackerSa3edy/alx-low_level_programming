#include "main.h"

/**
 * factorial - calc the factorial of a given number.
 *
 * @num: number to be processed.
 *
 * Return: the factorial of the number.
 */
int factorial(int num)
{
	unsigned int fact = num;

	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);

	fact *= factorial(num - 1);
	return (fact);
}
