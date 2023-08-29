#include "main.h"

/**
 * print_diagsums - function that prints sum of two diagonals of square matrix.
 * @a: pointer to start matrix.
 * @size: size of matrix.
 * Return: Always void.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int main = 0;
	int secondary = 0;

	while (i < size)
	{
		main += a[i * size + i];
		secondary += a[i * size + size - i - 1];
		i++;
	}
	int divisor = 1;
	while (main / divisor > 0)
	{
		int digit = (main / divisor) % 10;
		_putchar('0' + digit);
		divisor *= 10;
	}
	_putchar('\n');

	divisor = 1;
	while (secondary / divisor > 0)
	{
		int digit = (secondary / divisor) % 10;
		_putchar('0' + digit);
		divisor *= 10;
	}
	_putchar('\n');
}
