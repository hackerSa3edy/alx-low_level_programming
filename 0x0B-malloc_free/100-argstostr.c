#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: num of arguments.
 * @av: pointer to arguments.
 *
 * Return: pointer to newly created array.
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int size, index, index2, index3;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* sum of length of all args, plus newlines, plus final Null byte */
	size = ac + 1;
	for (index = 0; index < ac; index++)
		for (index2 = 0; av[index][index2]; index2++)
			size++;

	arr = malloc(sizeof(char) * size);

	index3 = 0;
	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2]; index2++)
		{
			arr[index3] = av[index][index2];
			index3++;
		}
		arr[index3] = '\n';
		index3++;
	}
	return (arr);
}
