#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to newly allocated space in memory containing s1,
 * followed by the first n bytes of s2, and null terminated.
 * If malloc fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		while (s1[len1])
			len1++;
	if (s2 != NULL)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
