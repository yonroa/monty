#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: First node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head != NULL)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}
