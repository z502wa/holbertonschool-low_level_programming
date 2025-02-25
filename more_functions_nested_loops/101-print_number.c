#include "main.h"

/**
 * print_number - طباعة عدد صحيح باستخدام _putchar
 * @n: العدد المطلوب طباعته
 *
 * Return: لا شيء (void)
 */
void print_number(int n)
{
	/* معالجة حالة INT_MIN لتجنب تجاوز النطاق */
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	/* معالجة الأعداد السالبة */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* طباعة العدد باستخدام الاستدعاء الذاتي */
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
