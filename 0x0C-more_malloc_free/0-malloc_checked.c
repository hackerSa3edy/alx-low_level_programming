#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @buffer: size of memory to be allocated.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int buffer)
{
	void *ptr;

	ptr = malloc(buffer);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
