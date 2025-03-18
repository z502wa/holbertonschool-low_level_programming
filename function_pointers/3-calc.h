#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - بنية بيانات خاصة بالعمليات
 * @op: رمز العملية (+, -, *, /, %)
 * @f: دالّة تؤدي العملية
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* الدوال الأساسية للعمليات الحسابية */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* دالّة تجلب المؤشر إلى الدالّة المطلوبة */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
