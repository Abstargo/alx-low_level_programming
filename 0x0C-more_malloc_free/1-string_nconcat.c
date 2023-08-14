#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to be concat
 *
 * Return: Pointer to the newly allocated concat string
 * If The function fails it's gonna return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, i, j;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;

	if (n >= s2_length)
		n = s2_length;

	con = malloc(sizeof(char) * (s1_length + n + 1));

	if (con == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		con[i] = s1[i];

	for (j = 0; j < n; j++)
		con[i + j] = s2[j];

	con[i + j] = '\0';

	return (con);
}
