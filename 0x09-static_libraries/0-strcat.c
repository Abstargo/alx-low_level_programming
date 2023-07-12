#include "stdio.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *tbs = dest;

	while (*tbs != '\0')
	{
		tbs++;
	}

	while (*src != '\0')
	{
		*tbs = *src;
		tbs++;
		src++;
	}

	*tbs = '\0';

	return (dest);
}
