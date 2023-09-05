#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @string1: first string.
 * @string2: second string.
 *
 * Return: pointer to the newly string.
 */
char *str_concat(char *string1, char *string2)
{
	unsigned int index1, index2, counter;
	char *ptr;

	for (index1 = 0; string1[index1];)
		index1++;

	for (index2 = 0; string2[index2];)
		index2++;

	ptr = malloc((index1 + index2 - 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	counter = 0;
	for (index1 = 0; string1[index1]; index1++)
	{
		ptr[index1] = string1[index1];
		counter++;
	}

	for (index2 = 0; string2[index2]; index2++)
	{
		ptr[counter] = string2[index2];
		counter++;
	}

	ptr[counter] = string2[index2];
	return (ptr);
}
