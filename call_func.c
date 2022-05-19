#include "monty.h"

/**
 * call_func - Call the function to execute the command
 * @command: Command to be executed
 * @stack: Stack to be modified
 * @number_line: Line of the file
 */
void call_func(char *command, stack_t **stack, unsigned int number_line)
{
	instruction_t ops[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop_stack},
		{NULL, NULL}};
	int index;

	for (index = 0; ops[index].opcode != NULL; index++)
	{
		if (strcmp(ops[index].opcode, command) == 0)
		{
			ops[index].f(stack, number_line);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instructions <%s>\n", number_line, command);
	free_stacktint(stack);
	exit(EXIT_FAILURE);
}
