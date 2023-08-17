#include "main.h"

/**
 * print_triangle - print triangle followed by a new line.
 * @size: size of the triangle.
 * Return: if size is 0 or less print only new line.
 */

void print_triangle(int size)
{
	int i;
	int j;
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
