#include "main.h"

/**
 * reverse_array - reverse content of an array of integers.
 * @a: array to be reversed.
 * @n: number of elements of array.
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int k = a[i];

		a[i] = a[j];
		a[j] = k;

		i++;
		j--;
	}
}
