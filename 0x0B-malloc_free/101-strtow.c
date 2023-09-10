#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_buffer - frees a 2 dimensional grid previously created.
 *
 * @grid: 2 dimensional array.
 * @height: height of the array.
 *
 * Return: Nothing.
 */
void free_buffer(char **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

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
			while (string[index] != ' ' && string[index] != '\0')
			{
				arr[outerIndex][innerIndex] = string[index];
				index++;
				innerIndex++;
			}
			arr[outerIndex][innerIndex] = '\0';
			outerIndex++;
		}
		if (string[index] == '\0')
			break;
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
	sizeOfword = wordIndex = words = 0;

	for (index = 0; string[index]; index++)
		if (string[index] != ' ' &&
				(string[index + 1] == ' ' || string[index] == '\0'))
			words++;

	arr = malloc(sizeof(char *) * (words + 2));
	if (arr == NULL || words == 0)
	{
		free(arr);
		return (NULL);
	}
	for (index = 0; string[index]; index++)
	{
		if (string[index] >= 33 && string[index] <= 126)
		{
			while (string[index] != ' ' && string[index] != '\0')
			{
				index++;
				sizeOfword++;
			}
			/* size of word + Null byte */
			arr[wordIndex++] = malloc(sizeof(char) * (sizeOfword + 1));
			if (arr[wordIndex - 1] == NULL)
			{
				free_buffer(arr, wordIndex - 1);
				return (NULL);
			}
		}
		if (string[index] == '\0')
			break;
	}
	return (assignValues(arr, string));
}
