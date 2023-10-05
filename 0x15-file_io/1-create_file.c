#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Pointer to the name of the file created.
 * @text_content: Pointer to the string to write in the file.
 *
 * Return: 1 on success, -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fdescriptor;
	size_t len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fdescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fdescriptor == -1)
	{
		perror("Error opening");
		return (-1);
	}
	chmod(filename, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fdescriptor, text_content, len);

		if (bytes_written == -1)
		{
			perror("Error writing to file");
			close(fdescriptor);
			return (-1);
		}
	}
	close(fdescriptor);

	return (1);
}
