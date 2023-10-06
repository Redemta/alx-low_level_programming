#include "main.h"

/**
 * read_textfile - function to read a text file and print it to the POSIX stdo
 * @filename: String to represent file to be read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fdescriptor;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);
	fdescriptor = open(filename, O_RDONLY);

	if (fdescriptor == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	bytes_read = read(fdescriptor, buff, letters);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	close(fdescriptor);
	free(buff);

	return (bytes_written);
}
