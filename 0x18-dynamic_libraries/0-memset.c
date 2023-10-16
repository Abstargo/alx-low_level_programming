#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills the memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}
