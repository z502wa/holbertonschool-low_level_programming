#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function swaps characters from both ends
 * of the string until the middle is reached.
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from both ends */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

