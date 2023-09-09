#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * assignValues - assign values to the array.
 *
 * @arr: array to assign values to.
 * @string: buffer to be processed.
 *
 * Return: pointer to the array.
 */
char **assignValues(char **arr, char *string)
{
	int index, outerIndex, innerIndex;

	outerIndex = 0;
	for (index = 0; string[index]; index++)
	{
		if (string[index] >= 33 && string[index] <= 126)
		{
			innerIndex = 0;
			while (string[index] != 32)
			{
				arr[outerIndex][innerIndex] = string[index];
				index++;
				innerIndex++;
			}
			arr[outerIndex][innerIndex] = '\0';
			outerIndex++;
		}
	}
	arr[outerIndex] = NULL;
	return (arr);
}

/**
 * strtow - splits a string into words.
 *
 * @string: string to be splitted.
 *
 * Return: pointer to the newly created array of words.
 */
char **strtow(char *string)
{
	int index, words, sizeOfword, wordIndex;
	char **arr;

	if (string == NULL || *string == '\0')
		return (NULL);
	words = sizeOfword = wordIndex = 0;
	for (index = 0; string[index]; index++)
	{
		if (string[index] >= 33 && string[index] <= 126)
		{
			while (string[index] != 32)
				index++;
			words++;
		}
	}
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (index = 0; string[index]; index++)
	{
		if (string[index] >= 33 && string[index] <= 126)
		{
			while (string[index] != ' ')
			{
				index++;
				sizeOfword++;
			}
			/* size of word + Null byte */
			arr[wordIndex++] = malloc(sizeof(char) * (sizeOfword + 1));
			if (arr[wordIndex - 1] == NULL)
				return (NULL);
		}
	}
	arr = assignValues(arr, string);
	return (arr);
}
