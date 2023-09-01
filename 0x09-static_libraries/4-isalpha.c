#include "main.h"

/**
 * _isalpha - Checks if the char is alpha.
 *
 * @c: The char to be checked.
 *
 * Return: return (1) if c is letter, (0) otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
