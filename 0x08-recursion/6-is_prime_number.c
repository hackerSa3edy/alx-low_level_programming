#include "main.h"

/**
 * find_prime - checks whether the number is prime number or not.
 *
 * @number: number to be checked.
 * @guess: number used in guessing.
 *
 * Return: (1) if the input integer is a prime number, (0) otherwise.
 */
int find_prime(int number, int guess)
{
	if (number % 2 == 0)
		return (0);

	if (number ==  guess)
		return (1);

	if (number % guess == 0)
		return (0);

	return (find_prime(number, guess + 2));
}

/**
 * is_prime_number - finds whether the number is prime or not.
 *
 * @number: the processed number.
 *
 * Return: (1) if the input integer is a prime number, otherwise (0).
 */
int is_prime_number(int number)
{
	if (number <= 1)
		return (0);

	return (find_prime(number, 3));
}
