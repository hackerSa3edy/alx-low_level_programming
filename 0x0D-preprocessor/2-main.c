#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from,
 *	followed by a new line.
 *
 * Return: always success (0), otherwise (1).
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
