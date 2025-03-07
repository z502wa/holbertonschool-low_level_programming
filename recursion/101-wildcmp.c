#include "main.h"

/**
 * wildcmp - Compares two strings allowing for wildcard '*' in s2
 * @s1: The first string
 * @s2: The second string, which may contain the wildcard '*'
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* Base case: both strings end */
	{
		return (1);
	}
	if (*s2 == '*') /* Handling wildcard '*' */
	{
		if (*(s2 + 1) == '\0') /* If '*' is at the end, it matches everything */
		{
			return (1);
		}
		if (*s1 == '\0') /* If s1 ends but s2 has '*', continue matching */
		{
			return (wildcmp(s1, s2 + 1));
		}
		/* '*' matches either empty or consumes one char from s1 */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2) /* If characters match, continue */
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0); /* Strings do not match */
}
