#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

/**
 * struct formats_struct - allowed formats to be printed.
 *
 * @type: points to the type char
 * @func: points to the print func
 */
typedef struct formats_struct
{
	char *type;
	void (*func)(va_list arg);
} format_func;

#endif /* VARIADIC_FUNCTIONS_H */
