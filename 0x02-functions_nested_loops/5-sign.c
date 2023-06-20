#include <stdio.h>

int print_sign(int n);

int main(void)
{
    int num = -10;
    int sign = print_sign(num);
    printf("Sign: %d\n", sign);
    return (0);
}

int print_sign(int n)
{
    if (n > 0)
    {
        printf("+");
        return (1);
    }
    else if (n == 0)
    {
        printf("0");
        return (0);
    }
    else
    {
        printf("-");
        return (-1);
    }
}
