#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_positive_number - Checks if a string contains only positive digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string contains only positive digits, 0 otherwise.
 */
int is_positive_number(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{

    char *num1;
    char *num2;
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_positive_number(num1) || !is_positive_number(num2))
    {
        printf("Error\n");
        return (98);
    }

    result = atoi(num1) * atoi(num2);
    printf("%d\n", result);

    return (0);
}
