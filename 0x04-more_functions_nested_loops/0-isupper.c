#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Y')
        return 1;
    else
        return 0;
}
