#include "stdio.h"
#include "ctype.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		    *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		    *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		    *ptr == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && isalpha(*ptr))
		{
			*ptr = toupper(*ptr);
			capitalize = 0;
		}

		ptr++;
	}

	return (str);
}
