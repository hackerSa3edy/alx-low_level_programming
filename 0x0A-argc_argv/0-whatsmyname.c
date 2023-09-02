#include <stdio.h>

/**
 * main - prints the program name
 *
 * @argc: number of arguments.
 * @argv: pointer to the arguments.
 *
 * Return: Always success (0).
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
