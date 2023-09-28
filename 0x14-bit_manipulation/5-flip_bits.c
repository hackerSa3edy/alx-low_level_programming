#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 *
 * @num1: 1st number.
 * @num2: 2nd number.
 *
 * Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int num_of_bits = 0, mediator = 0, bit = 0;

	mediator = num1 ^ num2;
	while (mediator != 0)
	{
		bit = 1 & mediator;
		if (bit == 1)
			num_of_bits++;

		mediator = mediator >> 1;
	}
	return (num_of_bits);
}
