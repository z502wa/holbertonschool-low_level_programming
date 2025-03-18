#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char * as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
