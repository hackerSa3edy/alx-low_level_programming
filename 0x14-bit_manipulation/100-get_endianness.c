#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: (0) if big endian, (1) if little endian.
 */
int get_endianness(void)
{
	int digit = 1;
	int *digit_in_memory = NULL;

	digit_in_memory = (int *) &digit;
	return(*digit_in_memory);
}
