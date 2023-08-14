#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MESSAGE "Error"

/**
 * is_digit - checks if a string contains only digits
 * @str: string to be evaluated
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * print_error - handles errors and exits the program with status 98
 */
void print_error(void)
{
	printf("%s\n", ERROR_MESSAGE);
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *strNum1, *strNum2;
	int lenNum1, lenNum2, totalLen, i, carry, digit1, digit2, *result, isFirstDigit = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	strNum1 = argv[1];
	strNum2 = argv[2];
	lenNum1 = _strlen(strNum1);
	lenNum2 = _strlen(strNum2);
	totalLen = lenNum1 + lenNum2 + 1;

	result = malloc(sizeof(int) * totalLen);
	if (!result)
		return (1);

	for (i = 0; i <= lenNum1 + lenNum2; i++)
		result[i] = 0;

	for (lenNum1 = lenNum1 - 1; lenNum1 >= 0; lenNum1--)
	{
		digit1 = strNum1[lenNum1] - '0';
		carry = 0;
		for (lenNum2 = _strlen(strNum2) - 1; lenNum2 >= 0; lenNum2--)
		{
			digit2 = strNum2[lenNum2] - '0';
			carry += result[lenNum1 + lenNum2 + 1] + (digit1 * digit2);
			result[lenNum1 + lenNum2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[lenNum1 + lenNum2 + 1] += carry;
	}

	for (i = 0; i < totalLen - 1; i++)
	{
		if (result[i])
			isFirstDigit = 1;
		if (isFirstDigit)
			_putchar(result[i] + '0');
	}

	if (!isFirstDigit)
		_putchar('0');
	_putchar('\n');

	free(result);
	return (0);
}
