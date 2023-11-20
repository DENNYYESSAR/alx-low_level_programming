#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = (*head)->next;

	while (temp != NULL && i < index - 1)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
