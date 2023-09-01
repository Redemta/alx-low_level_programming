#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x = 0;

	printf("%d\n", argc);

	while (x < argc)
	{
		printf("%d: %s\n", x, argv[x]);
		x++;
	}
	return (0);
}
