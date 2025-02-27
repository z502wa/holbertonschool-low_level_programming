#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

{return dest; }
}
