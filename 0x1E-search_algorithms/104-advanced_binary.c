#include "search_algos.h"

size_t check_index(int *arr, size_t beg, size_t end, int value);
void print_arr(int *array, size_t beg, size_t end);

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 *	array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Description: This function takes a pointer to the first element of a sorted
 *	array of integers, the size of the array, and a value to search for. It
 *	uses the Binary Search algorithm to find the first occurrence of the value
 *	in the array. The function divides the array into two halves, checks if the
 *	value is in the middle, the left half or the right half, and repeats the
 *	process until it finds the value or exhausts the search space. If the array
 *	is NULL, it returns -1 immediately.
 *
 * Return: Index where value is located, or -1 if value is not present or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t beg = 0;
	size_t end = size - 1;
	size_t index;

	if (array == NULL)
		return (-1);

	index = check_index(array, beg, end, value);
	if (array[index] != value)
		index = -1;

	return (index);
}

/**
 * check_index - Recursively checks for the first occurrence of a value in a
 *	sorted array of integers
 * @arr: Pointer to the first element of the array to search in
 * @beg: The beginning index of the array section to search in
 * @end: The ending index of the array section to search in
 * @value: Value to search for
 *
 * Description: This function takes a pointer to the first element of a sorted
 *	array of integers, the beginning and ending indices of the section to search
 *	in, and a value to search for.
 *	It uses a recursive approach to find the first occurrence of a value in the
 *	array. The function divides the array into two halves, checks if the value
 *	is in the middle, the left half or the right half, and repeats the process
 *	until it finds the value or exhausts the search space.
 *
 * Return: Index where value is located, or the ending index if value is not
 *	present
 */
size_t check_index(int *arr, size_t beg, size_t end, int value)
{
	size_t index;

	print_arr(arr, beg, end);
	index = ((end - beg) / 2) + beg;

	/*printf("index: %li\n", index);*/

	if (index != 0 && arr[index - 1] == value)
		return check_index(arr, beg, index, value);
	else if (arr[index] == value || beg == end)
		return index;
	else if (arr[index] > value)
		return check_index(arr, beg, index - 1, value);
	else
		return check_index(arr, index + 1, end, value);
}

/**
 * print_arr - Prints a section of an array of integers
 * @array: Pointer to the first element of the array to print from
 * @beg: The beginning index of the array section to print
 * @end: The ending index of the array section to print
 *
 * Description: This function takes a pointer to the first element of an array
 *	of integers, and the beginning and ending indices of the section to print.
 *	It iterates over the specified section of the array and prints each
 *	element, separated by commas.
 */
void print_arr(int *array, size_t beg, size_t end)
{
	size_t index;

	index = beg;
	/*printf("beg: %li, end: %li\n", beg, end);*/
	printf("Searching in array: %i", array[index++]);
	for (; index <= end; index++)
		printf(", %i", array[index]);
	printf("\n");
}
