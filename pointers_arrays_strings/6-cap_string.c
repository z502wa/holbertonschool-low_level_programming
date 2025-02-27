#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
char separators[] = " \t\n,;.!?\"(){}";
int j;

while (str[i])
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
else
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
break;
}
}
}
i++;
}
{return str; }
}
