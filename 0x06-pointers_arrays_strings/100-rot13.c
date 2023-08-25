#include "main.h"

/**
 * rot13 - encodes strings to rot13.
 *
 * @s: string to be processed.
 *
 * Return: pointer to new s.
 */
char *rot13(char *s)
{
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int size = sizeof(rot13) / sizeof(*rot13);
	int index = 0;
	int forIndex;

	while (s[index] != '\0')
	{
		for (forIndex = 0; forIndex < size; forIndex++)
		{
			if (s[index] == alpha[forIndex])
			{
				s[index] = rot13[forIndex];
				break;
			}
		}
		index++;
	}
	return (s);
}
