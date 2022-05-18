#include "monty.h"

/**
 * call_func - 
 * 
 * 
 * 
 */
void call_func(char *command, stack_t **stack, unsigned int number_line)
{
    instruction_t ops[] = {
        {"push", push_stack},
        {"pall", pall_stack},
        {NULL, NULL}
    };

    int index = 0;

    for (index; ops[i].opcode != NULL; index++)
    {
        if(strcmp(ops[i].opcode, command) == 0)
        {
            ops[i].f(stack, number_line);
        }
    }
    fprintf(stderr, "L%u: unknown instructions <%s>", number_line, command);
    exit(EXIT_FAILURE);
}
