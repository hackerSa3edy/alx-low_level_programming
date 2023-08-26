#include "main.h"
#include <stdio.h>

/**
 * add_digits - add two digits.
 *
 * @a: num1.
 * @carry: carry from the previous calculation.
 *
 * Return: result of sum.
 */
int add_digits(int a, int *carry)
{
	int sum = a + *carry;
	*carry = sum / 10;
	return (sum % 10);
}

/**
 * reverse_arr - reverse the content of an array of integers.
 *
 * @a: pointer to an array.
 * @n: number of elements of the array.
 *
 * Return: Nothing.
 */
void reverse_arr(char *a, int n)
{
	int start;
	char temp;
	int end = n - 1;

	for (start = 0; start < end; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;

	}
}

/**
 * infinite_add - adds two numbers.
 *
 * @num1: first num.
 * @num2: second num.
 * @result: the buffer that function will use to store the result.
 * @size_r: the buffer size.
 *
 * Return: pointer to the result.
 */
char *infinite_add(char *num1, char *num2, char *result, int size_r)
{
	int carry, sum, len_num1, len_num2, i, max_len;

	for (len_num1 = 0; num1[len_num1];)
		len_num1++;
	for (len_num2 = 0; num2[len_num2];)
		len_num2++;

	if ((len_num1 >= size_r) || (len_num2 >= size_r))
		return (0);

	carry = max_len = 0;
	for (i = 0; i < size_r - 1; i++)
	{
		sum = 0;
		if (i < len_num1)
			sum += num1[len_num1 - i - 1] - '0';

		if (i < len_num2)
			sum += num2[len_num2 - i - 1] - '0';

		if (i >= len_num2 && i >= len_num1)
			break;
		max_len++;
		sum = add_digits(sum, &carry);
		result[i] = sum + '0';
		if ((max_len == size_r - 1) && (carry == 1))
			return (0);
	}
	if (carry == 1)
	{
		result[max_len] = carry + '0';
		result[max_len + 1] = '\0';
		reverse_arr(result, max_len + 1);
	}
	else
	{
		result[max_len] = '\0';
		reverse_arr(result, max_len);
	}
	return (result);
}
