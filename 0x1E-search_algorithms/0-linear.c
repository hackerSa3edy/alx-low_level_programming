#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 *	Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: This function takes a pointer to the first element of an array
 *	of integers, the size of the array, and a value to search for. It iterates
 *	over each element in the array, comparing it with the value. If a match is
 *	found, it breaks out of the loop and returns the index of the matched
 *	element. If no match is found after checking all elements, it returns -1.
 *
 * Return: First index where value is located, or -1 if value is not present or
 *	if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		printf(
			"Value checked array[%li] = [%i]\n",
			index,
			array[index]
			);

		if (value == array[index])
			break;
	}

	if (index == size)
		index = -1;
	return (index);
}
