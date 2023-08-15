#include "main.h"

/**
 * _abs - compute the absolute value
 * @i: the number to check
 * Return: absolute value or zero
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
