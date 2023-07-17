#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to free
 *
 * Description: This function frees the memory
 */

void free_dog(dog_t *d)
{
		free(d->name);
		free(d->owner);
		free(d);
}
