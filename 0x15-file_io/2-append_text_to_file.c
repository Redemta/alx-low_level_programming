#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of file to append text to.
 * @text_content: text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, result;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}
	result = write(file_desc, text_content, strlen(text_content));

	if (result == -1)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);
}
