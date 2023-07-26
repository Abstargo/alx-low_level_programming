#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
