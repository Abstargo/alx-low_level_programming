#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(NULL)); /* Initialize random seed */
    n = rand(); /* Generate a random number */

    lastDigit = n % 10; /* Extract the last digit of n */

    printf("Last digit of %d is ", n);

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0", lastDigit);
    }
    else
    {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    printf("\n");

    return (0);
}
