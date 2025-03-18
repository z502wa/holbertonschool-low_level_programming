#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - يعيد المؤشر للعملية
 * @s: رمز العملية
 *
 * Return: مؤشر الدالّة أو NULL
 *         إن كان الرمز غير صالح
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;

	return (ops[i].f);
}
