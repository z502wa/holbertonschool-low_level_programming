#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _print - Prints a string of digits, ignoring leading zeros.
 * @str: The string to print.
 * @l: The length of the string.
 *
 * Return: void.
 */
void _print(char *str, int l)
{
    int i, j;

    i = j = 0;
    while (i < l)
    {
        if (str[i] != '0')
            j = 1;
        if (j || i == l - 1)
            _putchar(str[i]);
        i++;
    }

    _putchar('\n');
    free(str);
}

/**
 * mul - Multiplies a single digit with a string of digits.
 * @n: The single digit to multiply.
 * @num: The string of digits to multiply.
 * @num_index: The last non-null index of num.
 * @dest: The destination array to store the result.
 * @dest_index: The starting index in dest for the result.
 *
 * Return: Pointer to dest, or NULL on failure.
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
    int j, k, mul, mulrem, add, addrem;

    mulrem = addrem = 0;
    for (j = num_index, k = dest_index; j >= 0; j--, k--)
    {
        mul = (n - '0') * (num[j] - '0') + mulrem;
        mulrem = mul / 10;
        add = (dest[k] - '0') + (mul % 10) + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }
    for (addrem += mulrem; k >= 0 && addrem; k--)
    {
        add = (dest[k] - '0') + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }
    if (addrem)
    {
        free(dest); /* Free memory in case of failure */
        return (NULL);
    }
    return (dest);
}

/**
 * check_for_digits - Checks if the arguments are valid digits.
 * @av: The array of arguments.
 *
 * Return: 0 if all arguments are digits, 1 otherwise.
 */
int check_for_digits(char **av)
{
    int i, j;

    for (i = 1; i < 3; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            if (av[i][j] < '0' || av[i][j] > '9')
                return (1);
        }
    }
    return (0);
}

/**
 * init - Initializes a string with '0' characters.
 * @str: The string to initialize.
 * @l: The length of the string.
 *
 * Return: void.
 */
void init(char *str, int l)
{
    int i;

    for (i = 0; i < l; i++)
        str[i] = '0';
    str[i] = '\0';
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or exit with status 98 on failure.
 */
int main(int argc, char *argv[])
{
    int l1, l2, ln, ti, i;
    char *a;
    char *t;
    char e[] = "Error\n";

    if (argc != 3 || check_for_digits(argv))
    {
        for (ti = 0; e[ti]; ti++)
            _putchar(e[ti]);
        exit(98);
    }
    for (l1 = 0; argv[1][l1]; l1++)
        ;
    for (l2 = 0; argv[2][l2]; l2++)
        ;
    ln = l1 + l2 + 1;
    a = malloc(ln * sizeof(char));
    if (a == NULL)
    {
        for (ti = 0; e[ti]; ti++)
            _putchar(e[ti]);
        exit(98);
    }
    init(a, ln - 1);
    for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
    {
        t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
        if (t == NULL)
        {
            for (ti = 0; e[ti]; ti++)
                _putchar(e[ti]);
            free(a); /* Free memory in case of failure */
            exit(98);
        }
    }
    _print(a, ln - 1);
    return (0);
}
