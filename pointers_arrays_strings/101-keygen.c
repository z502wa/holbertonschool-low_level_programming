#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, n;
	char password[100];

	srand(time(0));

	for (int i = 0; sum < 2772 - 122; i++)
	{
		n = rand() % 94 + 33; /* Generate printable ASCII characters */
		password[i] = n;
		sum += n;
	}

	password[sum - (2772 - 122)] = (2772 - sum);
	password[sum - (2772 - 122) + 1] = '\0';

	printf("%s", password);
	return (0);
}
