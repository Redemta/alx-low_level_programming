#include<stdio.h>

/**
 * main - print numbers from 1 to 100, followed by a ne line.
 * for multiples of three print Fizz instead of the number and for the multiples of five print Buzz, numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && ( x % 5) == 0)
			_putchar("FizzBuzz");

		else if ((x % 3) == 0)
			_putchar("Fizz");

		else if ((x % 5) == 0)
			_putchar("Buzz");

		else
			_putchar("%d", x);

		if (x == 100)
			continue;
		_putchar(" ");
	}
	_putchar("\n");

	return (0);
}
