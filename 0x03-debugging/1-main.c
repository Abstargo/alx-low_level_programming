#include <stdio.h>

/**
 * main - avoids an infinite loop
 * Return: 0
 */

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    // Commented out the code causing the infinite loop
    /*
    while (i < 10)
    {
        putchar(i + '0');
        i++;
    }
    */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
