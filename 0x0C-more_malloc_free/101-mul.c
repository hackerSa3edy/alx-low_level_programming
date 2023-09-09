#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination location.
 * @src: source location.
 * @size: size of buffer to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: old memory location.
 * @old_size: old size of the buffer.
 * @new_size: new size of the allocated memory.
 *
 * Return: pointer to the new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}

	return (new_ptr);
}

/**
 * mul - multiply two huge numbers
 *
 * @num1: first number.
 * @size_1: length of the first number.
 * @num2: second number.
 * @size_2: length of the second number.
 * @final_result: final array to store the results.
 *
 * Return: Nothing.
 */
void mul(char *num1, int size_1, char *num2, int size_2, char *final_result)
{
	char *ptr;
	int index, index2, index3, extIndex, finalIndex,
		digit_mul, remainder, ptr_old_size, sum_remainder, sum;

	remainder = ptr_old_size = sum_remainder = 0;
	for (index = size_1 - 1; index >= 0; index--)
	{
		ptr = malloc(sizeof(char) * (size_2 + size_1 - 1 - index));
		if (ptr == NULL)
			exit(98);
		index3 = size_1 - index - 1;
		extIndex = size_2 - 1;
		for (index2 = size_2 + size_1 - 2 - index; index2 >= 0; index2--)
		{
			while (index3 > 0)
			{
				ptr[size_2 + size_1 - 2 - index - index2] = '0';
				index3--;
				index2--;
			}
			digit_mul = ((int)num1[index] - '0') * ((int)num2[extIndex] - '0');
			digit_mul += remainder;
			remainder = digit_mul / 10;
			digit_mul = digit_mul % 10;
			ptr[size_2 + size_1 - 2 - index - index2] = digit_mul + '0';
			extIndex--;
		}
		if (remainder != 0)
		{
			ptr = _realloc(ptr, size_2 + size_1 - 1 - index,
					size_2 + size_1 - 1 - index + 2);
			if (ptr == NULL)
				exit(98);
			ptr[size_2 + size_1 - 1 - index] = remainder + '0';
			ptr[size_2 + size_1 - 1 - index + 1] = '\0';
			remainder = 0;
		}
		else
		{
			ptr = _realloc(ptr, size_2 + size_1 - 1 - index,
					size_2 + size_1 - 1 - index + 1);
			if (ptr == NULL)
				exit(98);
			ptr[size_2 + size_1 - 1 - index] = '\0';
		}
		for (finalIndex = size_1 + size_2 - 1;
				finalIndex >= 0 && ptr[size_1 + size_2 - finalIndex - 1]; finalIndex--)
		{
			sum = ((int)final_result[finalIndex] - '0') +
				((int)ptr[size_1 + size_2 - finalIndex - 1] - '0') + sum_remainder;
			sum_remainder = sum / 10;
			sum = sum % 10;
			final_result[finalIndex] = sum + '0';
		}
		if (sum_remainder != 0)
		{
			final_result[finalIndex] = sum_remainder + '0';
			sum_remainder = 0;
		}
		else
			final_result[size_1 + size_2] = '\0';
		free(ptr);
	}
	printf("%s\n", final_result + (final_result[0] == '0'));
}
/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: num of elements.
 * @size: size of element data type.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp_ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	temp_ptr = (char *)ptr;
	index = 0;
	while (index < (nmemb * size))
	{
		temp_ptr[index] = '0';
		index++;
	}

	return (ptr);
}

/**
 * main - main program.
 *
 * @argc: number of arguments.
 * @argv: pointer to an array of arguments.
 *
 * Return: always success (0).
 */
int main(int argc, char **argv)
{
	int index, size_1, size_2;
	char *num1, *num2, *final_result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (index = 0; argv[1][index]; index++)
	{
		if (argv[1][index] < 48 || argv[1][index] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (index = 0; argv[2][index]; index++)
	{
		if (argv[2][index] < 48 || argv[2][index] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = argv[1];
	for (size_1 = 0; argv[1][size_1];)
		size_1++;

	num2 = argv[2];
	for (size_2 = 0; argv[2][size_2];)
		size_2++;

	final_result = _calloc(size_1 + size_2 + 1, sizeof(char));
	if (final_result == NULL)
		exit(98);

	mul(num1, size_1, num2, size_2, final_result);

	free(final_result);
	return (0);
}
