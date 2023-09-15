#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its paramters.
 *
 * @n: number of the params
 *
 * Return: the result of the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int result = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (index = 0; index < n; index++)
		result += va_arg(ptr, int);

	va_end(ptr);
	return (result);
}
