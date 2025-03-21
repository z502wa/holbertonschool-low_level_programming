/*
 * File: 3-print_all.c
 * Author: Your Name
 * Description: Function that prints anything based on format specifiers.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @args: Argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: Argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: Argument list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: Argument list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format
 * @format: List of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	fmt_t fmt_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (fmt_list[j].type)
		{
			if (format[i] == fmt_list[j].type)
			{
				printf("%s", separator);
				fmt_list[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
