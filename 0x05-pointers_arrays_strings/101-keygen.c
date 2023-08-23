#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * calculateChecksum - Calc checksum for a random string.
 *
 * @str: random string.
 *
 * Return: Checksum.
 */
int calculateChecksum(char *str)
{
	int checksum, i;

	checksum = i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		checksum += str[i];
	}
	return (checksum);
}

/**
 * main - print random pass which its checksum equlas 2772.
 *
 * Return: Always Success (0).
 */
int main(void)
{
	int desiredChecksum = 2772;
	int checksum = 0;
	int length;
	char random_char[44];

	srand(time(0));
	while (checksum != desiredChecksum)
	{
		for (length = 0; length < 43; length++)
		{
			random_char[length] = (rand() % 26) + 65;
			random_char[length + 1] = '\0';
			checksum = calculateChecksum(random_char);
			if (checksum == desiredChecksum)
			{
				printf("%s\n", random_char);
				break;
			}

		}
	}
	return (0);
}
