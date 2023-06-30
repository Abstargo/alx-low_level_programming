#include "stdio.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
