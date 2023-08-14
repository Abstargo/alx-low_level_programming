#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return : Pointer to the allocated memory
 * if anything fails it returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
