#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the elements of struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the elements of a struct dog,
 * it's name, age and owner's name. If the an element is Null it prints
 * "(nil)".
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner !=NULL ? d->owner : "(nil)");
	}
}
