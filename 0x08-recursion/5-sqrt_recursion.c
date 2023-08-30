#include "main.h"

/**
 * find_sqrt - finds the sqrt of a number.
 *
 * @number: number to be matched.
 * @guess: the guess number.
 *
 * Return: the correct guessed number.
 */
int find_sqrt(int number, int guess)
{
	if (number == (guess * guess))
		return (guess);

	if (guess >= (number / 2))
		return (-1);

	guess++;
	return (find_sqrt(number, guess));
}

/**
 * _sqrt_recursion - calc the natural square root of a number.
 *
 * @number: the number to be processed.
 *
 * Return: the square root of the number.
 */
int _sqrt_recursion(int number)
{
	return (find_sqrt(number, 1));
}
