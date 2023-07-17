#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a struct dog variable
 * @d: Pointer to the struct dog variable to initialize
 * @name: the name of the dog
 * @age: Age of the dog
 * @owner: owner's name
 *
 * Description: the function initialize the members of a struct
 * dog variables with it's name, age and owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
