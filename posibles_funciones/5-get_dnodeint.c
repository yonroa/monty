#include "lists.h"

/**
 * get_dnodeint_at_index - returns the n the node of a dlistint_t linked list
 * @head: First node
 * @index: node to be searched
 * Return: The node if it is founded or NULL if is not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int idx = 0;

	while (current)
	{
		if (idx == index)
			return (current);
		current = current->next;
		idx++;
	}
	return (NULL);
}
