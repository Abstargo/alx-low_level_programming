#include <stdio.h>

/**
 * array_iterator - Executes a function on each element.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
