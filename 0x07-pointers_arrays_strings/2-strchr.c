#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurrence of the character @c in the string @s,
 *         or 0 if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
