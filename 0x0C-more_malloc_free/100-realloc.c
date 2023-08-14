#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the previously allocated memory
 * @new_size: Size of the memory block in bytes
 *
 * Return: Pointer to the reallocated memory block
 *
 * If anything fail it will return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		memcpy(new_ptr, ptr, new_size);
	else
		memcpy(new_ptr, ptr, old_size);

	free(ptr);
	return (new_ptr);
}
