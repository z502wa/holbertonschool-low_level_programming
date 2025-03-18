#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - بنية للعملية
 * @op: رمز العملية (+, -, *, /, %)
 * @f: دالّة تُنفذ العملية
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* دوال العمليات الحسابية */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* ترجع المؤشر لدالّة العملية */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
