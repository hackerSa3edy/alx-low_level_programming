#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @decimal: decimal number.
 * @index: index of the bit.
 *
 * Return: the value of the bit at index or (-1) if an error occured..
 */
int get_bit(unsigned long int decimal, unsigned int index)
{
	if (index > (sizeof(decimal) * 8))
		return (-1);

	decimal = decimal >> index;

	return (1 & decimal);
}
