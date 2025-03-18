#include <stdio.h>
#include <stdlib.h>

/**
 * main - يطبع الـ opcodes الخاصة بدالة main الخاصة به
 * @argc: عدد الوسائط
 * @argv: مصفوفة الوسائط
 *
 * Return: 0 عند النجاح، أو خطأ مع كود خروج مناسب
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
