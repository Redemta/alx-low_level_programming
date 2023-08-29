#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to an array.
 * Return: Always void.
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column = 0;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
	}
	_putchar('\n');
	row++;
	}
}
