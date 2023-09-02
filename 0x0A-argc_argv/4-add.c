#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: number of args.
 * @argv: pointer to args.
 *
 * Return: Always success (0).
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 2)
	{
		while (--argc)
		{
			if (!(*argv[argc] >= 48 && *argv[argc] <= 57))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
