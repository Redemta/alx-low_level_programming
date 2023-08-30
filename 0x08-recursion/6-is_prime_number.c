#include "main.h"

/**
 * is_divisible - helper function.
 * @n: parameter value.
 * @divisor: value divisor.
 * Return: 0.
 */

int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - function that returns 1 when input is prime number.
 * @n: parameter input.
 * Return: 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (!is_divisible(n, 5));
}
