#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * writing to standard error
 *
 * Return: This time will fail
 */
int main(void)
{
	char *message = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));
	return (1);
}
