#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int num;
    unsigned int num_c;
    int num_digits, divisor, j;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        num = va_arg(args, int);
        num_c = (num < 0) ? -num : num;
        num_digits = 0;
        divisor = 1;

        if (num == 0)
        {
            num_digits = 1;
        }
        else
        {
            while (num_c != 0)
            {
                num_c /= 10;
                num_digits++;
            }
        }

        if (num < 0)
        {
            _putchar('-');
            num = -num;
        }

        for (j = 1; j < num_digits; j++)
            divisor *= 10;

        while (divisor != 0)
        {
            int digit = num / divisor;
            _putchar('0' + digit);
            num %= divisor;
            divisor /= 10;
        }

        if (i != n - 1 && separator != NULL)
        {
            while (*separator != '\0')
            {
                _putchar(*separator);
                separator++;
            }
        }
    }

    va_end(args);

    _putchar('\n');
}
