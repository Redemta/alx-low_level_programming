#include "main.h"

/**
 * read_textfile - function to read a text file and print it to the POSIX stdo
 * @filename: String to represent file to be read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytesRead;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead != letters)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[bytesRead] = '\0';
	printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (bytesRead);
}
