#include "main.h"

/**
 * swap_int - swap two integers.
 *
 * @a: first num.
 * @b: second num.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
