#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 * position in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node. Index starts at 0.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	listint_t *current = *head;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;

			return (new_node);
		}

		current = current->next;
		count++;
	}

	free(new_node);

	return (NULL);
}
