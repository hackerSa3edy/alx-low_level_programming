#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if ((c != 101) && (c != 113))
		{
			putchar(c);

		}
		++c;
	}
	putchar(10);
	return (0);
}
