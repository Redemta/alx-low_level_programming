#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to string to represent file name.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	int i;
	size_t lettersNum = 0;

	if (filename == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		return (0);
	}
	while (lettersNum < letters && !feof(file))
	{
		i = fgetc(file);

		if (i == EOF)
		{
			break;
		}
		putchar(i);
		lettersNum++;
	}
	fclose(file);

	return (lettersNum);
}
