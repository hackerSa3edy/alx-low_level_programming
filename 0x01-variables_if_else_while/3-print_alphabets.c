#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 97;
	int C = 65;

	while (c <= 122)
	{
		putchar(c);
		++c;
	}

	while (C <= 90)
	{
		putchar(C);
		++C;
	}
	putchar(10);
	return (0);
}
