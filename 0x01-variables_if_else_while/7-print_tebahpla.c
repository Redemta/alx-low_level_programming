#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
