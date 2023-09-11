#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the name of the file it was compiled from.
 *
 * Return: Always (0).
 */

int main(void)
{
	const char *f_name = __FILE__;

	printf("%s\n", f_name);

	return (0);
}
