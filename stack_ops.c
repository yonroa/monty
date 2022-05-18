#include "monty.h"

/**
 * @brief 
 * 
 * 
 */
void push_stack(stack_t **stack, unsigned int number_line)
{
    char *num = strtok(NULL, "\n\t\r ");
    if (_isdigit(num) == -1)
    {
        fprintf(stderr, "L%u: usage: push integer\n", number_line);
        free_stacktint(stack);
        exit(EXIT_FAILURE);
    }
    if(!add_stackint(stack, atoi(num)))
    {
        fprintf(stderr, "Error: malloc failed\n");
        free_stacktint(stack);
		exit(EXIT_FAILURE);
    }
}

/**
 * @brief 
 *
 * 
 */
void pall_stack(stack_t **stack, unsigned int number_line)
{
    stack_t *copy;
    
    (void)(number_line);

    copy = *stack;
    print_stackint(copy);
}

/**
 * @brief 
 * 
 */
void pint_stack(stack_t **stack, unsigned int number_line)
{
    if (!*stack)
    {
        fprintf(stderr, "L<%u>: can't pint, stack empty", number_line);
        exit(EXIT_FAILURE);
    }
    printf("%i\n", (*stack)->n);

}

/**
 * @brief 
 * 
 */
void pop_stack(stack_t **stack, unsigned int number_line)
{ 
    if (!*stack)
    {
        fprintf(stderr, "L<%u>: can't pop an empty stack", number_line);
        exit(EXIT_FAILURE);
    }
    delete_stackint_at_index(stack, 0);
}

/**
 * @brief 
 *
 * 
 */
void nop_stack(stack_t **stack, unsigned int number_line)
{
    (void)(stack);
    (void)(number_line);
}