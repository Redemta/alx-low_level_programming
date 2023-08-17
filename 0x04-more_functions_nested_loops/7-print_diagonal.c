#include "main.h"

/**
 * print_diagonal - draw diagonal line.
 * @n: number of times to draw.
 * Return: if n is 0 or less, only print \n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == i)
				_putchar('\\');
				else if (j < i)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
