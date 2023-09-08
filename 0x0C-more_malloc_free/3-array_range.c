#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum number.
 * @max: maximum number.
 *
 * Return: pointer to the allocated memory.
 */
int *array_range(int min, int max)
{
	unsigned int size = max - min + 1;
	unsigned int index;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = min++;

	return (ptr);
}
