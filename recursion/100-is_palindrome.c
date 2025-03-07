#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1)); /* Recursive call */
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end) /* Base case: reached middle of string */
	{
		return (1);
	}
	if (s[start] != s[end]) /* If characters do not match, not a palindrome */
	{
		return (0);
	}

	/* Recursive call moving towards the center */
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s); /* Get the length of the string */

	if (length == 0) /* An empty string is a palindrome */
	{
		return (1);
	}

	/* Call helper function to check for palindrome */
	return (check_palindrome(s, 0, length - 1));
}
