#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: Pointer to the input string.
 *
 * Description: Each letter is replaced with the letter 13 positions
 * after it in the alphabet. Non-alphabetic characters remain unchanged.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
