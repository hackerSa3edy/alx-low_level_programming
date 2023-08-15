#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		printf("%i", c);
		++c;
	}
	putchar(10);
	return (0);
}
