#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: the name.
 * @print_n: func to print the name in specified type.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*print_n)(char *))
{
	if (name != NULL && print_n != NULL)
		print_n(name);
}
