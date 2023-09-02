#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 *
 * @argc: number of args.
 * @argv: pointer to args.
 *
 * Return: always success (0).
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
			int i = 0;

			while (argv[argc][i] != '\0')
			{
				if (!isdigit(argv[argc][i]))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
			sum += atoi(argv[argc]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
