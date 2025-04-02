#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates a key in hex for crackme5 based on username
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *username;
	char key[6];
	int len, i;
	long sum = 0;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	username = argv[1];
	len = strlen(username);

	key[0] = username[0] ^ 59;
	key[1] = username[1] ^ 79;
	key[2] = username[2] ^ 85;

	for (i = 0; i < len; i++)
		sum += username[i];

	key[3] = (sum ^ 229) & 0xFF;
	key[4] = ((username[0] * username[1]) ^ 239) & 0xFF;
	key[5] = (username[0] ^ username[len - 1]) ^ 199;

	printf("Raw key: ");
	for (i = 0; i < 6; i++)
		printf("%c", key[i]);

	printf("\nHex key: ");
	for (i = 0; i < 6; i++)
		printf("%02x", (unsigned char)key[i]);

	printf("\n");

	return (0);
}
