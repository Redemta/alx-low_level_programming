#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: name of parameter.
 *
 * Return: The sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	int num;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}

