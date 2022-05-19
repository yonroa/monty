#include "monty.h"

/**
 * print_stackint - print all the elements of the nodes
 * @h: First node
 * Return: The number of nodes
 */
size_t print_stackint(const stack_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

/**
 * add_stackint - Adds a new node at the beginning of a stack_t list
 * @head: first node
 * @n: element for the new node
 * Return: The address of the new element, or NULL if it failed
 */
stack_t *add_stackint(stack_t **head, const int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	*head = new;
	return (new);
}

/**
 * add_stackint_end - adds a new node at the end of a stack_t list
 * @head: First node
 * @n: Element for the new node
 * Return: the address of the new element, or NULL if it failed
 */
stack_t *add_stackint_end(stack_t **head, const int n)
{
	stack_t *new = NULL;
	stack_t *current = *head;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}

/**
 * delete_stackint_at_index - deletes the node at index index of a stack_t
 * @head: First node
 * @index: Position of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
void delete_stackint_at_index(stack_t **head)
{
	stack_t *current = *head;

	if (*head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(current);
	}
}
