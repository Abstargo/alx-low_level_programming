#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function that will print the name.
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
