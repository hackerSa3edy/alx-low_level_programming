#include "calc.h"

/**
 * main - main for calc program.
 *
 * @argc: number of arguments.
 * @argv: arguments values.
 *
 * Return: Always success (0), (1) otherwise.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator  == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(operator))(num1, num2);
	printf("%d\n", result);
	return (0);
}
