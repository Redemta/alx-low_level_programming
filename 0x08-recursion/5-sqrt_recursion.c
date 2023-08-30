#include "main.h"

/**
 * _sqrt_recursion_helper - the helper function.
 * @guess: initial guess.
 * @n: parameter input.
 * Return: guess.
 */

int _sqrt_recursion_helper(int n, int guess)
{
	int nextGuess;

	nextGuess = (guess + n / guess) / 2;

	if (nextGuess * nextGuess == n)
	{
		return (nextGuess);
	}
	else if (nextGuess >= guess)
	{
		return (guess);
	}

	return (_sqrt_recursion_helper(n, nextGuess));
}

/**
 * _sqrt_recursion - function that returns natural square root of a number.
 * @n: parameter input.
 * Return: If n does not have a natural square root, return -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_helper(n, n));
}
