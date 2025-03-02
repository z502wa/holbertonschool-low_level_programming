#include "main.h"

/**
 * _memset - تملئ الذاكرة بقيمة معينة
 * @s: مؤشر إلى بداية الذاكرة المراد تعبئتها
 * @b: القيمة التي سيتم تعبئة الذاكرة بها
 *     (بايت واحد)
 * @n: عدد البايتات التي سيتم تعبئتها
 *
 * Return: مؤشر إلى الذاكرة بعد تعبئتها
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
