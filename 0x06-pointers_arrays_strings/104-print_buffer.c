#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer.
 *
 * @b: buffer to be printed.
 * @size: size of buffer.
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
	int index, index2, index3;

	for (index = 0; index < size; index = index + 10)
	{
		printf("%08x:", index);
		for (index2 = index; index2 < index + 10; index2++)
		{
			if (index2 % 2 == 0)
				printf(" ");

			if (index2 < size)
			{
				printf("%02x", b[index2]);
			}
			else
				printf("  ");
		}

		printf(" ");
		for (index3 = index; index3 < index + 10; index3++)
		{
			if (index3 < size)
			{
				if (b[index3] >= 32 && b[index3] <= 126)
					printf("%c", b[index3]);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
