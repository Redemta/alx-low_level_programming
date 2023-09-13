#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers.
 * @a: number one.
 * @b: number two.
 * Return: sum of the two numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of the two numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of the two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers.
 * @a: first number.
 * @b: second number.
 * Return: result of division of the two numbers.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division of the two numbers.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
