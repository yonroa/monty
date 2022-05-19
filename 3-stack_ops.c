#include "monty.h"

/**
 * mod_stack - computes the rest of the division of the
 * second top element of the stack by the top
 * element of the stack
 * @stack: the stack to be analize 
 * @number_line: the number line
 * Return: the new stack 
 */
void mod_stack(stack_t **stack, unsigned int number_line)
{
    stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
    if (tmp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", number_line);
		exit(EXIT_FAILURE);
	}
	tmp->next->n = tmp->next->n % tmp->n;
	delete_stackint_at_index(stack);
}
