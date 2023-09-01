#include "main.h"

/**
 * main - program that prints the number of arguments passed.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always (0).
 */

int main(int argc, char *argv[])
{
	int num;

	(void)argv;
	num = argc - 1;

	printf("%d\n", num);

	return (0);
}
