#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char.
 *
 * @arg: va_list arg
 *
 * Return: Nothing
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints a integer
 *
 * @arg: va_list arg
 *
 * Return: Nothing
 */
void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%i", i);
}

/**
 * print_float - prints a float
 *
 * @arg: va_list arg
 *
 * Return: Nothing
 */
void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_str - prints a string
 *
 * @arg: va_list arg
 *
 * Return: Nothing
 */
void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all data types variables
 *
 * @format: allowed formats.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int index = 0, index2 = 0;
	char *sp = "";
	format_func formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list ptr;

	va_start(ptr, format);
	while (format && format[index] != '\0')
	{
		while (formats[index2].type != NULL)
		{
			if (format[index] == *formats[index2].type)
			{
				printf("%s", sp);
				formats[index2].func(ptr);
				sp = ", ";
			}
			index2++;
		}
		index2 = 0;
		index++;
	}
	va_end(ptr);

	printf("\n");
}
