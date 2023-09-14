#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char.
 *
 * @c: char
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
 * @i: integer
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
 * @f: float.
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
 * @str: string
 *
 * Return: Nothing
 */
void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

void print_all(const char * const format, ...)
{
	int index = 0, index2 = 0;
	format_func formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list ptr;

	va_start(ptr, format);
	while (format[index] != '\0')
	{
		while (formats[index2].type != NULL)
		{
			if (format[index] == *formats[index2].type)
			{
				formats[index2].func(ptr);
				printf(", ");
			}
			index2++;
		}
		index2 = 0;
		index++;
	}
	va_end(ptr);

	printf("\n");
}
