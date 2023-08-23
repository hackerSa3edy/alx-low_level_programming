#include <limits.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: char to be checked
 *
 * Return: 1 if @c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string to be converted.
 *
 * Return: the converted number.
 */
int _atoi(char *s)
{
	char *ptr;
	int size, sign, number, for_counter, num_size;

	size = number = 0;
	sign = 1;
	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == '-')
		{
			sign = sign * -1;
			ptr = ptr + 1;
			continue;
		}
		else if (*ptr == '+')
		{
			ptr = ptr + 1;
			continue;
		}

		if (_isdigit(*ptr))
		{
			size = size + 1;
			if ((*(ptr + 1) == ' ') || (*(ptr + 1) == '\0'))
			{
				num_size = size - 1;
				for (for_counter = 0; for_counter < size; for_counter++)
				{
					number = number * 10 + (*(ptr - num_size) - '0');
					if ((sign == 1) && (number > INT_MAX))
					{
						return INT_MAX;
					}
					else if ((sign == -1) && (number < INT_MIN))
					{
						return INT_MIN;
					}
					num_size--;
				}
				return (number * sign);
			}
		}
		ptr = ptr + 1;
	}
	return (0);
}
