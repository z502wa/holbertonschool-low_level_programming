#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 *
 * Description: This function takes a string as input and counts
 * the number of characters until it reaches the null terminator '\0'.
 * It returns the length of the string (excluding '\0').
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0') /* Iterate through the string */
	{
		length++;
	}

	return (length);
}

