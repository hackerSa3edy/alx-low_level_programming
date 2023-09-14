#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: num of args.
 * @argv: arguments' values
 *
 * Return: always success (0), (1) otherwise.
 */
int main(int argc, char **argv)
{
	int nBytes, index;
	char *xmain = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nBytes = atoi(argv[1]);
	if (nBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nBytes; index++)
	{
		printf("%02x", xmain[index] & 0xFF);
		if (index != nBytes - 1)
			printf(" ");

	}
	printf("\n");
	return (0);
}
