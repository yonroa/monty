#include "monty.h"

void swap_stack(stack_t **stack, unsigned int number_line)
{
    stack_t *tmp = *stack;
    int copy;

    if (!tmp || !tmp->next)
    {
        fprintf(stderr, "L<%u>: can't swap, stack too short\n", number_line);
        exit(EXIT_FAILURE);
    }
    copy = tmp->n;
    tmp->n = tmp->next->n;
    tmp->next->n = copy;
}

/**
 * 
 * 
 */
void add_stack(stack_t **stack, unsigned int number_line)
{
    stack_t *tmp = *stack;

    if (!tmp || !tmp->next)
    {
        fprintf(stderr, "L<%u>: can't add, stack too short\n", number_line);
        exit(EXIT_FAILURE);
    }
    tmp->next->n = tmp->next->n + tmp->n;
    delete_stackint_at_index(stack);
}