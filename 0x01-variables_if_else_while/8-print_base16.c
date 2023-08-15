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
	int n = 48;
	int c = 97;

	while (n <= 57)
	{
		putchar(n);
		++n;
	}
	while (c <= 102)
	{
		putchar(c);
		++c;
	}
	putchar(10);
	return (0);
}
