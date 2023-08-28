#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @arr: array of chessboard.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*arr)[8])
{
	int index1, index2;

	for (index1 = 0; index1 < 8; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			_putchar(arr[index1][index2]);
		}
		_putchar('\n');
	}
}
