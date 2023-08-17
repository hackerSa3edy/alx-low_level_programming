#include "main.h"

/**
 * _islower - Checks if the char is lowerCase.
 *
 * @c: the char to be checked.
 *
 * Return: return (1) if lowerCase (0) otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
