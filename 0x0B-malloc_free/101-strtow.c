#include "main.h"

/**
 * word_length - locate index and mark end of first word.
 * @str: string parameter.
 * Return: index marking end of first word.
 */

int word_length(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * count_words - count no of words within a string.
 * @str: tring parameter.
 * Return: the no of words within the string.
 */

int count_words(char *str)
{
	int index = 0, length = 0, words = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			index += word_length(str + index);
			words++;
		}
	}
	return (words);
}

/**
 * strtow -  function returns a pointer to an array of strings.
 * @str: string to split.
 * Return: if str = NULL, function fails or str = "".
 */

char **strtow(char *str)
{
	int index = 0, words, w, letters, l;
	char **strings;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_length(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
