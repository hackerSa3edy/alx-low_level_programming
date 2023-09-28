#include "main.h"

unsigned int convert(unsigned int base, unsigned int exp);

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @decimal: binary number.
 * @index: bit index.
 *
 * Return: (1) if it worked, (-1) if an error occurred.
 */
int set_bit(unsigned long int *decimal, unsigned int index)
{
	if (index > (sizeof(decimal) * 8))
		return (-1);

	if (1 & (*decimal >> index) == 0)
		*decimal = *decimal + convert(2, index);

	return (1);
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
