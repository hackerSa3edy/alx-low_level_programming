#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: number of args.
 * @argv: pointer to the args.
 *
 * Return: always success (0).
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc == 1 || argc == 2)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%i\n", num1 * num2);
	}
	return (0);
}
