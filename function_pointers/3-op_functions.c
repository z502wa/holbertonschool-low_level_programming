#include "3-calc.h"

/**
 * op_add - جمع عددين
 * @a: العدد الأول
 * @b: العدد الثاني
 *
 * Return: ناتج الجمع
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - طرح عددين
 * @a: العدد الأول
 * @b: العدد الثاني
 *
 * Return: ناتج الطرح
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - ضرب عددين
 * @a: العدد الأول
 * @b: العدد الثاني
 *
 * Return: ناتج الضرب
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - قسمة عددين
 * @a: العدد الأول
 * @b: العدد الثاني
 *
 * Return: ناتج القسمة
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - باقي قسمة عددين
 * @a: العدد الأول
 * @b: العدد الثاني
 *
 * Return: ناتج باقي القسمة
 */
int op_mod(int a, int b)
{
    return (a % b);
}
