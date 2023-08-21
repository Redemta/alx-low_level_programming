#include "main.h"

/**
 * swap_int - wap value of two integers
 * @a: int to check
 * @b: int to check
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
