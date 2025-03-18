#include "3-calc.h"
#include <stdio.h>

/**
 * main - الدالّة الرئيسية للبرنامج
 * @argc: عدد الوسائط
 * @argv: مصفوفة الوسائط
 *
 * Return: 0 عند النجاح، أو ينتهي بخطأ حسب المطلوب
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    /* التحقق من عدد الوسائط */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* الحصول على الدالّة عبر الرمز */
    op_func = get_op_func(argv[2]);
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* التحقق من محاولة القسمة على صفر */
    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* إجراء العملية وطباعة النتيجة */
    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}
