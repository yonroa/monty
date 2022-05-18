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
        {"nop", nop_stack},
        {NULL, NULL}
    };
    int index;

    for (index = 0; ops[index].opcode != NULL; index++)
    {
        if(strcmp(ops[index].opcode, command) == 0)
        {
            ops[index].f(stack, number_line);
            return;
        }
    }
    dprintf(STDOUT_FILENO, "L%u: unknown instructions <%s>\n", number_line, command);
    exit(EXIT_FAILURE);
}
