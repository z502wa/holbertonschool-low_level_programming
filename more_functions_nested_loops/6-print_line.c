#include "main.h"

/**
 * print_line - طباعة خط مستقيم باستخدام '_'
 * @n: عدد المرات التي يتم فيها طباعة '_'
 *
 * Return: لا شيء (void)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n'); /* طباعة سطر جديد */
}
