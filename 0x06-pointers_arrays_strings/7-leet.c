#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @string: string to be encoded.
 *
 * Return: pointer to string.
 */
char *leet(char *string)
{
	char LeetChars[] = "AaEeOoTtLl";
	char leetCode[] = "4433007711";
	int size = sizeof(leetCode) / sizeof(*leetCode);
	int forIndex;
	int index = 0;

	while (string[index] != '\0')
	{
		for (forIndex = 0; forIndex < size; forIndex++)
		{
			if (string[index] == LeetChars[forIndex])
			{
				string[index] = leetCode[forIndex];
			}
		}
		index++;
	}
	return (string);
}
