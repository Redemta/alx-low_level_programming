#include <stdio.h>

/**
 * main - print alphabet in lowercase, except q and e, followed by a new line.
 *
 * Return: Always (0)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

