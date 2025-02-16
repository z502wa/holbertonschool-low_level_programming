#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 122; ch >= 97; ch--) /* ASCII 122 = 'z' ، ASCII 97 = 'a' */
putchar(ch);
putchar('\n'); /* طباعة سطر جديد */
return (0);
}
