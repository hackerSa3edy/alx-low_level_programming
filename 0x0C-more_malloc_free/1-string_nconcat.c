#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @str1: first string.
 * @str2: second string.
 * @len: len of string2 to be concatenated.
 *
 * Return: returned pointer shall point to a newly allocated space in memory,
 * 	which contains s1, followed by the first n bytes of s2,
 * 	and null terminated.
 */
char *string_nconcat(char *str1, char *str2, unsigned int len)
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

	for (index2 = 0; string2[index2] && index2 < len;)
		index2++;

	ptr = malloc(sizeof(char) * (index1 + index2 + 1));
	if (ptr == NULL)
		return (NULL);

	counter = 0;
	for (index1 = 0; string1[index1]; index1++)
	{
		ptr[index1] = string1[index1];
		counter++;
	}

	for (index2 = 0; string2[index2] && index2 < len; index2++)
	{
		ptr[counter] = string2[index2];
		counter++;
	}

	ptr[counter] = '\0';
	return (ptr);
}
