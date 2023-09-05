#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @str1: first string.
 * @str2: second string.
 *
 * Return: pointer to the newly string.
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int index1, index2, counter;
	char *ptr, *string1, *string2;

	if (str1 == NULL)
		string1 = "";
	else
		string1 = str1;

	if (str2 == NULL)
		string2 = "";
	else
		string2 = str2;

	for (index1 = 0; string1[index1];)
		index1++;

	for (index2 = 0; string2[index2];)
		index2++;

	ptr = malloc((index1 + index2 + 1) * sizeof(char));
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
