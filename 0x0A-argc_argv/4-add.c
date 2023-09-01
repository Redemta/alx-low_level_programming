#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int n;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		n = atoi(argv[i]);

		i++;

		if (n < 0)
		{
			break;
		}
		result += n;
	}
	printf("%d\n", result);

	return (0);
}
