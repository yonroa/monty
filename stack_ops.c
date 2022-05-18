#include "monty.h"

/**
 * @brief 
 * 
 * 
 */
void push(stack_t stack, unsigned int number_line)
{
    char *num = strtok(NULL, "\n\t\r ");
    if(!add_stackint(&stack, atoi(num)))
    {
        fprintf(stderr, "L%u: usage: push integer\n", number_line);
        exit(EXIT_FAILURE);
    }
}

/**
 * @brief 
 *
 * 
 */
void pall(stack_t **stack, unsigned int number_line)
{
    (void)(number_line);
    stack_t *copy;

    copy = *stack;
    print_stackint(copy);
}