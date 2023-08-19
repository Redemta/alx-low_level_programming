#include <stdio.h>

/**
 * main - print numbers of base 10, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
