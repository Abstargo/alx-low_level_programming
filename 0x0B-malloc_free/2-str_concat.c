#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1_length;
	size_t s2_length;
	size_t result_length;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	result_length = s1_length + s2_length + 1;

	result = malloc(result_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);

}
