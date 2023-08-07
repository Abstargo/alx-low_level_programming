#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * Coins - Calculates the minimum number of coins.
 * @amount: The amount for which to make change.
 *
 * Description: This function calculate the minimum number
 * of coins needed to make change for the given amount
 * using a predifined set of coin values.
 */

void Coins(int amount)
{

	int coin[] = {25, 10, 5, 2, 1};
	int total = 0;
	int i;

	if (amount < 0)
	{
		printf("0\n");
		return;
	}

	for (i = 0; i < (int)(sizeof(coin) / sizeof(coin[0])); i++)
	{
		while (amount >= coin[i])
		{
			amount -= coin[i];
			total++;
		}
	}

	printf("%d\n", total);
}

/*
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 on success, 1 on error.
 *
 * Description: This function serves as the entry point of the programi.
 * It receives a single command-line argument indicating an amount
 * and invokes the Coins function to determine the minimum number of coins
 * required to make change for that amount
 */

int main(int argc, char *argv[])
{
	
	int amount;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	Coins(amount);

	return (0);
}
