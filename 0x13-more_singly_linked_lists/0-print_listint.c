#include "lists.h"

/**
 * print_listiin - Print all elements of a listint_t list
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h!= NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
