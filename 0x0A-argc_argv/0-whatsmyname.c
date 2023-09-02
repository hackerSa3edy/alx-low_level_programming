#include <stdio.h>

/**
 * main - prints the program name.
 *
 * @argc: number of arguments
 * @argv: pointer to arguments.
 *
 * Return: Always success (0)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
