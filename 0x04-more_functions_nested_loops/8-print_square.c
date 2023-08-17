#include "main.h"

/**
 * print_square - print square followed by a new line
 * @size: is the size of the square
 * Return: if size is 0 0r less, print only a new line.
 */

void print_square(int size)
{
	int x;
	int y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
