#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always (0)
 */

int main(void)
{
	char x = '0';
	char y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
