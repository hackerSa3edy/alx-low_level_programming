#include "main.h"

unsigned int convert(unsigned int base, unsigned int exp);

/**
 * binary_to_uint - converts binary number to decimal number.
 *
 * @b: binary number.
 *
 * Return: decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int index = 0, exp = 0;

	while (b && b[index + 1])
		index++;

	exp = index;
	while (b && b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		decimal += (unsigned int)(b[index] - '0') * convert(2, exp - index);
		index--;
	}
	return (decimal);
}

/**
 * convert - calculates the exponention with 2.
 *
 * @base: base number.
 * @exp: exponention
 *
 * Return: result of exp with 2
 */
unsigned int convert(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}
