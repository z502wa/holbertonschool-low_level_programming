#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number defining the times table range
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
				{
					_putchar(product + '0');  /* طباعة الرقم الأول بدون مسافات */
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					/* تنسيق الأرقام بحيث تظهر بشكل صحيح */
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					else if (product < 100)
					{
						_putchar(' ');
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
					else
					{
						_putchar((product / 100) + '0');
						_putchar(((product / 10) % 10) + '0');
						_putchar((product % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
