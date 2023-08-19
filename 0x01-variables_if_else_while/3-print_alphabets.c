#include <stdio.h>

/**
 * main - print alphabet in lower case, then uppercase followed by a new line.
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
