#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array to search in.
 * @size: size of the array.
 * @cmp: pointer to check the searched value.
 *
 * Return: index of the first elem found, (-1) if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	int result = -1;

	while (array != NULL && cmp != NULL && size > 0 && index < size)
	{
		result = cmp(array[index]);
		if (result == 1)
			break;
		index++;
	}
	return (result == 1 ? index : -1);
}
