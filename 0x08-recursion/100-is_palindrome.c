#include "main.h"

/**
 * _strlen_recursion - calc the length of a string.
 *
 * @string: string to be processed.
 *
 * Return: the length.
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

/**
 * check_palindrome - checks if the string is plalindrome or not.
 *
 * @string1: string1 to be comparied.
 * @string2: string2 to be comparied.
 *
 * Return: (1) if palindrome, (0) otherwise.
 */
int check_palindrome(char *string1, char *string2)
{
	if (string1 < string2)
	{
		if (*string1 == *string2)
		{
			return (check_palindrome(string1 + 1, string2 - 1));
		}
		else
			return (0);
	}

	return (1);
}

/**
 * is_palindrome - checks if the string is palindrome.
 *
 * @string: string to checked.
 *
 * Return: (1) if the string is palindrome, (0) otherwise.
 */
int is_palindrome(char *string)
{
	int len = _strlen_recursion(string) - 1;

	return (check_palindrome(string, string + len));
}
