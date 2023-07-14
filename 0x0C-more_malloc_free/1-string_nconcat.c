#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to be concatenated
 *
 * Return: Pointer to the newly allocated concatenated string
 * If the function fails or if NULL is passed, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[s1_len] != '\0')
		s1_len++;

	/* Calculate the length of s2 */
	while (s2[s2_len] != '\0')
		s2_len++;

	/* Adjust n if it's greater than or equal to s2 length */
	if (n >= s2_len)
		n = s2_len;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (s1_len + n + 1));

	if (concatenated == NULL)
		return NULL;

	/* Copy s1 into concatenated */
	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	/* Copy n bytes from s2 into concatenated */
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0'; /* Null-terminate the string */

	return concatenated;
}

