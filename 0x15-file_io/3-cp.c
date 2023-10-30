#include "main.h"

/**
 * check_status - check if a file can be opened or closed.
 * @status: fd of file to open.
 * @file_desc: The file descritor.
 * @filename: The name of file.
 * @mode: check if its opening or closing.
 *
 * Return: void.
 */

void check_status(int status, int file_desc, char *filename, char mode)
{
	if (mode == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
	else if (mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - entry point.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: 1 if successful, else exit.
 */

int main(int argc, char *argv[])
{
	int init_file, dest_file, bytes_read = 1024, bytes_written;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	init_file = open(argv[1], O_RDONLY);
	check_status(init_file, -1, argv[1], 'O');
	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_status(dest_file, -1, argv[2], 'W');

	while (bytes_read == 1024)
	{
		bytes_read = read(init_file, buffer, 1024);
		check_status(bytes_read, -1, argv[1], 'O');

		if (bytes_read > 0)
		{
			bytes_written = write(dest_file, buffer, bytes_read);
			check_status(bytes_written, -1, argv[2], 'W');
		}
	}
	check_status(close(init_file), init_file, argv[1], 'C');
	check_status(close(dest_file), dest_file,  argv[2], 'C');

	return (0);
}
