#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>

/**
 * rand - return known value everytime
 *
 * Return: int
 */
int rand(void)
{
	static int custom_values[] = {8, 8, 7, 9, 23, 74};
	static int counter;

	if (counter >= 6)
	{
		counter = 0;
	}

	return (custom_values[counter++]);
}
