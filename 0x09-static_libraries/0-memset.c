#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @mArea: memory location.
 * @buffer: char to be placed in the memory.
 * @size: size of buffer to be filled.
 *
 * Return: pointer to the memory area.
 */
char *_memset(char *mArea, char buffer, unsigned int size)
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		mArea[index] = buffer;
	}
	return (mArea);
}
