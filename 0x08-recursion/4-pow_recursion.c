#include "main.h"

/**
 * _pow_recursion - function to return the value of x raised to the power of y.
 * @x: base input.
 * @y: exponent input.
 * Return: if y is lower than 0, -1.
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	result = x * _pow_recursion(x, y - 1);

	return (result);
}
