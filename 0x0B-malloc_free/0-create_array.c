#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 *
 * @size: size of the array.
 * @character: char to fill the array with.
 *
 * Return: pointer to the allocated memory, or NULL if something happen.
 */
char *create_array(unsigned int size, char character)
{
	unsigned int index;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);


	for (index = 0; index < size; index++)
		ptr[index] = character;

	return (ptr);
}
