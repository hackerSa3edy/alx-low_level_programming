#include "main.h"

/**
 * set_string - set the value of a pointer to a char.
 *
 * @s: destination.
 * @to: value to be seted.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
