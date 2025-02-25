#include "main.h"

/**
 * print_triangle - طباعة مثلث باستخدام #
 * @size: حجم المثلث المطلوب طباعته
 *
 * Return: لا شيء (void)
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			/* طباعة المسافات */
			for (spaces = size - i; spaces > 0; spaces--)
				_putchar(' ');

			/* طباعة الرمز # */
			for (j = 0; j < i; j++)
				_putchar('#');

			_putchar('\n'); /* الانتقال لسطر جديد */
		}
	}
	else
	{
		_putchar('\n'); /* طباعة سطر جديد */
	}
}
