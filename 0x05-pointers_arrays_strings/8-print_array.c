#include "main.h"

/**
 * print_array - print n elements of an array of integers.
 * @a: int to check
 * @n: number of elements of array
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

	if (x != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
