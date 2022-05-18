#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Fisrt node
 * @idx: Position to insert the node
 * @n: Element of the new node
 * Return: The address otf the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current)
	{
		if (index == (idx - 1))
		{
			if (!current->next)
				return (add_dnodeint_end(h, n));
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		index++;
		current = current->next;
	}
	return (NULL);
}
