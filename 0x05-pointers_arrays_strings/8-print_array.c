#include "main.h"
#include <stdio.h>

/**
 * print_array - print n of array elements.
 *
 * @a: array elements.
 * @n: num of elements to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int *ptr;
	int counter;

	if (n > 0)
	{
		ptr = a;
		printf("%i", *ptr);
		for (counter = 1; counter < n; counter++)
		{
			printf(", %i", *(ptr + counter));
		}
	}
	printf("\n");
}
