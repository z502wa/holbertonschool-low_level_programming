#include "main.h"

/**
 * print_square - طباعة مربع باستخدام #
 * @size: حجم المربع المطلوب طباعته
 *
 * Return: لا شيء (void)
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n'); /* طباعة سطر جديد */
	}
}
