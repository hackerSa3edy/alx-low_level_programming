#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: numbers' separator
 * @n: number of args.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;

	if (separator == NULL)
		return;

	va_start(ptr, n);
	for (index = 0; index < n; index++)
	{
		printf("%i", va_arg(ptr, int));
		if (index != n - 1)
			printf("%s", separator);
	}

	printf("\n");
}
