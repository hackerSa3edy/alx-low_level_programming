#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 *
 * @a: pointer to an array.
 * @n: number of elements fo the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int start, temp;
	int end = n - 1;

	for (start = 0; start < end; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;

	}
}
