#include "main.h"

/**
 * print_number - طباعة عدد صحيح باستخدام _putchar
 * @n: العدد المطلوب طباعته
 *
 * Return: لا شيء (void)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
