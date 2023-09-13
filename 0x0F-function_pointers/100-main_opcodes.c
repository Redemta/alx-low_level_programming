#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int numBytes;
	unsigned char opcodes[] = {
		0x90, 0x48, 0x89, 0xe5, 0xb8, 0x01, 0x00, 0x00, 0x00, 0xc3
	};
	int numOpcodes = sizeof(opcodes) / sizeof(opcodes[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < numOpcodes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");

	return (0);
}
