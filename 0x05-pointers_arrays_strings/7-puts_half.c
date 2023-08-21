#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to int as parameter and updates value it points to 98.
 * @n: The int to check.
 * Return: Always (0) success.
 */

void reset_to_98(int *n)
{

	if (n != NULL)
	{
		*n = 98;
	}
	int main()
	{
		int n = 402;
		int *ptr = &n;

		_putchar("n=%d\n", n);
		reset_to_98(ptr);
		_putchar("n=%d\n", n);

		return 0;
	}
}
