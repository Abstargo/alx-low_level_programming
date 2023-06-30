#include "stdio.h"

/**
 * _strncpy - Copies a string from src to dest, up to n characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
