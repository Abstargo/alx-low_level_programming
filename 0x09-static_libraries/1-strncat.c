#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tbs = dest;

	while (*tbs != '\0')
	{
		tbs++;
	}

	while (*src != '\0' && n > 0)
	{
		*tbs = *src;
		tbs++;
		src++;
		n--;
	}

	*tbs = '\0';

	return (dest);
}
