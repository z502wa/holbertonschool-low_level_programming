#include "main.h"

/**
* _strncat - concatenates at most n bytes from src to dest
* @dest: destination string
* @src: source string
* @n: number of bytes to concatenate from src
* Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

while (dest[dest_len] != '\0')
dest_len++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
