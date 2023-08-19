#include <stdio.h>

/**
 * main - print digit numbers of base 10, followed by a new line
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int x = 0;

	while (x <= 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
