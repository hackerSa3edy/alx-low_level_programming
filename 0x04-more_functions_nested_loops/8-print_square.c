#include "main.h"

/**
 * print_square - draws a square.
 *
 * @size: size of the square.
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (height != size - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
