#include "main.h"

/**
 * _pow_recursion - calc the value of x raised to the power of y.
 *
 * @x: num1.
 * @y: power.
 *
 * Return: value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	unsigned int result = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);
	return (result);
}
