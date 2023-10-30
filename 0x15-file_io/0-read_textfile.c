#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to string to represent file name.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_write;
	int file_desc;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	bytes_read = read(file_desc, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	close(file_desc);
	free(buffer);
	return (bytes_read);
}
