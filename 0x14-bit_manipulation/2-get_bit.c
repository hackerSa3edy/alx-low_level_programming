#include "main.h"

/**
 * git_bit - returns the value of a bit at a given index.
 *
 * @decimal: decimal number.
 * @index: index of the bit.
 *
 * Return: the value of the bit at index or (-1) if an error occured..
 */
int get_bit(unsigned long int decimal, unsigned int index)
{
	unsigned int digit = 1, bitPos = 0, len = 0;
	unsigned long int tempInt = decimal;

	if (decimal == 0 && index == 0)
	{
		return (0);
	}
	while (tempInt != 0)
	{
		tempInt = tempInt >> 1;
		len++;
	}
	
	if (len < index)
		return (-1);

	while (bitPos != index)
	{
		decimal = decimal >> 1;
		bitPos++;
	}

	return (digit & decimal);
}
