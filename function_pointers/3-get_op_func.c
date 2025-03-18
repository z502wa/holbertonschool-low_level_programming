#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - تُعيد مؤشرًا للدالّة التي تجري العملية المطلوبة
 * @s: رمز العملية المرغوبة (+, -, *, /, %)
 *
 * Return: مؤشر للدالّة المناسبة أو NULL إذا لم توجد مطابقة
 */
int (*get_op_func(char *s))(int, int)
{
    /* مصفوفة تراكيب تضم رمز العملية والمؤشر للدالّة */
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    /* استخدام while واحدة مع if واحدة داخلها فقط */
    while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
        i++;

    return (ops[i].f);
}
