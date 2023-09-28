#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @decimal: binary number.
 * @index: bit index.
 *
 * Return: (1) if it worked, (-1) if an error occurred.
 */
int clear_bit(unsigned long int *decimal, unsigned int index)
{
	if (index > (sizeof(decimal) * 8))
		return (-1);

	*decimal = *decimal & ~(1 << index);

	return (1);
}
