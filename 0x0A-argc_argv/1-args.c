#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of arguments.
 * @argv: pointer to the arguments
 *
 * Return: Always Success (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
