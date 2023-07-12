#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
		return (NULL);


	length = strlen(str) + 1;

	duplicate = malloc(length * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	return (strcpy(duplicate, str));
}
