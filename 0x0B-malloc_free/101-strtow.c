#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * count_words - Counts the number of words in a string
 *
 * @str: string to count words in
 *
 * Return: number of words in str
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
		{
			++count;
		}
	}
	return (count);
}
/**
 * strtow - Splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings/words, or NULL if failed.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; j < word_count; ++j)
	{
		while (str[i] == ' ')
		{
			++i;
		}

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
		{
			++len;
		}

		words[j] = malloc((len + 1) * sizeof(char));

		if (words[j] == NULL)
		{
			for (k = 0; k < j; ++k)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}

		strncpy(words[j], str + i, len);
		words[j][len] = '\0';
		i += len;
	}
	words[j] = NULL;
	return (words);
}
