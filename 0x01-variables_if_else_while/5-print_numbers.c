#include <stdio.h>

/**
 * main - print digit numbers of base 10, followed by a new line
 *
 * Return: Always (0) success.
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
