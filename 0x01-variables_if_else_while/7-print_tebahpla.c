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
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		--c;
	}
	putchar(10);
	return (0);
}
