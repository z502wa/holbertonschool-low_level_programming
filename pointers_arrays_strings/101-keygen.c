#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for `101-crackme`.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, n;
	int i = 0; /* تم تعريف i خارج الحلقة */
	char password[100];

	srand(time(0));

	/* توليد أحرف عشوائية بحيث يكون مجموعها 2772 */
	while (sum < 2772 - 122)
	{
		n = rand() % 94 + 33; /* توليد حرف ASCII قابل للطباعة */
		password[i] = n;
		sum += n;
		i++;
	}

	/* التأكد من أن المجموع النهائي هو 2772 */
	password[i] = (2772 - sum);
	password[i + 1] = '\0';

	printf("%s", password);
	return (0);
}
