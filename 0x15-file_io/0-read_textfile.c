#include "main.h"

/**
 * read_textfile - function to read a text file and print it to the POSIX stdo
 * @filename: String to represent file to be read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int i;
	ssize_t bytes_read, bytes_written;

	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (-1);
	}
	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(i);
		return (-1);
	}
	bytes_read = read(i, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(i);
		return (-1);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
		free(buffer);
		close(i);
		return (-1);
	}
	free(buffer);

	if (close(i) == -1)
	{
		return (-1);
	}
	return (bytes_written);
}
