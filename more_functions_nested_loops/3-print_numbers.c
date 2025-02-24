#include "main.h"

/**
 * print_numbers - Prints the digits 0 through 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n'); /* New line after printing numbers */
}
