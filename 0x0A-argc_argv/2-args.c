#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of the args.
 * @argv: pointer to the args.
 *
 * Return: always success (0).
 */
int main(int argc, char **argv)
{

	while(argc--)
		printf("%s\n", *argv++);

	return (0);
}
