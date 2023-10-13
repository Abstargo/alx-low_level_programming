#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *prev = NULL;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    temp = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    for (i = 0; i < index; i++)
    {
        if (temp == NULL)
            return (-1);
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return (-1);

    prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = prev;
    free(temp);

    return (1);
}