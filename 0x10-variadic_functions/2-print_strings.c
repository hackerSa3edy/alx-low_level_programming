#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a strings, followed by a new line.
 *
 * @sp: separator.
 * @n: num of args.
 *
 * Return: Nothing.
 */
void print_strings(const char *sp, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;
	char *string;

	va_start(ptr, n);
	for (index = 0; index < n; index++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index != n - 1 && sp != NULL)
			printf("%s", sp);
	}
	va_end(ptr);

	printf("\n");
}
