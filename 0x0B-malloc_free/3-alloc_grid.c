#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to the array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int index, index2;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		arr[index] = malloc(width * sizeof(int *));
		if (arr[index] == NULL)
			return (NULL);
	}

	for (index = 0; index < height; index++)
		for (index2 = 0; index2 < width; index2++)
			arr[index][index2] = 0;
	return (arr);
}
