#include "main.h"

/**
 * handle_error - function to handle error.
 * @file_from: File to copy from.
 * @file_to: File to copy to.
 * @argv: argument vector.
 */

void handle_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't writr to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: on success, 0.
 */

int main(int argc, char *argv[])
{
	ssize_t charCount, wrCount;
	int init_file, curr_file, error;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	init_file = open(argv[1], O_RDONLY);
	curr_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error(init_file, curr_file, argv);

	charCount = 1024;

	while (charCount == 1024)
	{
		charCount = read(init_file, buffer, 1024);
		if (charCount == -1)
			handle_error(-1, 0, argv);

		wrCount = write(curr_file, buffer, charCount);
		if (wrCount == -1)
			handle_error(0, -1, argv);
	}
	error = close(init_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", init_file);
		exit(100);
	}
	error = close(curr_file);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", curr_file);
		exit(100);
	}
	return (0);
}
