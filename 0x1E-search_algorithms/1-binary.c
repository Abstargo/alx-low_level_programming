#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search to
 * search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located, or -1 if it's not present
 */
int binary_search(int *array, size_t size, int value)
{

	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
			{
				printf("%d, ", array[i]);
			}
		}

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
