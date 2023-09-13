#include "function_pointers.h"

/**
 * array_iterator - executes a function given as param on each elem of and arr.
 *
 * @array: array to be processed.
 * @size: size of the array.
 * @action: func to be called on each elem of the array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	while (index < size && array != NULL && action != NULL)
	{
		action(array[index]);
		index++;
	}
}
