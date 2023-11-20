#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		free(temp);

		if (temp <= current)
			break;
	}

	*h = NULL;

	return (size);
}
