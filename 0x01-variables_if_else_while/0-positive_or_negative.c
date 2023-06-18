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
	srand(time(NULL)); /* Initialize random seed */

	int n = rand() % RAND_MAX; /* Generate a random number */

	printf("The number %d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}

	printf("\n");

	return (0);
}
