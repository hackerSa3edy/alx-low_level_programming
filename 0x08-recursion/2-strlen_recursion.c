#include "main.h"

/**
 * _strlen_recursion - calc the length of a string.
 *
 * @string: string to be processed.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *string)
{
	unsigned int length = 0;

	if (*string == '\0')
		return (0);
	length++;
	length += _strlen_recursion(string + 1);
	return (length);
}
