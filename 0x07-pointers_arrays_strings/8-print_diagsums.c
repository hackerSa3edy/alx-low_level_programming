#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @arr: matrix array.
 * @size: size of the array.
 *
 * Return: Nothing
 */
void print_diagsums(int *arr, int size)
{
	int index1, index2, index3, sum1, sum2;

	sum1 = sum2 = 0;
	for (index1 = 0; index1 < size; index1++)
	{
		for (index2 = 0; index2 < size; index2++)
		{
			if (index1 == index2)
			{
				sum1 += *(arr + (index1 * size) + index2);
				break;
			}
		}

		for (index3 = size - 1; index3 >= 0; index3--)
		{
			if (index1 == size - index3 - 1)
			{
				sum2 += *(arr + (index1 * size) + index3);
				break;
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
