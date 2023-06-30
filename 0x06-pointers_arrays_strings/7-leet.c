#include "stdio.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leetLetters = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		j = 0;
		while (leetLetters[i] != '\0')
		{
			if (*ptr == leetLetters[i])
			{
				*ptr = leetReplacements[j];
				break;
			}
			i++;
			j++;
		}
		ptr++;
	}

	return (str);
}
