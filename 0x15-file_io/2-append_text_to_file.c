#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Pointer to the name of file created.
 * @text_content: Pointer to the string to write the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	ssize_t bytes_written;
	int fdescriptor;

	if (filename == NULL)
	{
		return (-1);
	}
	fdescriptor = open(filename, O_WRONLY | O_APPEND);

	if (fdescriptor == -1)
	{
		perror("Error opening file");
		return (-1);
	}
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
