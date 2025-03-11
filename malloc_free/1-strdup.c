#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to duplicated string, or NULL if memory allocation fails
 * or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of str */
	while (str[len])
		len++;

	/* Allocate memory for duplicate string */
	dup = malloc((len + 1) * sizeof(char));

	/* Check if malloc failed */
	if (dup == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
