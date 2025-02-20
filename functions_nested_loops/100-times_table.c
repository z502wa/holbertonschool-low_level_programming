#include "main.h"
#include <stdio.h>

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
					printf("%d", product);
				}
				else
				{
					printf(", ");
					if (product < 10)
					{
						printf("  %d", product);
					}
					else if (product < 100)
					{
						printf(" %d", product);
					}
					else
					{
						printf("%d", product);
					}
				}
			}
			printf("\n");
		}
	}
}
