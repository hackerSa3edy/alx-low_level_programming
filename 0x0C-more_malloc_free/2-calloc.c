#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: num of elements.
 * @size: size of element data type.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp_ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	temp_ptr = (char *)ptr;
	index = 0;
	while (index < (nmemb * size))
	{
		temp_ptr[index] = 0;
		index++;
	}

	return (ptr);
}
