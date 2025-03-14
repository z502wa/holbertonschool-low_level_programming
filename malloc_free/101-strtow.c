#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
			count++;
		i++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of words, or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, word_len, num_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = word_count(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (j = 0; j < num_words; j++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;
		words[j] = malloc(sizeof(char) * (word_len + 1));
		if (words[j] == NULL)
		{
			while (j--)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			words[j][k] = str[i++];
		words[j][k] = '\0';
	}
	words[num_words] = NULL;
	return (words);
}
