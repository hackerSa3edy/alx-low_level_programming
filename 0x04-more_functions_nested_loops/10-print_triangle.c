#include "main.h"

/**
 * print_triangle - draws a triangle.
 *
 * @size: size of the triangle.
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int counter;
	int SpCounter;
	int CharCounter;
	int startHash; 

	if (size > 0)
	{
		for (counter = 0; counter < size; counter++)
		{
			startHash = 0;
			for (SpCounter = 0; SpCounter < (size - counter - 1); SpCounter++)
			{
				_putchar(' ');
				startHash++;
			}
			for (CharCounter = 0; CharCounter < (size - startHash); CharCounter++)
			{
				_putchar('#');
			}
			if (counter != size - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
